#include "automaticplacement.h"
#include "ui_automaticplacement.h"
#include "room.h"
#include "detector.h"
#include <QVector>
#include <cmath>
#include <limits>
#include <algorithm>
#include <QLayout>


AutomaticPlacement::AutomaticPlacement(const room& currentRoom,  QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AutomaticPlacement),  // Ui:: с большой U
    currentRoom(currentRoom)
{
    ui->setupUi(this);
}

AutomaticPlacement::~AutomaticPlacement()
{
    delete ui;
}

void AutomaticPlacement::on_doneButton_2_clicked()
{
    hide();
    windowMAIN= new MainWindow(this);
    windowMAIN->show();
}


struct NormativeParams {
    double maxDistanceBetweenDetectors;
    double distanceFromWall;
};

NormativeParams getNormativeParams(bool isHeatDetector) {
    NormativeParams params;
    if (isHeatDetector) {
        params.maxDistanceBetweenDetectors = 5.0;
        params.distanceFromWall = 2.5;
    } else {
        params.maxDistanceBetweenDetectors = 9.0;
        params.distanceFromWall = 4.5;
    }
    return params;
}

void AutomaticPlacement::on_doneButton_clicked() {
    detectors.clear();
      double width = currentRoom.getWidth();
      double length = currentRoom.getLength();
      double height = currentRoom.getHeight();

      bool isHeatDetector = ui->Teplovoy->isChecked();
      NormativeParams params = getNormativeParams(isHeatDetector);

      // РАСЧЕТ КОЛИЧЕСТВА ПО НОРМАТИВАМ
      double workingWidth = width - 2 * params.distanceFromWall;
      double workingLength = length - 2 * params.distanceFromWall;

      // Если рабочая зона отрицательная - комната слишком маленькая
      if (workingWidth <= 0 || workingLength <= 0) {
          // Минимум 2 извещателя в маленькой комнате
          detectors.append(detector(width/2, length/3, height));
          detectors.append(detector(width/2, 2*length/3, height));
      } else {
          // Нормальный расчет по нормативам
          int detectorsInWidth = std::ceil(workingWidth / params.maxDistanceBetweenDetectors);
          int detectorsInLength = std::ceil(workingLength / params.maxDistanceBetweenDetectors);

          // Гарантируем минимум 1 извещатель в каждом направлении
          detectorsInWidth = std::max(1, detectorsInWidth);
          detectorsInLength = std::max(1, detectorsInLength);

          // Рассчитываем шаги
          double stepX = workingWidth / (detectorsInWidth - 1);
          double stepY = workingLength / (detectorsInLength - 1);

          // Расставляем извещатели
          for (int i = 0; i < detectorsInWidth; i++) {
              for (int j = 0; j < detectorsInLength; j++) {
                  double x = params.distanceFromWall + i * stepX;
                  double y = params.distanceFromWall + j * stepY;
                  detectors.append(detector(x, y, height));
              }
          }
}
    // Очищаем старые поля ввода
    xEdits.clear();
    yEdits.clear();
    zEdits.clear();

    // Удаляем старые виджеты
    QLayout *oldLayout = ui->coordinatesWidget->layout();
    if (oldLayout) {
        QLayoutItem *item;
        while ((item = oldLayout->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
        delete oldLayout;
    }

    // Создаем контейнер
    QWidget *container = new QWidget();
    QVBoxLayout *containerLayout = new QVBoxLayout(container);
    QGridLayout *grid = new QGridLayout();

    // Заголовки таблицы
    grid->addWidget(new QLabel("Извещатель"), 0, 0);
    grid->addWidget(new QLabel("X"), 0, 1);
    grid->addWidget(new QLabel("Y"), 0, 2);
    grid->addWidget(new QLabel("Z"), 0, 3);

    // Заполняем данными
    for (int i = 0; i < detectors.size(); ++i) {
        const detector& det = detectors[i];
        QLabel *label = new QLabel(QString("Извещатель %1").arg(i + 1));
        QLineEdit *xEdit = new QLineEdit(QString::number(det.getX(), 'f', 2));
        QLineEdit *yEdit = new QLineEdit(QString::number(det.getY(), 'f', 2));
        QLineEdit *zEdit = new QLineEdit(QString::number(det.getZ(), 'f', 2));

        xEdit->setReadOnly(true);
        yEdit->setReadOnly(true);
        zEdit->setReadOnly(true);

        grid->addWidget(label, i + 1, 0);
        grid->addWidget(xEdit, i + 1, 1);
        grid->addWidget(yEdit, i + 1, 2);
        grid->addWidget(zEdit, i + 1, 3);

        xEdits.append(xEdit);
        yEdits.append(yEdit);
        zEdits.append(zEdit);
    }

    containerLayout->addLayout(grid);
    containerLayout->addStretch();

    // Устанавливаем в coordinatesWidget
    QVBoxLayout *mainLayout = new QVBoxLayout(ui->coordinatesWidget);
    mainLayout->addWidget(container);
    ui->coordinatesWidget->setLayout(mainLayout);

    // Показываем количество
    ui->countLabel->setText(QString::number(detectors.size()));

    // Показываем кнопку
    ui->doneButton->setVisible(true);
}


