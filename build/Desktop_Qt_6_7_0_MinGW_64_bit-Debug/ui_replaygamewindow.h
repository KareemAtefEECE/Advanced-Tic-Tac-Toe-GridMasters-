/********************************************************************************
** Form generated from reading UI file 'replaygamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLAYGAMEWINDOW_H
#define UI_REPLAYGAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ReplayGameWindow
{
public:
    QLabel *gameStatus;
    QPushButton *btn1;
    QPushButton *btn4;
    QFrame *line;
    QPushButton *btn3;
    QLabel *playerturn;
    QLabel *player2name;
    QPushButton *btn7;
    QPushButton *btn6;
    QPushButton *btn5;
    QPushButton *btn2;
    QPushButton *btn9;
    QPushButton *btn8;
    QLabel *label_3;
    QLabel *player1name;
    QLabel *game_id_label;

    void setupUi(QDialog *ReplayGameWindow)
    {
        if (ReplayGameWindow->objectName().isEmpty())
            ReplayGameWindow->setObjectName("ReplayGameWindow");
        ReplayGameWindow->resize(701, 514);
        ReplayGameWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(59, 59, 59);"));
        gameStatus = new QLabel(ReplayGameWindow);
        gameStatus->setObjectName("gameStatus");
        gameStatus->setGeometry(QRect(300, 420, 351, 51));
        gameStatus->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn1 = new QPushButton(ReplayGameWindow);
        btn1->setObjectName("btn1");
        btn1->setGeometry(QRect(330, 100, 81, 71));
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
        btn4 = new QPushButton(ReplayGameWindow);
        btn4->setObjectName("btn4");
        btn4->setGeometry(QRect(330, 200, 81, 71));
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
        line = new QFrame(ReplayGameWindow);
        line->setObjectName("line");
        line->setGeometry(QRect(230, 30, 20, 431));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        btn3 = new QPushButton(ReplayGameWindow);
        btn3->setObjectName("btn3");
        btn3->setGeometry(QRect(550, 100, 81, 71));
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
        playerturn = new QLabel(ReplayGameWindow);
        playerturn->setObjectName("playerturn");
        playerturn->setGeometry(QRect(340, 40, 251, 51));
        playerturn->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        player2name = new QLabel(ReplayGameWindow);
        player2name->setObjectName("player2name");
        player2name->setGeometry(QRect(30, 250, 171, 51));
        player2name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn7 = new QPushButton(ReplayGameWindow);
        btn7->setObjectName("btn7");
        btn7->setGeometry(QRect(330, 300, 81, 71));
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
        btn6 = new QPushButton(ReplayGameWindow);
        btn6->setObjectName("btn6");
        btn6->setGeometry(QRect(550, 200, 81, 71));
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
        btn5 = new QPushButton(ReplayGameWindow);
        btn5->setObjectName("btn5");
        btn5->setGeometry(QRect(440, 200, 81, 71));
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
        btn2 = new QPushButton(ReplayGameWindow);
        btn2->setObjectName("btn2");
        btn2->setGeometry(QRect(440, 100, 81, 71));
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
        btn9 = new QPushButton(ReplayGameWindow);
        btn9->setObjectName("btn9");
        btn9->setGeometry(QRect(550, 300, 81, 71));
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
        btn8 = new QPushButton(ReplayGameWindow);
        btn8->setObjectName("btn8");
        btn8->setGeometry(QRect(440, 300, 81, 71));
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
        label_3 = new QLabel(ReplayGameWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 180, 41, 61));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        player1name = new QLabel(ReplayGameWindow);
        player1name->setObjectName("player1name");
        player1name->setGeometry(QRect(20, 130, 171, 41));
        player1name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        game_id_label = new QLabel(ReplayGameWindow);
        game_id_label->setObjectName("game_id_label");
        game_id_label->setGeometry(QRect(30, 40, 171, 51));
        game_id_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        retranslateUi(ReplayGameWindow);

        QMetaObject::connectSlotsByName(ReplayGameWindow);
    } // setupUi

    void retranslateUi(QDialog *ReplayGameWindow)
    {
        ReplayGameWindow->setWindowTitle(QCoreApplication::translate("ReplayGameWindow", "Dialog", nullptr));
        gameStatus->setText(QCoreApplication::translate("ReplayGameWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">Final</span></p><p align=\"center\"><span style=\" color:#ffffff;\"><br/></span></p></body></html>", nullptr));
        btn1->setText(QString());
        btn4->setText(QString());
        btn3->setText(QString());
#if QT_CONFIG(tooltip)
        playerturn->setToolTip(QCoreApplication::translate("ReplayGameWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        playerturn->setText(QCoreApplication::translate("ReplayGameWindow", "<html><head/><body><p><span style=\" font-size:14pt; color:#ffffff;\">It's Player 1 Turn<br/></span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        player2name->setToolTip(QCoreApplication::translate("ReplayGameWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        player2name->setText(QCoreApplication::translate("ReplayGameWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Username2</span></p></body></html>", nullptr));
        btn7->setText(QString());
        btn6->setText(QString());
        btn5->setText(QString());
        btn2->setText(QString());
        btn9->setText(QString());
        btn8->setText(QString());
        label_3->setText(QCoreApplication::translate("ReplayGameWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">Vs</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        player1name->setToolTip(QCoreApplication::translate("ReplayGameWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        player1name->setText(QCoreApplication::translate("ReplayGameWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Username1</span></p></body></html>", nullptr));
        game_id_label->setText(QCoreApplication::translate("ReplayGameWindow", "<html><head/><body><p><span style=\" font-size:20pt; color:#ffffff;\">Game ID :</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplayGameWindow: public Ui_ReplayGameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLAYGAMEWINDOW_H
