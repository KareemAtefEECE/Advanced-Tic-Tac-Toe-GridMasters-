/********************************************************************************
** Form generated from reading UI file 'user2window.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER2WINDOW_H
#define UI_USER2WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User2Window
{
public:
    QWidget *centralwidget;
    QLabel *password;
    QPushButton *login;
    QLineEdit *password_3;
    QLabel *title;
    QLabel *username;
    QLineEdit *username_3;
    QLabel *message_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *User2Window)
    {
        if (User2Window->objectName().isEmpty())
            User2Window->setObjectName("User2Window");
        User2Window->resize(534, 377);
        User2Window->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));
        centralwidget = new QWidget(User2Window);
        centralwidget->setObjectName("centralwidget");
        password = new QLabel(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(130, 160, 91, 41));
        login = new QPushButton(centralwidget);
        login->setObjectName("login");
        login->setGeometry(QRect(240, 220, 91, 41));
        login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        password_3 = new QLineEdit(centralwidget);
        password_3->setObjectName("password_3");
        password_3->setGeometry(QRect(240, 170, 181, 24));
        password_3->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(0, 0, 0);"));
        password_3->setEchoMode(QLineEdit::Password);
        password_3->setDragEnabled(false);
        title = new QLabel(centralwidget);
        title->setObjectName("title");
        title->setGeometry(QRect(130, 40, 301, 41));
        username = new QLabel(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(130, 120, 91, 41));
        username_3 = new QLineEdit(centralwidget);
        username_3->setObjectName("username_3");
        username_3->setGeometry(QRect(240, 130, 181, 24));
        username_3->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(0, 0, 0);"));
        username_3->setEchoMode(QLineEdit::Normal);
        username_3->setDragEnabled(false);
        message_6 = new QLabel(centralwidget);
        message_6->setObjectName("message_6");
        message_6->setGeometry(QRect(120, 285, 331, 41));
        message_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 15pt \"Segoe UI\";"));
        User2Window->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(User2Window);
        statusbar->setObjectName("statusbar");
        User2Window->setStatusBar(statusbar);

        retranslateUi(User2Window);

        QMetaObject::connectSlotsByName(User2Window);
    } // setupUi

    void retranslateUi(QMainWindow *User2Window)
    {
        User2Window->setWindowTitle(QCoreApplication::translate("User2Window", "MainWindow", nullptr));
        password->setText(QCoreApplication::translate("User2Window", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">password</span></p></body></html>", nullptr));
        login->setText(QCoreApplication::translate("User2Window", "Login", nullptr));
        title->setText(QCoreApplication::translate("User2Window", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">Login For Second User</span></p></body></html>", nullptr));
        username->setText(QCoreApplication::translate("User2Window", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">username</span></p></body></html>", nullptr));
        message_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class User2Window: public Ui_User2Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER2WINDOW_H
