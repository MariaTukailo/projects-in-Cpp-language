/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QLabel *label;
    QPushButton *EXIT;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_8;
    QLineEdit *lenght;
    QLabel *label_9;
    QLineEdit *widhth;
    QLabel *label_10;
    QLineEdit *heigh;
    QLabel *label_11;
    QRadioButton *TREE;
    QRadioButton *BETON;
    QRadioButton *BRICK;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QString::fromUtf8("SecondWindow"));
        SecondWindow->resize(1233, 831);
        SecondWindow->setStyleSheet(QString::fromUtf8("background-color: lightbblack;"));
        label = new QLabel(SecondWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, -50, 1161, 261));
        EXIT = new QPushButton(SecondWindow);
        EXIT->setObjectName(QString::fromUtf8("EXIT"));
        EXIT->setGeometry(QRect(20, 761, 531, 51));
        EXIT->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton = new QPushButton(SecondWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(580, 760, 631, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_2 = new QLabel(SecondWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 170, 1191, 571));
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgb(167, 167, 167)"));
        label_3 = new QLabel(SecondWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 200, 491, 101));
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);\n"
""));
        label_4 = new QLabel(SecondWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(600, 200, 591, 101));
        label_4->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);\n"
""));
        label_5 = new QLabel(SecondWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(550, 163, 31, 591));
        label_8 = new QLabel(SecondWindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 350, 161, 41));
        label_8->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);\n"
""));
        lenght = new QLineEdit(SecondWindow);
        lenght->setObjectName(QString::fromUtf8("lenght"));
        lenght->setGeometry(QRect(210, 350, 321, 41));
        lenght->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        label_9 = new QLabel(SecondWindow);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 490, 161, 41));
        label_9->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);\n"
""));
        widhth = new QLineEdit(SecondWindow);
        widhth->setObjectName(QString::fromUtf8("widhth"));
        widhth->setGeometry(QRect(210, 490, 321, 41));
        widhth->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        label_10 = new QLabel(SecondWindow);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 620, 161, 41));
        label_10->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);\n"
""));
        heigh = new QLineEdit(SecondWindow);
        heigh->setObjectName(QString::fromUtf8("heigh"));
        heigh->setGeometry(QRect(210, 620, 321, 41));
        heigh->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        label_11 = new QLabel(SecondWindow);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(600, 350, 591, 41));
        label_11->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);\n"
""));
        TREE = new QRadioButton(SecondWindow);
        TREE->setObjectName(QString::fromUtf8("TREE"));
        TREE->setGeometry(QRect(600, 440, 591, 51));
        TREE->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 125, 125);\n"
"\n"
"    color: rgb(255, 85, 0);\n"
"    font-size: 25px;\n"
"    font-weight: bold;\n"
"    font-family: Arial;\n"
""));
        BETON = new QRadioButton(SecondWindow);
        BETON->setObjectName(QString::fromUtf8("BETON"));
        BETON->setGeometry(QRect(600, 530, 591, 51));
        BETON->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 125, 125);\n"
"\n"
"    color: rgb(255, 85, 0);\n"
"    font-size: 25px;\n"
"    font-weight: bold;\n"
"    font-family: Arial;\n"
""));
        BRICK = new QRadioButton(SecondWindow);
        BRICK->setObjectName(QString::fromUtf8("BRICK"));
        BRICK->setGeometry(QRect(600, 620, 591, 51));
        BRICK->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 125, 125);\n"
"\n"
"    color: rgb(255, 85, 0);\n"
"    font-size: 25px;\n"
"    font-weight: bold;\n"
"    font-family: Arial;\n"
""));

        retranslateUi(SecondWindow);
        QObject::connect(EXIT, SIGNAL(clicked()), SecondWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:32pt; font-weight:600; color:red;\">\320\237\320\220\320\240\320\220\320\234\320\225\320\242\320\240\320\253 \320\232\320\236\320\234\320\235\320\220\320\242\320\253 </span></p></body></html>", nullptr));
        EXIT->setText(QCoreApplication::translate("SecondWindow", "\320\222\320\253\320\245\320\236\320\224", nullptr));
        pushButton->setText(QCoreApplication::translate("SecondWindow", "\320\224\320\220\320\233\320\225\320\225", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#ff5500;\">\320\222\320\222\320\225\320\224\320\230\320\242\320\225 \320\240\320\220\320\227\320\234\320\225\320\240\320\253 </span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#ff5500;\">\320\232\320\236\320\234\320\235\320\220\320\242\320\253: </span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#ff5500;\">\320\222\320\253\320\221\320\225\320\240\320\230\320\242\320\225 \320\245\320\220\320\240\320\220\320\232\320\242\320\225\320\240\320\230\320\241\320\242\320\230\320\232\320\230</span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#ff5500;\">\320\232\320\236\320\234\320\235\320\220\320\242\320\253: </span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("SecondWindow", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-weight:600; color:#ff5500;\">\320\264\320\273\320\270\320\275\320\260 (\320\274): </span></p><p align=\"center\"><br/></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-weight:600; color:#ff5500;\">\321\210\320\270\321\200\320\270\320\275\320\260 (\320\274): </span></p><p align=\"center\"><br/></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt; font-weight:600; color:#ff5500;\">\320\262\321\213\321\201\320\276\321\202\320\260 (\320\274): </span></p><p align=\"center\"><br/></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("SecondWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#ff5500;\">\320\234\320\220\320\242\320\225\320\240\320\230\320\220\320\233:</span></p></body></html>", nullptr));
        TREE->setText(QCoreApplication::translate("SecondWindow", "\320\224\320\240\320\225\320\222\320\225\320\241\320\230\320\235\320\220", nullptr));
        BETON->setText(QCoreApplication::translate("SecondWindow", "\320\221\320\225\320\242\320\236\320\235", nullptr));
        BRICK->setText(QCoreApplication::translate("SecondWindow", "\320\232\320\230\320\240\320\237\320\230\320\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
