#ifndef VERIFICATIONCORRECTNESS_H
#define VERIFICATIONCORRECTNESS_H

#include <QDialog>
#include <QVector>
#include "room.h"
#include "detector.h"
#include "mainwindow.h"

namespace Ui {
class VerificationCorrectness;
}

class VerificationCorrectness : public QDialog
{
    Q_OBJECT

public:
    explicit VerificationCorrectness(const room& currentRoom, const QVector<detector>& detectors, QWidget *parent = nullptr);
    ~VerificationCorrectness();

private slots:
    void on_doneButton_2_clicked();

    void on_doneButton_clicked();

private:
    Ui::VerificationCorrectness *ui;
    room currentRoom;
    QVector<detector> detectors;
     MainWindow* windowMAIN;
};

#endif // VERIFICATIONCORRECTNESS_H
