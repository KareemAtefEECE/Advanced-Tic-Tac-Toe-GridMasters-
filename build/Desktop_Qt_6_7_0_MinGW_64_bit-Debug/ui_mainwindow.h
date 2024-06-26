/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btnAI;
    QPushButton *btnMulti;
    QPushButton *btnProfile;
    QPushButton *signout;
    QLabel *label_pic_1;
    QLabel *label_pic_2;
    QLabel *label_pic_7;
    QLabel *label_pic_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(816, 548);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 40, 361, 71));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 700 22pt \"Segoe UI\";"));
        btnAI = new QPushButton(centralwidget);
        btnAI->setObjectName("btnAI");
        btnAI->setGeometry(QRect(290, 360, 151, 81));
        btnAI->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 12pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        btnMulti = new QPushButton(centralwidget);
        btnMulti->setObjectName("btnMulti");
        btnMulti->setGeometry(QRect(290, 190, 151, 81));
        btnMulti->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 12pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        btnProfile = new QPushButton(centralwidget);
        btnProfile->setObjectName("btnProfile");
        btnProfile->setGeometry(QRect(580, 120, 91, 41));
        btnProfile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 12pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        signout = new QPushButton(centralwidget);
        signout->setObjectName("signout");
        signout->setGeometry(QRect(580, 230, 91, 41));
        signout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        label_pic_1 = new QLabel(centralwidget);
        label_pic_1->setObjectName("label_pic_1");
        label_pic_1->setGeometry(QRect(690, 220, 61, 61));
        label_pic_2 = new QLabel(centralwidget);
        label_pic_2->setObjectName("label_pic_2");
        label_pic_2->setGeometry(QRect(690, 110, 61, 61));
        label_pic_7 = new QLabel(centralwidget);
        label_pic_7->setObjectName("label_pic_7");
        label_pic_7->setGeometry(QRect(190, 200, 81, 71));
        label_pic_8 = new QLabel(centralwidget);
        label_pic_8->setObjectName("label_pic_8");
        label_pic_8->setGeometry(QRect(190, 370, 81, 71));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; color:#ffffff;\">Tic Tac Toe Game</span></p><p align=\"center\"><span style=\" color:#ffffff;\"><br/></span></p></body></html>", nullptr));
        btnAI->setText(QCoreApplication::translate("MainWindow", "AI Opponant", nullptr));
        btnMulti->setText(QCoreApplication::translate("MainWindow", "Multiplayer", nullptr));
        btnProfile->setText(QCoreApplication::translate("MainWindow", "Profile", nullptr));
        signout->setText(QCoreApplication::translate("MainWindow", "Sign out", nullptr));
        label_pic_1->setText(QString());
        label_pic_2->setText(QString());
        label_pic_7->setText(QString());
        label_pic_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
