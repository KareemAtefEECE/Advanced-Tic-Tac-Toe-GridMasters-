/********************************************************************************
** Form generated from reading UI file 'historywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYWINDOW_H
#define UI_HISTORYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoryWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Replay;
    QPushButton *back;
    QLabel *profile;
    QLabel *wins;
    QLabel *loses;
    QLabel *draws;
    QLabel *wins_2;
    QLabel *loses_2;
    QLabel *draws_2;
    QLabel *mail_2;
    QTableView *tableView;
    QLabel *username_2;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_pic_3;
    QLabel *label_pic_9;

    void setupUi(QMainWindow *HistoryWindow)
    {
        if (HistoryWindow->objectName().isEmpty())
            HistoryWindow->setObjectName("HistoryWindow");
        HistoryWindow->resize(800, 600);
        HistoryWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));
        centralwidget = new QWidget(HistoryWindow);
        centralwidget->setObjectName("centralwidget");
        Replay = new QPushButton(centralwidget);
        Replay->setObjectName("Replay");
        Replay->setGeometry(QRect(560, 253, 81, 41));
        Replay->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        back = new QPushButton(centralwidget);
        back->setObjectName("back");
        back->setGeometry(QRect(560, 340, 81, 41));
        back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        profile = new QLabel(centralwidget);
        profile->setObjectName("profile");
        profile->setGeometry(QRect(280, 20, 141, 41));
        profile->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        wins = new QLabel(centralwidget);
        wins->setObjectName("wins");
        wins->setGeometry(QRect(478, 70, 101, 31));
        wins->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        loses = new QLabel(centralwidget);
        loses->setObjectName("loses");
        loses->setGeometry(QRect(480, 120, 111, 31));
        loses->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        draws = new QLabel(centralwidget);
        draws->setObjectName("draws");
        draws->setGeometry(QRect(478, 170, 121, 31));
        draws->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        wins_2 = new QLabel(centralwidget);
        wins_2->setObjectName("wins_2");
        wins_2->setGeometry(QRect(590, 60, 101, 51));
        wins_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 16pt \"Segoe UI\";"));
        loses_2 = new QLabel(centralwidget);
        loses_2->setObjectName("loses_2");
        loses_2->setGeometry(QRect(590, 110, 91, 51));
        loses_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 16pt \"Segoe UI\";"));
        draws_2 = new QLabel(centralwidget);
        draws_2->setObjectName("draws_2");
        draws_2->setGeometry(QRect(600, 160, 101, 51));
        draws_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 16pt \"Segoe UI\";"));
        mail_2 = new QLabel(centralwidget);
        mail_2->setObjectName("mail_2");
        mail_2->setGeometry(QRect(130, 160, 271, 31));
        mail_2->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);\n"
"font: 700 18pt \"Segoe UI\";"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(35, 211, 451, 331));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(166, 166, 166);"));
        username_2 = new QLabel(centralwidget);
        username_2->setObjectName("username_2");
        username_2->setGeometry(QRect(172, 120, 211, 31));
        username_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 18pt \"Segoe UI\";"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(42, 160, 81, 31));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 30pt \"Segoe UI\";"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(40, 120, 131, 31));
        label_12->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);\n"
"font: 700 30pt \"Segoe UI\";"));
        label_pic_3 = new QLabel(centralwidget);
        label_pic_3->setObjectName("label_pic_3");
        label_pic_3->setGeometry(QRect(650, 340, 51, 41));
        label_pic_9 = new QLabel(centralwidget);
        label_pic_9->setObjectName("label_pic_9");
        label_pic_9->setGeometry(QRect(650, 250, 51, 41));
        HistoryWindow->setCentralWidget(centralwidget);

        retranslateUi(HistoryWindow);

        QMetaObject::connectSlotsByName(HistoryWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HistoryWindow)
    {
        HistoryWindow->setWindowTitle(QCoreApplication::translate("HistoryWindow", "MainWindow", nullptr));
        Replay->setText(QCoreApplication::translate("HistoryWindow", "Replay", nullptr));
        back->setText(QCoreApplication::translate("HistoryWindow", "Back", nullptr));
        profile->setText(QCoreApplication::translate("HistoryWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">PROFILE</span></p></body></html>", nullptr));
        wins->setText(QCoreApplication::translate("HistoryWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Total wins :</span></p></body></html>", nullptr));
        loses->setText(QCoreApplication::translate("HistoryWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Total loses :</span></p></body></html>", nullptr));
        draws->setText(QCoreApplication::translate("HistoryWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Total Draws :</span></p></body></html>", nullptr));
        wins_2->setText(QCoreApplication::translate("HistoryWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">knkn</span></p></body></html>", nullptr));
        loses_2->setText(QCoreApplication::translate("HistoryWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">lkj</span></p></body></html>", nullptr));
        draws_2->setText(QCoreApplication::translate("HistoryWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">kkj</span></p></body></html>", nullptr));
        mail_2->setText(QCoreApplication::translate("HistoryWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">hhij</span></p></body></html>", nullptr));
        username_2->setText(QCoreApplication::translate("HistoryWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">jnj</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("HistoryWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">MAIL :</span></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("HistoryWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">USERNAME :</span></p></body></html>", nullptr));
        label_pic_3->setText(QString());
        label_pic_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HistoryWindow: public Ui_HistoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYWINDOW_H
