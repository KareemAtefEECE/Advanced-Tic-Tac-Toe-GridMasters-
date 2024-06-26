/********************************************************************************
** Form generated from reading UI file 'chooseaiwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEAIWINDOW_H
#define UI_CHOOSEAIWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChooseAIWindow
{
public:
    QPushButton *medium_btn;
    QPushButton *easy_btn;
    QLabel *label;
    QPushButton *hard_btn;
    QLabel *label_pic_4;
    QLabel *label_pic_5;
    QLabel *label_pic_6;

    void setupUi(QDialog *ChooseAIWindow)
    {
        if (ChooseAIWindow->objectName().isEmpty())
            ChooseAIWindow->setObjectName("ChooseAIWindow");
        ChooseAIWindow->resize(512, 371);
        ChooseAIWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));
        medium_btn = new QPushButton(ChooseAIWindow);
        medium_btn->setObjectName("medium_btn");
        medium_btn->setGeometry(QRect(200, 170, 91, 51));
        medium_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        easy_btn = new QPushButton(ChooseAIWindow);
        easy_btn->setObjectName("easy_btn");
        easy_btn->setGeometry(QRect(70, 170, 91, 51));
        easy_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        label = new QLabel(ChooseAIWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 50, 238, 40));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        hard_btn = new QPushButton(ChooseAIWindow);
        hard_btn->setObjectName("hard_btn");
        hard_btn->setGeometry(QRect(330, 170, 91, 51));
        hard_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        label_pic_4 = new QLabel(ChooseAIWindow);
        label_pic_4->setObjectName("label_pic_4");
        label_pic_4->setGeometry(QRect(80, 240, 71, 71));
        label_pic_5 = new QLabel(ChooseAIWindow);
        label_pic_5->setObjectName("label_pic_5");
        label_pic_5->setGeometry(QRect(210, 240, 71, 71));
        label_pic_6 = new QLabel(ChooseAIWindow);
        label_pic_6->setObjectName("label_pic_6");
        label_pic_6->setGeometry(QRect(340, 240, 81, 71));

        retranslateUi(ChooseAIWindow);

        QMetaObject::connectSlotsByName(ChooseAIWindow);
    } // setupUi

    void retranslateUi(QDialog *ChooseAIWindow)
    {
        ChooseAIWindow->setWindowTitle(QCoreApplication::translate("ChooseAIWindow", "Dialog", nullptr));
        medium_btn->setText(QCoreApplication::translate("ChooseAIWindow", "Medium", nullptr));
#if QT_CONFIG(tooltip)
        easy_btn->setToolTip(QCoreApplication::translate("ChooseAIWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        easy_btn->setText(QCoreApplication::translate("ChooseAIWindow", "Easy", nullptr));
        label->setText(QCoreApplication::translate("ChooseAIWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Choose defficulity</span></p></body></html>", nullptr));
        hard_btn->setText(QCoreApplication::translate("ChooseAIWindow", "Hard", nullptr));
        label_pic_4->setText(QString());
        label_pic_5->setText(QString());
        label_pic_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChooseAIWindow: public Ui_ChooseAIWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEAIWINDOW_H
