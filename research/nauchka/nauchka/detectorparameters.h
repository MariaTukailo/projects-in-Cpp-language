#ifndef DETECTORPARAMETERS_H
#define DETECTORPARAMETERS_H
#include <QVector>
#include "detector.h"
#include <QDialog>
#include <QLineEdit>
#include <QGridLayout>
#include "room.h"
#include <QPushButton>
#include "firetime.h"
#include"verificationcorrectness.h"

namespace Ui {
class DetectorParameters;
}

class DetectorParameters : public QDialog
{
    Q_OBJECT

public:
    explicit DetectorParameters(const room& currentRoom, QWidget *parent = nullptr,int flag=0);
    ~DetectorParameters();

 QVector<detector> getDetectors() const { return detectors; }

protected:
    Ui::DetectorParameters *ui;
room currentRoom;
    QVector<QLineEdit*> xEdits;
        QVector<QLineEdit*> yEdits;
        QVector<QLineEdit*> zEdits;
         QVector<detector> detectors;
int currentFlag;
FireTime* firetimeWindow;
VerificationCorrectness *VerificationCorrectnessWindow;

private slots:
    void on_pushButton_clicked();
    void on_doneButton_clicked();
};

#endif // DETECTORPARAMETERS_H
