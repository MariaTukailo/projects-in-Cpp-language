#ifndef ROOM_H
#define ROOM_H
#include <QApplication>
#include <QLineEdit>

class room
{
public:

    enum material
    {
        TREE,
        BETON,
        BRICK
    };

    double length=0;
    double width=0;
    double height=0;
    material material=TREE;

public:
    room();
    bool SetLenght(QString length,QLineEdit *lineEdit);
    bool SetWidht(QString widhth,QLineEdit *lineEdit);
    bool SetHeight(QString height,QLineEdit *lineEdit);
    void SetMaterial(int choiceMaterial);

    double getLength() const { return length; }
    double getWidth() const { return width; }
    double getHeight() const { return height; }
};

#endif // ROOM_H
