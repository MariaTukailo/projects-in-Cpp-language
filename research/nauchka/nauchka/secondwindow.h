#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H
#include "room.h"
#include <QDialog>
class ChoiceMode;

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    bool SetMaterialFromRadioButton();
    ~SecondWindow();

private slots:


   void on_pushButton_clicked();

   protected:
    Ui::SecondWindow *ui;
      room room;
      ChoiceMode *Choicemode;
};

#endif // SECONDWINDOW_H
