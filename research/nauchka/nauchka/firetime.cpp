#include "firetime.h"
#include "ui_firetime.h"
#include <QMessageBox>
#include <cmath>

FireTime::FireTime(const room& currentRoom, const QVector<detector>& detectors, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FireTime),
    currentRoom(currentRoom),
    detectors(detectors)
{
    ui->setupUi(this);
}

FireTime::~FireTime()
{
    delete ui;
}

double CalculateDistance(double x1, double y1, double z1, double x2, double y2, double z2)
{
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dz = z2 - z1;
    return sqrt(dx*dx + dy*dy + dz*dz);
}

void FireTime::on_doneButton_clicked()
{
    double X,Y,Z;
    bool okX, okY, okZ;


    X = ui->X->text().toDouble(&okX);
    Y = ui->Y->text().toDouble(&okY);
    Z = ui->Z->text().toDouble(&okZ);

    if(!okX|| !okY || !okZ)
    {
        QMessageBox msgBox(this);
        msgBox.setWindowTitle("СООБЩЕНИЕ");
        msgBox.setText("ПРОВЕРЬТЕ, ВВЕЛИ ЛИ ВЫ ВСЕ ЗНАЧЕНИЯ И НАСКОЛЬКО ОНИ КОРРЕКТНЫ!");
        msgBox.setIcon(QMessageBox::Critical);


        msgBox.setStyleSheet(
            "QLabel { color: white; } "
            "QPushButton { background-color: gray; color: white; } "

        );

        msgBox.exec();

        return;
    }

    detector nearestDetector = detectors.first(); // берем первый как начальный
        double minDistance = std::numeric_limits<double>::max(); // максимальное значение

        for (const detector& det : detectors) {
            // Рассчитываем расстояние от извещателя до точки возгорания
            double distance = CalculateDistance(det.getX(), det.getY(), det.getZ(), X, Y, Z);

            // Если нашли более близкий извещатель
            if (distance < minDistance) {
                minDistance = distance;
                nearestDetector = det;
            }
        }

    double  timeDistribution;
    double timeResponse;

    if(ui->DYM->isChecked())
    {
        timeResponse=7;
        timeDistribution= minDistance/0.35;

    }
    else if (ui->Teplovoy->isChecked())
    {
        timeResponse = 15;
            double Q;
            if(currentRoom.material == 0) Q = 1750;
            else if(currentRoom.material == 1) Q = 375;
            else Q = 75;

            double L = minDistance;

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

    ui->TIME->setText(QString("Время срабатывания: %1 сек").arg(Time, 0, 'f', 2));

        if (Time > 120) {
            ui->TIME->setStyleSheet("color: red; background-color: rgb(255, 200, 200); font-weight: bold; padding: 5px;");
        } else if (Time >= 60) {
            ui->TIME->setStyleSheet("color: orange; background-color: rgb(255, 255, 200); font-weight: bold; padding: 5px;");
        } else {
            ui->TIME->setStyleSheet("color: green; background-color: rgb(200, 255, 200); font-weight: bold; padding: 5px;");
        }

}

void FireTime::on_doneButton_2_clicked()
{
    hide();
    windowMAIN= new MainWindow(this);
    windowMAIN->show();
}
