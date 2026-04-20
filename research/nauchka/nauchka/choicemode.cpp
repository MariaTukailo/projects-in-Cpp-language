#include "choicemode.h"
#include "ui_choicemode.h"
#include "detectorparameters.h"
#include "room.h"

ChoiceMode::ChoiceMode(const room& currentRoom, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChoiceMode),
    currentRoom(currentRoom)  // Инициализируем room
{
    ui->setupUi(this);
}

ChoiceMode::~ChoiceMode()
{
    delete ui;
}

void ChoiceMode::on_pushButton_3_clicked()
{
    hide();
    Detectorparameters = new DetectorParameters(currentRoom, this,1);
       Detectorparameters->show();

}


void ChoiceMode::on_pushButton_2_clicked()
{
    hide();
    AutomaticPlacementWindow = new  AutomaticPlacement(currentRoom, this);
       AutomaticPlacementWindow ->show();}

void ChoiceMode::on_pushButton_clicked()
{
    hide();
    Detectorparameters = new DetectorParameters(currentRoom, this,2);
       Detectorparameters->show();
}
