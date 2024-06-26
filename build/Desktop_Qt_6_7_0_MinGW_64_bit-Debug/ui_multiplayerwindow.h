/********************************************************************************
** Form generated from reading UI file 'multiplayerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPLAYERWINDOW_H
#define UI_MULTIPLAYERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MultiPlayerWindow
{
public:
    QLabel *label_3;
    QFrame *line;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QLabel *gameStatus;
    QLabel *playerturn;
    QLabel *player1name;
    QLabel *player2name;

    void setupUi(QDialog *MultiPlayerWindow)
    {
        if (MultiPlayerWindow->objectName().isEmpty())
            MultiPlayerWindow->setObjectName("MultiPlayerWindow");
        MultiPlayerWindow->resize(763, 528);
        MultiPlayerWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);"));
        label_3 = new QLabel(MultiPlayerWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 210, 41, 61));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        line = new QFrame(MultiPlayerWindow);
        line->setObjectName("line");
        line->setGeometry(QRect(240, 60, 20, 431));
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 43, 43);\n"
"color: rgb(255, 255, 255);"));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        btn1 = new QPushButton(MultiPlayerWindow);
        btn1->setObjectName("btn1");
        btn1->setGeometry(QRect(340, 130, 81, 71));
        btn1->setSizeIncrement(QSize(0, 0));
        btn1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        btn2 = new QPushButton(MultiPlayerWindow);
        btn2->setObjectName("btn2");
        btn2->setGeometry(QRect(450, 130, 81, 71));
        btn2->setSizeIncrement(QSize(0, 0));
        btn2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        btn3 = new QPushButton(MultiPlayerWindow);
        btn3->setObjectName("btn3");
        btn3->setGeometry(QRect(560, 130, 81, 71));
        btn3->setSizeIncrement(QSize(0, 0));
        btn3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        btn4 = new QPushButton(MultiPlayerWindow);
        btn4->setObjectName("btn4");
        btn4->setGeometry(QRect(340, 230, 81, 71));
        btn4->setSizeIncrement(QSize(0, 0));
        btn4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        btn5 = new QPushButton(MultiPlayerWindow);
        btn5->setObjectName("btn5");
        btn5->setGeometry(QRect(450, 230, 81, 71));
        btn5->setSizeIncrement(QSize(0, 0));
        btn5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        btn6 = new QPushButton(MultiPlayerWindow);
        btn6->setObjectName("btn6");
        btn6->setGeometry(QRect(560, 230, 81, 71));
        btn6->setSizeIncrement(QSize(0, 0));
        btn6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        btn7 = new QPushButton(MultiPlayerWindow);
        btn7->setObjectName("btn7");
        btn7->setGeometry(QRect(340, 330, 81, 71));
        btn7->setSizeIncrement(QSize(0, 0));
        btn7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        btn8 = new QPushButton(MultiPlayerWindow);
        btn8->setObjectName("btn8");
        btn8->setGeometry(QRect(450, 330, 81, 71));
        btn8->setSizeIncrement(QSize(0, 0));
        btn8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        btn9 = new QPushButton(MultiPlayerWindow);
        btn9->setObjectName("btn9");
        btn9->setGeometry(QRect(560, 330, 81, 71));
        btn9->setSizeIncrement(QSize(0, 0));
        btn9->setAutoFillBackground(false);
        btn9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 30pt \"Segoe UI\";\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        gameStatus = new QLabel(MultiPlayerWindow);
        gameStatus->setObjectName("gameStatus");
        gameStatus->setGeometry(QRect(300, 440, 351, 51));
        gameStatus->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        playerturn = new QLabel(MultiPlayerWindow);
        playerturn->setObjectName("playerturn");
        playerturn->setGeometry(QRect(350, 70, 331, 51));
        playerturn->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);"));
        player1name = new QLabel(MultiPlayerWindow);
        player1name->setObjectName("player1name");
        player1name->setGeometry(QRect(10, 140, 171, 41));
        player1name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        player2name = new QLabel(MultiPlayerWindow);
        player2name->setObjectName("player2name");
        player2name->setGeometry(QRect(10, 290, 171, 51));
        player2name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(MultiPlayerWindow);

        QMetaObject::connectSlotsByName(MultiPlayerWindow);
    } // setupUi

    void retranslateUi(QDialog *MultiPlayerWindow)
    {
        MultiPlayerWindow->setWindowTitle(QCoreApplication::translate("MultiPlayerWindow", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("MultiPlayerWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">Vs</span></p></body></html>", nullptr));
        btn1->setText(QString());
        btn2->setText(QString());
        btn3->setText(QString());
        btn4->setText(QString());
        btn5->setText(QString());
        btn6->setText(QString());
        btn7->setText(QString());
        btn8->setText(QString());
        btn9->setText(QString());
        gameStatus->setText(QCoreApplication::translate("MultiPlayerWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">Final</span></p><p align=\"center\"><span style=\" color:#ffffff;\"><br/></span></p></body></html>", nullptr));
        playerturn->setText(QCoreApplication::translate("MultiPlayerWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ffffff;\">It's Player 1 Turn</span><span style=\" color:#ffffff;\"><br/></span></p></body></html>", nullptr));
        player1name->setText(QCoreApplication::translate("MultiPlayerWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Username1</span></p></body></html>", nullptr));
        player2name->setText(QCoreApplication::translate("MultiPlayerWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Username2</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MultiPlayerWindow: public Ui_MultiPlayerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLAYERWINDOW_H
