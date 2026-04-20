#include "room.h"
#include <QApplication>
#include <QString>
#include <QLineEdit>

room::room()
{

    length=0;
    width=0;
    height=0;
    material=TREE;


}

bool room::SetLenght(QString Length,QLineEdit *lineEdit)
{
    bool isDouble;
    length = Length.toDouble(&isDouble);

    if(isDouble&&length>0)
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

bool room::SetWidht(QString widhth,QLineEdit *lineEdit)
{
    bool isDouble;
   width = widhth.toDouble(&isDouble);

    if(isDouble&& widhth>0)
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

bool room::SetHeight(QString Height,QLineEdit *lineEdit)
{
    bool isDouble;
   height= Height.toDouble(&isDouble);

    if(isDouble&&length>0)
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


void room::SetMaterial(int choiceMaterial)
{

 if(choiceMaterial==1)
 {
    material=TREE;
 }
 else if(choiceMaterial==2)
 {
    material=BETON;
 }
 else
 {
    material=BRICK;
 }

}
