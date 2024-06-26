/********************************************************************************
** Form generated from reading UI file 'authenticationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHENTICATIONWINDOW_H
#define UI_AUTHENTICATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthenticationWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Go;
    QLabel *label_pic;

    void setupUi(QMainWindow *AuthenticationWindow)
    {
        if (AuthenticationWindow->objectName().isEmpty())
            AuthenticationWindow->setObjectName("AuthenticationWindow");
        AuthenticationWindow->resize(576, 343);
        AuthenticationWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));
        AuthenticationWindow->setDocumentMode(false);
        centralwidget = new QWidget(AuthenticationWindow);
        centralwidget->setObjectName("centralwidget");
        Go = new QPushButton(centralwidget);
        Go->setObjectName("Go");
        Go->setGeometry(QRect(230, 260, 121, 41));
        Go->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 700 14pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(110, 40, 351, 181));
        AuthenticationWindow->setCentralWidget(centralwidget);

        retranslateUi(AuthenticationWindow);

        QMetaObject::connectSlotsByName(AuthenticationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AuthenticationWindow)
    {
        AuthenticationWindow->setWindowTitle(QCoreApplication::translate("AuthenticationWindow", "MainWindow", nullptr));
        Go->setText(QCoreApplication::translate("AuthenticationWindow", "Play", nullptr));
        label_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AuthenticationWindow: public Ui_AuthenticationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTICATIONWINDOW_H
