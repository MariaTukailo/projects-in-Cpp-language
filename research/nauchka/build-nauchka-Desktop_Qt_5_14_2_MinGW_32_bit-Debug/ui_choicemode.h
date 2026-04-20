/********************************************************************************
** Form generated from reading UI file 'choicemode.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOICEMODE_H
#define UI_CHOICEMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChoiceMode
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *ChoiceMode)
    {
        if (ChoiceMode->objectName().isEmpty())
            ChoiceMode->setObjectName(QString::fromUtf8("ChoiceMode"));
        ChoiceMode->resize(1461, 1005);
        ChoiceMode->setStyleSheet(QString::fromUtf8("background-color: lightbblack;"));
        label = new QLabel(ChoiceMode);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 10, 1161, 261));
        pushButton = new QPushButton(ChoiceMode);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 250, 1171, 211));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  orange;\n"
"    color: black;\n"
"    font-weight: bold;        /* \320\226\320\270\321\200\320\275\321\213\320\271 */\n"
"    font-size: 30px;         /* \320\240\320\260\320\267\320\274\320\265\321\200 */\n"
"    font-family: Arial;      /* \320\250\321\200\320\270\321\204\321\202 (\320\276\320\277\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\276) */\n"
"    border: 2px solid red;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #ff7705; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff7705;   /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        pushButton_2 = new QPushButton(ChoiceMode);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 490, 1171, 211));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: orange;\n"
"    color: black;\n"
"    font-weight: bold;        /* \320\226\320\270\321\200\320\275\321\213\320\271 */\n"
"    font-size: 30px;         /* \320\240\320\260\320\267\320\274\320\265\321\200 */\n"
"    font-family: Arial;      /* \320\250\321\200\320\270\321\204\321\202 (\320\276\320\277\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\276) */\n"
"    border: 2px solid red;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #ff7705; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff7705;   /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));
        pushButton_3 = new QPushButton(ChoiceMode);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 730, 1171, 211));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  orange;\n"
"    color: black;\n"
"    font-weight: bold;        /* \320\226\320\270\321\200\320\275\321\213\320\271 */\n"
"    font-size: 30px;         /* \320\240\320\260\320\267\320\274\320\265\321\200 */\n"
"    font-family: Arial;      /* \320\250\321\200\320\270\321\204\321\202 (\320\276\320\277\321\206\320\270\320\276\320\275\320\260\320\273\321\214\320\275\320\276) */\n"
"    border: 2px solid red;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #ff7705; /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ff7705;   /* \320\246\320\262\320\265\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}"));

        retranslateUi(ChoiceMode);

        QMetaObject::connectSlotsByName(ChoiceMode);
    } // setupUi

    void retranslateUi(QDialog *ChoiceMode)
    {
        ChoiceMode->setWindowTitle(QCoreApplication::translate("ChoiceMode", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChoiceMode", "<html><head/><body><p align=\"center\"><span style=\" font-size:32pt; font-weight:600; color:red;\">\320\222\320\253\320\221\320\225\320\240\320\230\320\242\320\225 \320\240\320\225\320\226\320\230\320\234 </span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("ChoiceMode", "\320\237\320\240\320\236\320\222\320\225\320\240\320\230\320\242\320\254 \320\237\320\240\320\220\320\222\320\230\320\233\320\254\320\235\320\236\320\241\320\242\320\254 \320\240\320\220\320\241\320\241\320\242\320\220\320\235\320\236\320\222\320\232\320\230 \320\230\320\227\320\222\320\225\320\251\320\220\320\242\320\225\320\233\320\225\320\231", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ChoiceMode", "\320\240\320\220\320\241\320\241\320\242\320\220\320\222\320\230\320\242\320\254 \320\237\320\240\320\220\320\222\320\230\320\233\320\254\320\235\320\236 \320\230\320\227\320\222\320\225\320\251\320\220\320\242\320\225\320\233\320\230", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ChoiceMode", "\320\240\320\220\320\241\320\241\320\247\320\230\320\242\320\220\320\242\320\254 \320\222\320\240\320\225\320\234\320\257 \320\241\320\240\320\220\320\221\320\220\320\242\320\253\320\222\320\220\320\235\320\230\320\257 \320\241\320\230\320\223\320\235\320\220\320\233\320\230\320\227\320\220\320\246\320\230\320\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChoiceMode: public Ui_ChoiceMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOICEMODE_H
