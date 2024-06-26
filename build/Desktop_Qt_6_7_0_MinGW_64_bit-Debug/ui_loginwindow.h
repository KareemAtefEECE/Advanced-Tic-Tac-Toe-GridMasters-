/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *username_3;
    QLabel *password_4;
    QPushButton *login;
    QLabel *username_4;
    QLineEdit *password_3;
    QPushButton *sign_up;
    QPushButton *guest;
    QLabel *username_5;
    QLabel *username_6;
    QLabel *username_7;
    QLabel *message_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(800, 600);
        LoginWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        username_3 = new QLineEdit(centralwidget);
        username_3->setObjectName("username_3");
        username_3->setGeometry(QRect(350, 103, 181, 21));
        username_3->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        password_4 = new QLabel(centralwidget);
        password_4->setObjectName("password_4");
        password_4->setGeometry(QRect(220, 120, 121, 41));
        password_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        login = new QPushButton(centralwidget);
        login->setObjectName("login");
        login->setGeometry(QRect(380, 190, 101, 31));
        login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        username_4 = new QLabel(centralwidget);
        username_4->setObjectName("username_4");
        username_4->setGeometry(QRect(220, 90, 101, 41));
        username_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        password_3 = new QLineEdit(centralwidget);
        password_3->setObjectName("password_3");
        password_3->setGeometry(QRect(350, 130, 181, 24));
        password_3->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        password_3->setEchoMode(QLineEdit::Password);
        sign_up = new QPushButton(centralwidget);
        sign_up->setObjectName("sign_up");
        sign_up->setGeometry(QRect(380, 240, 101, 31));
        sign_up->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        guest = new QPushButton(centralwidget);
        guest->setObjectName("guest");
        guest->setGeometry(QRect(380, 300, 101, 31));
        guest->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        username_5 = new QLabel(centralwidget);
        username_5->setObjectName("username_5");
        username_5->setGeometry(QRect(280, 20, 171, 41));
        username_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        username_6 = new QLabel(centralwidget);
        username_6->setObjectName("username_6");
        username_6->setGeometry(QRect(230, 240, 101, 21));
        username_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        username_7 = new QLabel(centralwidget);
        username_7->setObjectName("username_7");
        username_7->setGeometry(QRect(230, 300, 131, 21));
        username_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        message_2 = new QLabel(centralwidget);
        message_2->setObjectName("message_2");
        message_2->setGeometry(QRect(260, 350, 221, 41));
        message_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        LoginWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "MainWindow", nullptr));
        password_4->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">password</span></p></body></html>", nullptr));
        login->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        username_4->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">username</span></p></body></html>", nullptr));
        sign_up->setText(QCoreApplication::translate("LoginWindow", "Sign Up", nullptr));
        guest->setText(QCoreApplication::translate("LoginWindow", "Guest", nullptr));
        username_5->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700;\">Login</span></p></body></html>", nullptr));
        username_6->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Are you new?</span></p></body></html>", nullptr));
        username_7->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Are you a guest?</span></p></body></html>", nullptr));
        message_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
