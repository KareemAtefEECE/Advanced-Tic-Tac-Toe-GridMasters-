/********************************************************************************
** Form generated from reading UI file 'homewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWINDOW_H
#define UI_HOMEWINDOW_H

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
    QLabel *label_2;
    QPushButton *btnAI;
    QPushButton *btnMulti;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(816, 627);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 40, 361, 71));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 700 22pt \"Segoe UI\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 170, 211, 51));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 15pt \"Segoe UI\";\n"
""));
        btnAI = new QPushButton(centralwidget);
        btnAI->setObjectName("btnAI");
        btnAI->setGeometry(QRect(340, 330, 101, 41));
        btnMulti = new QPushButton(centralwidget);
        btnMulti->setObjectName("btnMulti");
        btnMulti->setGeometry(QRect(340, 260, 101, 41));
        btnMulti->setStyleSheet(QString::fromUtf8("font: 600 9pt \"Segoe UI\";"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; color:#000000;\">Tic Tac Toe Game</span></p><p align=\"center\"><br/></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#000000;\">Choose a Mode</span></p></body></html>", nullptr));
        btnAI->setText(QCoreApplication::translate("MainWindow", "AI Opponant", nullptr));
        btnMulti->setText(QCoreApplication::translate("MainWindow", "Multiplayer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWINDOW_H
