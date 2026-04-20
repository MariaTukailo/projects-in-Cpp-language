#ifndef FIRETIME_H
#define FIRETIME_H

#include <QDialog>
#include "room.h"
#include "detector.h"
#include <QVector>
#include "mainwindow.h"

namespace Ui {
class FireTime;
}

class FireTime : public QDialog
{
    Q_OBJECT

public:
   explicit FireTime(const room& currentRoom, const QVector<detector>& detectors, QWidget *parent = nullptr);
    ~FireTime();

protected:
    Ui::FireTime *ui;
    room currentRoom;
    QVector<detector> detectors;
    MainWindow* windowMAIN;
private slots:
    void on_doneButton_clicked();
    void on_doneButton_2_clicked();

};

#endif // FIRETIME_H
