#ifndef CHOICEMODE_H
#define CHOICEMODE_H

#include <QDialog>
#include "detectorparameters.h"
#include "room.h"
#include "automaticplacement.h"

namespace Ui {
class ChoiceMode;
}

class ChoiceMode : public QDialog
{
    Q_OBJECT

public:
     explicit ChoiceMode(const room& currentRoom, QWidget *parent = nullptr);
    ~ChoiceMode();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

protected:
    Ui::ChoiceMode *ui;
    DetectorParameters *Detectorparameters;
    room currentRoom;
    AutomaticPlacement* AutomaticPlacementWindow;
};

#endif // CHOICEMODE_H
