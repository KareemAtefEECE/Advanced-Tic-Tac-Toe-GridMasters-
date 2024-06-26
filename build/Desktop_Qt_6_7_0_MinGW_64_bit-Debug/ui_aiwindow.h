/********************************************************************************
** Form generated from reading UI file 'aiwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIWINDOW_H
#define UI_AIWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AIWindow
{
public:
    QLabel *label_5;
    QPushButton *btn15;
    QPushButton *btn14;
    QFrame *line_1;
    QPushButton *btn11;
    QPushButton *btn12;
    QLabel *label_6;
    QLabel *AIgameStatus;
    QPushButton *btn13;
    QPushButton *btn16;
    QLabel *playerturn_1;
    QPushButton *btn18;
    QPushButton *btn17;
    QPushButton *btn10;
    QLabel *u;

    void setupUi(QDialog *AIWindow)
    {
        if (AIWindow->objectName().isEmpty())
            AIWindow->setObjectName("AIWindow");
        AIWindow->resize(732, 517);
        AIWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));
        label_5 = new QLabel(AIWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 250, 141, 61));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn15 = new QPushButton(AIWindow);
        btn15->setObjectName("btn15");
        btn15->setGeometry(QRect(520, 210, 81, 71));
        btn15->setSizeIncrement(QSize(0, 0));
        btn15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        btn14 = new QPushButton(AIWindow);
        btn14->setObjectName("btn14");
        btn14->setGeometry(QRect(410, 210, 81, 71));
        btn14->setSizeIncrement(QSize(0, 0));
        btn14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        line_1 = new QFrame(AIWindow);
        line_1->setObjectName("line_1");
        line_1->setGeometry(QRect(210, 40, 20, 431));
        line_1->setFrameShape(QFrame::Shape::VLine);
        line_1->setFrameShadow(QFrame::Shadow::Sunken);
        btn11 = new QPushButton(AIWindow);
        btn11->setObjectName("btn11");
        btn11->setGeometry(QRect(410, 110, 81, 71));
        btn11->setSizeIncrement(QSize(0, 0));
        btn11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        btn12 = new QPushButton(AIWindow);
        btn12->setObjectName("btn12");
        btn12->setGeometry(QRect(520, 110, 81, 71));
        btn12->setSizeIncrement(QSize(0, 0));
        btn12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        label_6 = new QLabel(AIWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(70, 180, 31, 61));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        AIgameStatus = new QLabel(AIWindow);
        AIgameStatus->setObjectName("AIgameStatus");
        AIgameStatus->setGeometry(QRect(280, 430, 341, 51));
        AIgameStatus->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn13 = new QPushButton(AIWindow);
        btn13->setObjectName("btn13");
        btn13->setGeometry(QRect(300, 210, 81, 71));
        btn13->setSizeIncrement(QSize(0, 0));
        btn13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        btn16 = new QPushButton(AIWindow);
        btn16->setObjectName("btn16");
        btn16->setGeometry(QRect(300, 310, 81, 71));
        btn16->setSizeIncrement(QSize(0, 0));
        btn16->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        playerturn_1 = new QLabel(AIWindow);
        playerturn_1->setObjectName("playerturn_1");
        playerturn_1->setGeometry(QRect(300, 60, 271, 31));
        playerturn_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn18 = new QPushButton(AIWindow);
        btn18->setObjectName("btn18");
        btn18->setGeometry(QRect(520, 310, 81, 71));
        btn18->setSizeIncrement(QSize(0, 0));
        btn18->setAutoFillBackground(false);
        btn18->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        btn17 = new QPushButton(AIWindow);
        btn17->setObjectName("btn17");
        btn17->setGeometry(QRect(410, 310, 81, 71));
        btn17->setSizeIncrement(QSize(0, 0));
        btn17->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        btn10 = new QPushButton(AIWindow);
        btn10->setObjectName("btn10");
        btn10->setGeometry(QRect(300, 110, 81, 71));
        btn10->setSizeIncrement(QSize(0, 0));
        btn10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        u = new QLabel(AIWindow);
        u->setObjectName("u");
        u->setGeometry(QRect(10, 120, 171, 41));
        u->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(AIWindow);

        QMetaObject::connectSlotsByName(AIWindow);
    } // setupUi

    void retranslateUi(QDialog *AIWindow)
    {
        AIWindow->setWindowTitle(QCoreApplication::translate("AIWindow", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("AIWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">AI (O)</span></p></body></html>", nullptr));
        btn15->setText(QString());
        btn14->setText(QString());
        btn11->setText(QString());
        btn12->setText(QString());
        label_6->setText(QCoreApplication::translate("AIWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">Vs</span></p></body></html>", nullptr));
        AIgameStatus->setText(QCoreApplication::translate("AIWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">Final</span></p><p align=\"center\"><span style=\" color:#ffffff;\"><br/></span></p></body></html>", nullptr));
        btn13->setText(QString());
        btn16->setText(QString());
        playerturn_1->setText(QCoreApplication::translate("AIWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">It's Player's Turn<br/></span></p></body></html>", nullptr));
        btn18->setText(QString());
        btn17->setText(QString());
        btn10->setText(QString());
        u->setText(QCoreApplication::translate("AIWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Username</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AIWindow: public Ui_AIWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIWINDOW_H
