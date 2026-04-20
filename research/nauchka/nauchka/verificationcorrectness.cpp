#include "verificationcorrectness.h"
#include "ui_verificationcorrectness.h"
#include "room.h"
#include "detector.h"
#include <QVector>
#include <cmath>
#include <limits>

VerificationCorrectness::VerificationCorrectness(const room& currentRoom, const QVector<detector>& detectors, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VerificationCorrectness),  // Ui:: с большой U
    currentRoom(currentRoom),
    detectors(detectors)
{
    ui->setupUi(this);  // setupUi с большой U
}

VerificationCorrectness::~VerificationCorrectness()
{
    delete ui;
}

void VerificationCorrectness::on_doneButton_2_clicked()
{
    hide();
    windowMAIN= new MainWindow(this);
    windowMAIN->show();
}

double calculateDistance(double x1, double y1, double z1, double x2, double y2, double z2)
{
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dz = z2 - z1;
    return sqrt(dx*dx + dy*dy + dz*dz);
}


void VerificationCorrectness::on_doneButton_clicked()
{
    double l[4];

    if(detectors.size()<2)
{ui->TIME->setText(QString("Извещатели установлены некорректно"));
        ui->TIME->setStyleSheet("color: red; background-color: rgb(255, 200, 200); font-weight: bold; padding: 5px;");
        return;

    }
    for (const detector& det : detectors) {

    double dist=currentRoom.getHeight()-det.getZ();
    if(dist>det.getZ())//ближе к полу
    {
        l[0]=calculateDistance(det.getX(), det.getY(), det.getZ(), 0, 0, 0);
        l[1]=calculateDistance(det.getX(), det.getY(), det.getZ(), currentRoom.getWidth(), 0, 0);
        l[2]=calculateDistance(det.getX(), det.getY(), det.getZ(), 0,currentRoom.getLength(), 0);
        l[3]=calculateDistance(det.getX(), det.getY(), det.getZ(), currentRoom.getWidth(),currentRoom.getLength(), 0);
    }
    else//ближе к потолку
    {
        l[0]=calculateDistance(det.getX(), det.getY(), det.getZ(), 0, 0, currentRoom.getHeight());
        l[1]=calculateDistance(det.getX(), det.getY(), det.getZ(), currentRoom.getWidth(), 0, currentRoom.getHeight());
        l[2]=calculateDistance(det.getX(), det.getY(), det.getZ(), 0,currentRoom.getLength(), currentRoom.getHeight());
        l[3]=calculateDistance(det.getX(), det.getY(), det.getZ(), currentRoom.getWidth(),currentRoom.getLength(), currentRoom.getHeight());
    }

     double distMAX = std::numeric_limits<double>::lowest();
     for(int i=0;i<4;i++)
     {
         if(l[i]>distMAX)
         {
             distMAX=l[i];
         }
     }

     double  timeDistribution;
     double timeResponse;

     if(ui->DYM->isChecked())
     {
         timeResponse=7;
         timeDistribution= distMAX/0.35;

     }
     else if (ui->Teplovoy->isChecked())
     {
         timeResponse = 15;
             double Q;
             if(currentRoom.material == 0) Q = 1750;
             else if(currentRoom.material == 1) Q = 375;
             else Q = 75;

             double L = distMAX;

             // ФИЗИЧЕСКИ КОРРЕКТНЫЕ ПАРАМЕТРЫ:

             // Объем зоны срабатывания датчика (не всего помещения!)
             double sensor_volume = 0.1 * L;  // 0.01 м³ на метр расстояния

             double rho = 1.2;         // плотность воздуха, кг/м³
             double c_p = 1000;        // теплоемкость, Дж/(кг·К)
             double deltaT = 50;       // разность температур, °C

             // Энергия для прогрева зоны датчика
             double energy = sensor_volume * rho * c_p * deltaT;  // Джоули

             // Время прогрева
             double t_heating = energy / Q;  // секунды

             // Время распространения
             double t_propagation = L ;  // скорость конвекции 1 м/с

             timeDistribution = t_heating + t_propagation + timeResponse;
     }

     else
     {
         return;
     }

     double Time=timeDistribution+ timeResponse;

         if (Time > 120) {
             ui->TIME->setText(QString("Извещатели установлены некорректно"));
             ui->TIME->setStyleSheet("color: red; background-color: rgb(255, 200, 200); font-weight: bold; padding: 5px;");
             return;
         } else if (Time >= 60) {
             ui->TIME->setText(QString("Расстановка требует корректировки"));
             ui->TIME->setStyleSheet("color: orange; background-color: rgb(255, 255, 200); font-weight: bold; padding: 5px;");
             return;
         }

      }

    ui->TIME->setText(QString("Извещатели установлены корректно"));
    ui->TIME->setStyleSheet("color: green; background-color: rgb(200, 255, 200); font-weight: bold; padding: 5px;");


}
