/********************************************************************************
** Form generated from reading UI file 'firetime.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRETIME_H
#define UI_FIRETIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_FireTime
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QRadioButton *DYM;
    QRadioButton *Teplovoy;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *X;
    QLineEdit *Y;
    QLineEdit *Z;
    QLabel *label_8;
    QPushButton *doneButton;
    QLabel *TIME;
    QPushButton *doneButton_2;

    void setupUi(QDialog *FireTime)
    {
        if (FireTime->objectName().isEmpty())
            FireTime->setObjectName(QString::fromUtf8("FireTime"));
        FireTime->resize(1405, 893);
        FireTime->setStyleSheet(QString::fromUtf8("background-color: lightbblack;"));
        label = new QLabel(FireTime);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 1311, 211));
        label_2 = new QLabel(FireTime);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 250, 1311, 631));
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgb(167, 167, 167)"));
        label_3 = new QLabel(FireTime);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 290, 551, 131));
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);"));
        DYM = new QRadioButton(FireTime);
        DYM->setObjectName(QString::fromUtf8("DYM"));
        DYM->setGeometry(QRect(680, 300, 651, 41));
        DYM->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 125, 125);\n"
"\n"
"    color: rgb(255, 85, 0);\n"
"    font-size: 25px;\n"
"    font-weight: bold;\n"
"    font-family: Arial;"));
        Teplovoy = new QRadioButton(FireTime);
        Teplovoy->setObjectName(QString::fromUtf8("Teplovoy"));
        Teplovoy->setGeometry(QRect(680, 370, 651, 41));
        Teplovoy->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 125, 125);\n"
"\n"
"    color: rgb(255, 85, 0);\n"
"    font-size: 25px;\n"
"    font-weight: bold;\n"
"    font-family: Arial;"));
        label_4 = new QLabel(FireTime);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 460, 441, 141));
        label_4->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);"));
        label_5 = new QLabel(FireTime);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(690, 460, 181, 51));
        label_5->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);"));
        label_6 = new QLabel(FireTime);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(920, 460, 191, 51));
        label_6->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);"));
        label_7 = new QLabel(FireTime);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1150, 460, 171, 51));
        label_7->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);"));
        X = new QLineEdit(FireTime);
        X->setObjectName(QString::fromUtf8("X"));
        X->setGeometry(QRect(690, 530, 181, 71));
        X->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        Y = new QLineEdit(FireTime);
        Y->setObjectName(QString::fromUtf8("Y"));
        Y->setGeometry(QRect(920, 530, 191, 71));
        Y->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        Z = new QLineEdit(FireTime);
        Z->setObjectName(QString::fromUtf8("Z"));
        Z->setGeometry(QRect(1150, 530, 171, 71));
        Z->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        label_8 = new QLabel(FireTime);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(100, 460, 101, 141));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../\320\262\320\276\320\267\320\263\320\276\321\200\320\260\320\275\320\270\320\2653.png")));
        doneButton = new QPushButton(FireTime);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(100, 680, 551, 141));
        doneButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: green;\n"
"    color: black;\n"
"    font-weight: bold;        /* \320\226\320\270\321\200\320\275\321\213\320\271 */\n"
"    font-size: 20px;         /* \320\240\320\260\320\267\320\274\320\265\321\200 */\n"
"    font-family: Arial;      /* \320\250\321\200\320\270\321\204\321\202 (\320\276\320\277\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\276) */\n"
"    border: 2px solid green;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(54, 102, 46)/* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:rgb(54, 102, 46);   /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        TIME = new QLabel(FireTime);
        TIME->setObjectName(QString::fromUtf8("TIME"));
        TIME->setGeometry(QRect(680, 680, 451, 141));
        TIME->setStyleSheet(QString::fromUtf8("background-color:white"));
        doneButton_2 = new QPushButton(FireTime);
        doneButton_2->setObjectName(QString::fromUtf8("doneButton_2"));
        doneButton_2->setGeometry(QRect(1160, 680, 181, 141));
        doneButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: red;\n"
"    color: black;\n"
"    font-weight: bold;        /* \320\226\320\270\321\200\320\275\321\213\320\271 */\n"
"    font-size: 20px;         /* \320\240\320\260\320\267\320\274\320\265\321\200 */\n"
"    font-family: Arial;      /* \320\250\321\200\320\270\321\204\321\202 (\320\276\320\277\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\276) */\n"
"    border: 2px solid red;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(154, 1, 42)/* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(154, 1, 42);   /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        label_2->raise();
        label->raise();
        label_3->raise();
        DYM->raise();
        Teplovoy->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        X->raise();
        Y->raise();
        Z->raise();
        label_8->raise();
        doneButton->raise();
        TIME->raise();
        doneButton_2->raise();

        retranslateUi(FireTime);

        QMetaObject::connectSlotsByName(FireTime);
    } // setupUi

    void retranslateUi(QDialog *FireTime)
    {
        FireTime->setWindowTitle(QCoreApplication::translate("FireTime", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FireTime", "<html><head/><body><p align=\"center\"><span style=\" font-size:15pt; font-weight:600; color:red;\">\320\240\320\220\320\241\320\241\320\247\320\225\320\242 \320\222\320\240\320\225\320\234\320\225\320\235\320\230 \320\241\320\240\320\220\320\221\320\220\320\242\320\253\320\222\320\220\320\235\320\230\320\257 \320\241\320\230\320\223\320\235\320\220\320\233\320\230\320\227\320\220\320\246\320\230\320\230 </span></p></body></html>", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("FireTime", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#ff5500;\">\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\202\320\270\320\277 \320\270\320\267\320\262\320\265\321\211\320\260\321\202\320\265\320\273\321\217:</span></p></body></html>", nullptr));
        DYM->setText(QCoreApplication::translate("FireTime", "\320\224\320\253\320\234\320\236\320\222\320\236\320\231", nullptr));
        Teplovoy->setText(QCoreApplication::translate("FireTime", "\320\242\320\225\320\237\320\233\320\236\320\222\320\236\320\231", nullptr));
        label_4->setText(QCoreApplication::translate("FireTime", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-weight:600; color:#ff5500;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213 \320\262\320\276\320\267\320\263\320\276\321\200\320\260\320\275\320\270\321\217:</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("FireTime", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#ff5500;\">X</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("FireTime", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#ff5500;\">Y</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("FireTime", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#ff5500;\">Z</span></p></body></html>", nullptr));
        label_8->setText(QString());
        doneButton->setText(QCoreApplication::translate("FireTime", "\320\240\320\220\320\241\320\241\320\247\320\230\320\242\320\220\320\242\320\254 \320\222\320\240\320\225\320\234\320\257", nullptr));
        TIME->setText(QCoreApplication::translate("FireTime", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        doneButton_2->setText(QCoreApplication::translate("FireTime", "\320\224\320\220\320\233\320\225\320\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FireTime: public Ui_FireTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRETIME_H
