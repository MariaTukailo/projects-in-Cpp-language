/********************************************************************************
** Form generated from reading UI file 'detectorparameters.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETECTORPARAMETERS_H
#define UI_DETECTORPARAMETERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetectorParameters
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_8;
    QLineEdit *contDetectors;
    QPushButton *pushButton;
    QWidget *coordinatesWidget;
    QPushButton *doneButton;

    void setupUi(QDialog *DetectorParameters)
    {
        if (DetectorParameters->objectName().isEmpty())
            DetectorParameters->setObjectName(QString::fromUtf8("DetectorParameters"));
        DetectorParameters->resize(1496, 1064);
        DetectorParameters->setStyleSheet(QString::fromUtf8("background-color: lightbblack;"));
        label = new QLabel(DetectorParameters);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 0, 1161, 261));
        label_2 = new QLabel(DetectorParameters);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 270, 1451, 751));
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgb(167, 167, 167)"));
        label_8 = new QLabel(DetectorParameters);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 310, 461, 111));
        label_8->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);\n"
""));
        contDetectors = new QLineEdit(DetectorParameters);
        contDetectors->setObjectName(QString::fromUtf8("contDetectors"));
        contDetectors->setGeometry(QRect(530, 310, 731, 111));
        contDetectors->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        pushButton = new QPushButton(DetectorParameters);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1280, 310, 161, 111));
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
        coordinatesWidget = new QWidget(DetectorParameters);
        coordinatesWidget->setObjectName(QString::fromUtf8("coordinatesWidget"));
        coordinatesWidget->setGeometry(QRect(50, 449, 1381, 461));
        coordinatesWidget->setToolTipDuration(-2);
        coordinatesWidget->setStyleSheet(QString::fromUtf8("background-color: white;\n"
""));
        doneButton = new QPushButton(DetectorParameters);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(49, 921, 1381, 81));
        doneButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(DetectorParameters);

        QMetaObject::connectSlotsByName(DetectorParameters);
    } // setupUi

    void retranslateUi(QDialog *DetectorParameters)
    {
        DetectorParameters->setWindowTitle(QCoreApplication::translate("DetectorParameters", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DetectorParameters", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:600; color:red;\">\320\222\320\222\320\225\320\224\320\230\320\242\320\225 \320\224\320\220\320\235\320\235\320\253\320\225\n"
"\320\230\320\227\320\222\320\225\320\251\320\220\320\242\320\225\320\233\320\225\320\231 </span></p></body></html>", nullptr));
        label_2->setText(QString());
        label_8->setText(QCoreApplication::translate("DetectorParameters", "<html><head/><body><p align=\"center\"><span style=\" font-size:7pt; font-weight:600; color:#ff5500;\">\320\222\320\222\320\225\320\224\320\230\320\242\320\225 \320\232\320\236\320\233\320\230\320\247\320\225\320\241\320\242\320\222\320\236 \320\230\320\227\320\222\320\225\320\251\320\220\320\242\320\225\320\233\320\225\320\231</span></p><p align=\"center\"><span style=\" font-size:7pt;\"><br/></span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("DetectorParameters", "\320\222\320\222\320\236\320\224", nullptr));
        doneButton->setText(QCoreApplication::translate("DetectorParameters", "\320\223\320\236\320\242\320\236\320\222\320\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetectorParameters: public Ui_DetectorParameters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETECTORPARAMETERS_H
