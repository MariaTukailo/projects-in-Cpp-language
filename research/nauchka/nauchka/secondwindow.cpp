#include "secondwindow.h"
#include "ui_secondwindow.h"
#include "room.h"
#include <QMessageBox>
#include <QApplication>
#include <QString>
#include "choicemode.h"
#include <QDebug>

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}

bool SecondWindow::SetMaterialFromRadioButton()
{
  if(ui->TREE->isChecked())
  {
    room.SetMaterial(1);
  }
  else if (ui->BETON->isChecked())
  {
    room.SetMaterial(2);
  }
  else if(ui->BRICK->isChecked())
  {
    room.SetMaterial(3);
  }
  else
  {
      return false;
  }

  return true;
}


void SecondWindow::on_pushButton_clicked()
{
    QApplication::setStyle("Fusion");


    QString length = ui->lenght->text();
    QString widhth = ui->widhth->text();
    QString height = ui->heigh->text();

    if( room.SetLenght(length,ui->lenght)&&room.SetWidht(widhth,ui->widhth)&&room.SetHeight(height,ui->heigh)&&SetMaterialFromRadioButton())
    {
        qDebug() << "Room dimensions after setting:"
                         << room.getLength() << room.getWidth() << room.getHeight();
        hide();
        Choicemode = new ChoiceMode(room, this);  // Теперь передаем room
                Choicemode->show();

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
