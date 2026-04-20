#ifndef DETECTOR_H
#define DETECTOR_H


class detector
{
protected:
   double x;
   double y;
   double z;

public:
    detector();
    detector(double X,double Y, double Z);
    bool isInRoom(double roomLength, double roomWidth, double roomHeight) const;

   double getX()const{return x;}
   double getY()const{return y;}
   double getZ()const{return z;}
};



#endif // DETECTOR_H
