#include "detector.h"

detector::detector()
{
 x=0;
 y=0;
 z=0;
}

 detector::detector(double X,double Y, double Z)
 {
     x=X;
     y=Y;
     z=Z;
 }

bool detector::isInRoom(double roomLength, double roomWidth, double roomHeight) const
{
    return (x >= 0 && x <= roomLength &&
            y >= 0 && y <= roomWidth &&
            z >= 0 && z <= roomHeight);
}
