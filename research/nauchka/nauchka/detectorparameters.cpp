#include "detectorparameters.h"
#include "ui_detectorparameters.h"
#include <QMessageBox>
#include <QLabel>
#include <QTableWidgetItem>
#include <QScrollArea>
#include <QScrollBar>
#include "room.h"
#include "detector.h"

DetectorParameters::DetectorParameters(const room& currentRoom, QWidget *parent,int flag) :
    QDialog(parent),
    ui(new Ui::DetectorParameters),
    currentRoom(currentRoom),
    currentFlag(flag)
{
    ui->setupUi(this);

    // ПОДКЛЮЧАЕМ сигнал к слоту (кнопка уже создана в дизайнере)
    //connect(ui->doneButton, &QPushButton::clicked, this, &DetectorParameters::on_doneButton_clicked);

    // СКРЫВАЕМ кнопку сначала
    ui->doneButton->setVisible(false);
}
DetectorParameters::~DetectorParameters()
{
    delete ui;
}

bool SetCountDetectors(QString contDetectors,QLineEdit *lineEdit)
{
    bool isInt;
    int cont =  contDetectors.toInt(&isInt);

    if(isInt&&cont>0)
    {
        lineEdit->setStyleSheet("QLineEdit { background-color: white; color: black; }");
        return true;
    }
    else
    {
        lineEdit->setStyleSheet("QLineEdit { background-color: red; color: white; }");
        return false;
    }
}

void DetectorParameters::on_pushButton_clicked()
{

     QString contDetectors = ui->contDetectors->text();
     if(SetCountDetectors(contDetectors,ui->contDetectors))
     {
         int count=contDetectors.toInt();
         xEdits.clear();
            yEdits.clear();
            zEdits.clear();
            detectors.clear();

            // Удаляем старые виджеты из coordinatesWidget
            QLayout *oldLayout = ui->coordinatesWidget->layout();
            if (oldLayout) {
                QLayoutItem *item;
                while ((item = oldLayout->takeAt(0)) != nullptr) {
                    delete item->widget();
                    delete item;
                }
                delete oldLayout;
            }

            // Создаем Scroll Area
            QScrollArea *scrollArea = new QScrollArea(ui->coordinatesWidget);
            QWidget *container = new QWidget();
            QVBoxLayout *containerLayout = new QVBoxLayout(container);
            QGridLayout *grid = new QGridLayout();

            // Добавляем заголовки таблицы
            grid->addWidget(new QLabel("Извещатель"), 0, 0);
            grid->addWidget(new QLabel("X"), 0, 1);
            grid->addWidget(new QLabel("Y"), 0, 2);
            grid->addWidget(new QLabel("Z"), 0, 3);

            // Создаем поля для каждого извещателя
            for (int i = 0; i < count; ++i) {
                QLabel *label = new QLabel(QString("Извещатель %1").arg(i + 1));
                QLineEdit *xEdit = new QLineEdit();
                QLineEdit *yEdit = new QLineEdit();
                QLineEdit *zEdit = new QLineEdit();

                xEdit->setPlaceholderText("X");
                yEdit->setPlaceholderText("Y");
                zEdit->setPlaceholderText("Z");

                grid->addWidget(label, i + 1, 0);
                grid->addWidget(xEdit, i + 1, 1);
                grid->addWidget(yEdit, i + 1, 2);
                grid->addWidget(zEdit, i + 1, 3);

                xEdits.append(xEdit);
                yEdits.append(yEdit);
                zEdits.append(zEdit);
            }

            // Собираем контейнер
            containerLayout->addLayout(grid);
            containerLayout->addStretch();

            // Настраиваем Scroll Area
            scrollArea->setWidget(container);
            scrollArea->setWidgetResizable(true);
            scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

            // Устанавливаем Scroll Area в coordinatesWidget
            QVBoxLayout *mainLayout = new QVBoxLayout(ui->coordinatesWidget);
                   mainLayout->addWidget(scrollArea);
                   ui->coordinatesWidget->setLayout(mainLayout);

                   // ТОЛЬКО показываем кнопку, НЕ добавляем в layout
                   ui->doneButton->setVisible(true);
         }
     else
     {
         QMessageBox msgBox(this);
         msgBox.setWindowTitle("СООБЩЕНИЕ");
         msgBox.setText("ПРОВЕРЬТЕ, ВВЕЛИ ЛИ ВЫ ВСЕ ЗНАЧЕНИЯ И НАСКОЛЬКО ОНИ КОРРЕКТНЫ!");
         msgBox.setIcon(QMessageBox::Critical);


         msgBox.setStyleSheet(
             "QLabel { color: white; } "
             "QPushButton { background-color: gray; color: white; } "

         );

         msgBox.exec();

     }

}

void DetectorParameters::on_doneButton_clicked()
{
    detectors.clear();

    if (xEdits.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Сначала создайте извещатели (нажмите кнопку 'Ввод')");
        return;
    }

    for (int i = 0; i < xEdits.size(); ++i) {
        bool xOk, yOk, zOk;
        int x = xEdits[i]->text().toDouble(&xOk);
        int y = yEdits[i]->text().toDouble(&yOk);
        int z = zEdits[i]->text().toDouble(&zOk);

        // Проверка на пустые поля
        if (xEdits[i]->text().isEmpty() || yEdits[i]->text().isEmpty() || zEdits[i]->text().isEmpty()) {
            QMessageBox msgBox(this);
            msgBox.setWindowTitle("ОШИБКА");
            msgBox.setText(QString("Извещатель %1: заполните все поля координат (X, Y, Z)").arg(i + 1));
            msgBox.setIcon(QMessageBox::Warning);
            msgBox.setStyleSheet(
                "QLabel { color: white; } "
                "QPushButton { background-color: gray; color: white; } "
            );
            msgBox.exec();
            return;
        }

        // Проверка на числовые значения
        if (!xOk || !yOk || !zOk) {
            QMessageBox msgBox(this);
            msgBox.setWindowTitle("ОШИБКА");
            msgBox.setText(QString("Извещатель %1: введите корректные числовые значения").arg(i + 1));
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.setStyleSheet(
                "QLabel { color: white; } "
                "QPushButton { background-color: gray; color: white; } "
            );
            msgBox.exec();
            return;
        }

        // Проверка на нахождение в комнате
        detector det(x, y, z);
        if (!det.isInRoom(currentRoom.getLength(), currentRoom.getWidth(), currentRoom.getHeight())) {
            QMessageBox msgBox(this);
            msgBox.setWindowTitle("ОШИБКА");
            msgBox.setText(QString("Извещатель %1 находится вне комнаты!\n\n"
                                 "Размеры комнаты: %2 x %3 x %4\n"
                                 "Координаты детектора: (%5, %6, %7)")
                                 .arg(i + 1)
                                 .arg(currentRoom.getLength())
                                 .arg(currentRoom.getWidth())
                                 .arg(currentRoom.getHeight())
                                 .arg(x).arg(y).arg(z));
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.setStyleSheet(
                "QLabel { color: white; } "
                "QPushButton { background-color: gray; color: white; } "
            );
            msgBox.exec();
            return;
        }

        detectors.append(det);
    }


if(currentFlag==1)
{
   hide();
   firetimeWindow = new FireTime(currentRoom, detectors,this);
   firetimeWindow->show();
}
else
{
    hide();
    VerificationCorrectnessWindow = new VerificationCorrectness(currentRoom, detectors,this);
    VerificationCorrectnessWindow->show();
}
}
