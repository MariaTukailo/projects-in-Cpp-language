#ifndef AUTOMATICPLACEMENT_H
#define AUTOMATICPLACEMENT_H

#include <QDialog>
#include "mainwindow.h"
#include <QVector>
#include "room.h"
#include "detector.h"

namespace Ui {
class AutomaticPlacement;
}

class AutomaticPlacement : public QDialog
{
    Q_OBJECT

public:
    explicit AutomaticPlacement(const room& currentRoom, QWidget *parent = nullptr);
    ~AutomaticPlacement();

private slots:
    void on_doneButton_2_clicked();

    void on_doneButton_clicked();

private:
    QVector<QLineEdit*> xEdits;
        QVector<QLineEdit*> yEdits;
        QVector<QLineEdit*> zEdits;
    Ui::AutomaticPlacement *ui;
     MainWindow* windowMAIN;
     room currentRoom;
     QVector<detector> detectors;
};

#endif // AUTOMATICPLACEMENT_H
