/********************************************************************************
** Form generated from reading UI file 'automaticplacement.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOMATICPLACEMENT_H
#define UI_AUTOMATICPLACEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutomaticPlacement
{
public:
    QLabel *label;
    QLabel *label_2;
    QRadioButton *DYM;
    QRadioButton *Teplovoy;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *coordinatesWidget;
    QPushButton *doneButton;
    QPushButton *doneButton_2;
    QLabel *countLabel;

    void setupUi(QDialog *AutomaticPlacement)
    {
        if (AutomaticPlacement->objectName().isEmpty())
            AutomaticPlacement->setObjectName(QString::fromUtf8("AutomaticPlacement"));
        AutomaticPlacement->resize(1431, 863);
        AutomaticPlacement->setStyleSheet(QString::fromUtf8("background-color: lightbblack;"));
        label = new QLabel(AutomaticPlacement);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 1301, 211));
        label_2 = new QLabel(AutomaticPlacement);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 190, 1311, 661));
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgb(167, 167, 167)"));
        DYM = new QRadioButton(AutomaticPlacement);
        DYM->setObjectName(QString::fromUtf8("DYM"));
        DYM->setGeometry(QRect(700, 240, 651, 41));
        DYM->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 125, 125);\n"
"\n"
"    color: rgb(255, 85, 0);\n"
"    font-size: 25px;\n"
"    font-weight: bold;\n"
"    font-family: Arial;"));
        Teplovoy = new QRadioButton(AutomaticPlacement);
        Teplovoy->setObjectName(QString::fromUtf8("Teplovoy"));
        Teplovoy->setGeometry(QRect(700, 310, 651, 41));
        Teplovoy->setStyleSheet(QString::fromUtf8("background-color: rgb(125, 125, 125);\n"
"\n"
"    color: rgb(255, 85, 0);\n"
"    font-size: 25px;\n"
"    font-weight: bold;\n"
"    font-family: Arial;"));
        label_3 = new QLabel(AutomaticPlacement);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 230, 551, 131));
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);"));
        label_5 = new QLabel(AutomaticPlacement);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 380, 181, 51));
        label_5->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);"));
        label_6 = new QLabel(AutomaticPlacement);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 520, 1251, 51));
        label_6->setStyleSheet(QString::fromUtf8("background-color:rgb(125, 125, 125);"));
        coordinatesWidget = new QWidget(AutomaticPlacement);
        coordinatesWidget->setObjectName(QString::fromUtf8("coordinatesWidget"));
        coordinatesWidget->setGeometry(QRect(100, 590, 1251, 231));
        coordinatesWidget->setToolTipDuration(-2);
        coordinatesWidget->setStyleSheet(QString::fromUtf8("background-color: white;\n"
""));
        doneButton = new QPushButton(AutomaticPlacement);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(300, 380, 551, 131));
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
        doneButton_2 = new QPushButton(AutomaticPlacement);
        doneButton_2->setObjectName(QString::fromUtf8("doneButton_2"));
        doneButton_2->setGeometry(QRect(870, 380, 481, 131));
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
        countLabel = new QLabel(AutomaticPlacement);
        countLabel->setObjectName(QString::fromUtf8("countLabel"));
        countLabel->setGeometry(QRect(100, 440, 181, 71));
        countLabel->setStyleSheet(QString::fromUtf8("background-color:white"));

        retranslateUi(AutomaticPlacement);

        QMetaObject::connectSlotsByName(AutomaticPlacement);
    } // setupUi

    void retranslateUi(QDialog *AutomaticPlacement)
    {
        AutomaticPlacement->setWindowTitle(QCoreApplication::translate("AutomaticPlacement", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AutomaticPlacement", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#ff0000;\">\320\237\320\240\320\220\320\222\320\230\320\233\320\254\320\235\320\220\320\257 \320\237\320\236\320\241\320\242\320\220\320\235\320\236\320\222\320\232\320\220 \320\241\320\230\320\223\320\235\320\220\320\233\320\230\320\227\320\220\320\246\320\230\320\231</span></p></body></html>", nullptr));
        label_2->setText(QString());
        DYM->setText(QCoreApplication::translate("AutomaticPlacement", "\320\224\320\253\320\234\320\236\320\222\320\236\320\231", nullptr));
        Teplovoy->setText(QCoreApplication::translate("AutomaticPlacement", "\320\242\320\225\320\237\320\233\320\236\320\222\320\236\320\231", nullptr));
        label_3->setText(QCoreApplication::translate("AutomaticPlacement", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#ff5500;\">\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\202\320\270\320\277 \320\270\320\267\320\262\320\265\321\211\320\260\321\202\320\265\320\273\321\217:</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("AutomaticPlacement", "<html><head/><body><p align=\"center\"><span style=\" font-size:7pt; font-weight:600; color:#ff5500;\">\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276:</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("AutomaticPlacement", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#ff5500;\">\320\232\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\321\213:</span></p></body></html>", nullptr));
        doneButton->setText(QCoreApplication::translate("AutomaticPlacement", "\320\240\320\220\320\241\320\241\320\242\320\220\320\222\320\230\320\242\320\254 \320\230\320\227\320\222\320\225\320\251\320\220\320\242\320\225\320\233\320\230", nullptr));
        doneButton_2->setText(QCoreApplication::translate("AutomaticPlacement", "\320\224\320\220\320\233\320\225\320\225", nullptr));
        countLabel->setText(QCoreApplication::translate("AutomaticPlacement", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AutomaticPlacement: public Ui_AutomaticPlacement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOMATICPLACEMENT_H
