/********************************************************************************
** Form generated from reading UI file 'verificationcorrectness.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFICATIONCORRECTNESS_H
#define UI_VERIFICATIONCORRECTNESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_VerificationCorrectness
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QRadioButton *DYM;
    QRadioButton *Teplovoy;
    QPushButton *doneButton;
    QLabel *TIME;
    QPushButton *doneButton_2;
    QLabel *TIME_2;
    QLabel *TIME_3;

    void setupUi(QDialog *VerificationCorrectness)
    {
        if (VerificationCorrectness->objectName().isEmpty())
            VerificationCorrectness->setObjectName(QString::fromUtf8("VerificationCorrectness"));
        VerificationCorrectness->resize(1385, 889);
        VerificationCorrectness->setStyleSheet(QString::fromUtf8("background-color: lightbblack;"));
        label = new QLabel(VerificationCorrectness);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 1331, 261));
        label_2 = new QLabel(VerificationCorrectness);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 220, 1331, 641));
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgb(167, 167, 167)"));
        label_3 = new QLabel(VerificationCorrectness);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 250, 551, 131));
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);"));
        DYM = new QRadioButton(VerificationCorrectness);
        DYM->setObjectName(QString::fromUtf8("DYM"));
        DYM->setGeometry(QRect(630, 260, 671, 41));
        DYM->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 125, 125);\n"
"\n"
"    color: rgb(255, 85, 0);\n"
"    font-size: 25px;\n"
"    font-weight: bold;\n"
"    font-family: Arial;"));
        Teplovoy = new QRadioButton(VerificationCorrectness);
        Teplovoy->setObjectName(QString::fromUtf8("Teplovoy"));
        Teplovoy->setGeometry(QRect(630, 330, 671, 41));
        Teplovoy->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 125, 125);\n"
"\n"
"    color: rgb(255, 85, 0);\n"
"    font-size: 25px;\n"
"    font-weight: bold;\n"
"    font-family: Arial;"));
        doneButton = new QPushButton(VerificationCorrectness);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(60, 400, 1071, 151));
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
        TIME = new QLabel(VerificationCorrectness);
        TIME->setObjectName(QString::fromUtf8("TIME"));
        TIME->setGeometry(QRect(60, 580, 1241, 141));
        TIME->setStyleSheet(QString::fromUtf8("background-color:white"));
        doneButton_2 = new QPushButton(VerificationCorrectness);
        doneButton_2->setObjectName(QString::fromUtf8("doneButton_2"));
        doneButton_2->setGeometry(QRect(60, 750, 1081, 91));
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
        TIME_2 = new QLabel(VerificationCorrectness);
        TIME_2->setObjectName(QString::fromUtf8("TIME_2"));
        TIME_2->setGeometry(QRect(1160, 400, 141, 151));
        TIME_2->setStyleSheet(QString::fromUtf8("background-color:white"));
        TIME_2->setPixmap(QPixmap(QString::fromUtf8("../\320\263\320\260\320\273\320\276\321\207\320\272\320\2602.png")));
        TIME_3 = new QLabel(VerificationCorrectness);
        TIME_3->setObjectName(QString::fromUtf8("TIME_3"));
        TIME_3->setGeometry(QRect(1160, 750, 141, 91));
        TIME_3->setStyleSheet(QString::fromUtf8("background-color:white"));
        TIME_3->setPixmap(QPixmap(QString::fromUtf8("../\321\201\321\202\321\200\320\265\320\273\320\272\320\260.png")));

        retranslateUi(VerificationCorrectness);

        QMetaObject::connectSlotsByName(VerificationCorrectness);
    } // setupUi

    void retranslateUi(QDialog *VerificationCorrectness)
    {
        VerificationCorrectness->setWindowTitle(QCoreApplication::translate("VerificationCorrectness", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("VerificationCorrectness", "<html><head/><body><p align=\"center\"><span style=\" font-size:15pt; font-weight:600; color:#ff0000;\">\320\237\320\240\320\236\320\222\320\225\320\240\320\232\320\220 \320\237\320\240\320\220\320\222\320\230\320\233\320\254\320\235\320\236\320\241\320\242\320\230 \320\240\320\220\320\241\320\241\320\242\320\220\320\235\320\236\320\222\320\232\320\230 \320\241\320\230\320\223\320\235\320\220\320\233\320\230\320\227\320\220\320\246\320\230\320\231</span></p></body></html>", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("VerificationCorrectness", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#ff5500;\">\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\202\320\270\320\277 \320\270\320\267\320\262\320\265\321\211\320\260\321\202\320\265\320\273\321\217:</span></p></body></html>", nullptr));
        DYM->setText(QCoreApplication::translate("VerificationCorrectness", "\320\224\320\253\320\234\320\236\320\222\320\236\320\231", nullptr));
        Teplovoy->setText(QCoreApplication::translate("VerificationCorrectness", "\320\242\320\225\320\237\320\233\320\236\320\222\320\236\320\231", nullptr));
        doneButton->setText(QCoreApplication::translate("VerificationCorrectness", "\320\237\320\240\320\236\320\222\320\225\320\240\320\230\320\242\320\254 \320\240\320\220\320\241\320\241\320\242\320\220\320\235\320\236\320\222\320\232\320\243 \320\230\320\227\320\222\320\225\320\251\320\220\320\242\320\225\320\233\320\225\320\231", nullptr));
        TIME->setText(QCoreApplication::translate("VerificationCorrectness", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        doneButton_2->setText(QCoreApplication::translate("VerificationCorrectness", "\320\224\320\220\320\233\320\225\320\225", nullptr));
        TIME_2->setText(QString());
        TIME_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VerificationCorrectness: public Ui_VerificationCorrectness {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFICATIONCORRECTNESS_H
