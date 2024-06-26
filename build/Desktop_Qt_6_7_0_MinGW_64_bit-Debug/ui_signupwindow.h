/********************************************************************************
** Form generated from reading UI file 'signupwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignupWindow
{
public:
    QWidget *centralwidget;
    QPushButton *sign_up;
    QLineEdit *last_name_2;
    QLabel *last_name;
    QLineEdit *username_2;
    QLineEdit *mail_2;
    QLineEdit *message;
    QLabel *password;
    QLineEdit *password_2;
    QLabel *mail;
    QLineEdit *first_name_2;
    QLabel *username;
    QLineEdit *day_2;
    QLabel *birth_date;
    QLabel *first_name;
    QLineEdit *year_2;
    QLineEdit *month_2;
    QLabel *year;
    QLabel *month;
    QLabel *day;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SignupWindow)
    {
        if (SignupWindow->objectName().isEmpty())
            SignupWindow->setObjectName("SignupWindow");
        SignupWindow->resize(800, 600);
        SignupWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));
        centralwidget = new QWidget(SignupWindow);
        centralwidget->setObjectName("centralwidget");
        sign_up = new QPushButton(centralwidget);
        sign_up->setObjectName("sign_up");
        sign_up->setGeometry(QRect(280, 400, 121, 31));
        sign_up->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        last_name_2 = new QLineEdit(centralwidget);
        last_name_2->setObjectName("last_name_2");
        last_name_2->setGeometry(QRect(320, 230, 221, 24));
        last_name_2->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(0, 0, 0);"));
        last_name = new QLabel(centralwidget);
        last_name->setObjectName("last_name");
        last_name->setGeometry(QRect(210, 230, 81, 21));
        username_2 = new QLineEdit(centralwidget);
        username_2->setObjectName("username_2");
        username_2->setGeometry(QRect(320, 110, 221, 24));
        username_2->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(0, 0, 0);"));
        mail_2 = new QLineEdit(centralwidget);
        mail_2->setObjectName("mail_2");
        mail_2->setGeometry(QRect(320, 170, 221, 24));
        mail_2->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(0, 0, 0);"));
        message = new QLineEdit(centralwidget);
        message->setObjectName("message");
        message->setGeometry(QRect(210, 460, 351, 51));
        message->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));
        password = new QLabel(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(210, 140, 81, 20));
        password_2 = new QLineEdit(centralwidget);
        password_2->setObjectName("password_2");
        password_2->setGeometry(QRect(320, 140, 221, 24));
        password_2->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(0, 0, 0);"));
        password_2->setEchoMode(QLineEdit::Password);
        mail = new QLabel(centralwidget);
        mail->setObjectName("mail");
        mail->setGeometry(QRect(210, 170, 61, 21));
        first_name_2 = new QLineEdit(centralwidget);
        first_name_2->setObjectName("first_name_2");
        first_name_2->setGeometry(QRect(320, 200, 221, 24));
        first_name_2->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(0, 0, 0);"));
        first_name_2->setEchoMode(QLineEdit::Normal);
        username = new QLabel(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(210, 110, 81, 21));
        day_2 = new QLineEdit(centralwidget);
        day_2->setObjectName("day_2");
        day_2->setGeometry(QRect(400, 330, 61, 24));
        day_2->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(0, 0, 0);"));
        day_2->setEchoMode(QLineEdit::Normal);
        birth_date = new QLabel(centralwidget);
        birth_date->setObjectName("birth_date");
        birth_date->setGeometry(QRect(210, 270, 101, 20));
        first_name = new QLabel(centralwidget);
        first_name->setObjectName("first_name");
        first_name->setGeometry(QRect(210, 200, 81, 21));
        year_2 = new QLineEdit(centralwidget);
        year_2->setObjectName("year_2");
        year_2->setGeometry(QRect(210, 330, 71, 24));
        year_2->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(0, 0, 0);"));
        year_2->setEchoMode(QLineEdit::Normal);
        month_2 = new QLineEdit(centralwidget);
        month_2->setObjectName("month_2");
        month_2->setGeometry(QRect(310, 330, 61, 24));
        month_2->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(0, 0, 0);"));
        month_2->setEchoMode(QLineEdit::Normal);
        year = new QLabel(centralwidget);
        year->setObjectName("year");
        year->setGeometry(QRect(210, 300, 41, 20));
        month = new QLabel(centralwidget);
        month->setObjectName("month");
        month->setGeometry(QRect(310, 300, 61, 20));
        day = new QLabel(centralwidget);
        day->setObjectName("day");
        day->setGeometry(QRect(400, 300, 61, 20));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 20, 301, 51));
        SignupWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SignupWindow);
        statusbar->setObjectName("statusbar");
        SignupWindow->setStatusBar(statusbar);

        retranslateUi(SignupWindow);

        QMetaObject::connectSlotsByName(SignupWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SignupWindow)
    {
        SignupWindow->setWindowTitle(QCoreApplication::translate("SignupWindow", "MainWindow", nullptr));
        sign_up->setText(QCoreApplication::translate("SignupWindow", "Sign Up", nullptr));
        last_name->setText(QCoreApplication::translate("SignupWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">last_name</span></p></body></html>", nullptr));
        message->setText(QString());
        password->setText(QCoreApplication::translate("SignupWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">password</span></p></body></html>", nullptr));
        mail->setText(QCoreApplication::translate("SignupWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">mail</span></p></body></html>", nullptr));
        username->setText(QCoreApplication::translate("SignupWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">username</span></p></body></html>", nullptr));
        birth_date->setText(QCoreApplication::translate("SignupWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">birth_date :</span></p></body></html>", nullptr));
        first_name->setText(QCoreApplication::translate("SignupWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">first_name</span></p></body></html>", nullptr));
        year->setText(QCoreApplication::translate("SignupWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">Year</span></p></body></html>", nullptr));
        month->setText(QCoreApplication::translate("SignupWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">Month</span></p></body></html>", nullptr));
        day->setText(QCoreApplication::translate("SignupWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">Day</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("SignupWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Sign Up</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignupWindow: public Ui_SignupWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
