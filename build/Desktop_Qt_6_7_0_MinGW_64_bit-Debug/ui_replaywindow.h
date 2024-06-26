/********************************************************************************
** Form generated from reading UI file 'replaywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLAYWINDOW_H
#define UI_REPLAYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ReplayWindow
{
public:
    QPushButton *dialog_replay;
    QLineEdit *game_id_edit;
    QLabel *username_4;

    void setupUi(QDialog *ReplayWindow)
    {
        if (ReplayWindow->objectName().isEmpty())
            ReplayWindow->setObjectName("ReplayWindow");
        ReplayWindow->resize(400, 300);
        ReplayWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 48, 48);"));
        dialog_replay = new QPushButton(ReplayWindow);
        dialog_replay->setObjectName("dialog_replay");
        dialog_replay->setGeometry(QRect(150, 200, 80, 31));
        dialog_replay->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db; /* Background color */\n"
"    color: #ffffff;            /* Text color */\n"
"    border: 2px solid #ffffff; /* Border color and width */\n"
"    border-radius: 10px;       /* Edges sharpness */\n"
"    padding: 5px;              /* Padding for better spacing */\n"
"\n"
"}"));
        game_id_edit = new QLineEdit(ReplayWindow);
        game_id_edit->setObjectName("game_id_edit");
        game_id_edit->setGeometry(QRect(100, 150, 181, 24));
        game_id_edit->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);\n"
"color: rgb(0, 0, 0);"));
        username_4 = new QLabel(ReplayWindow);
        username_4->setObjectName("username_4");
        username_4->setGeometry(QRect(110, 30, 171, 91));

        retranslateUi(ReplayWindow);

        QMetaObject::connectSlotsByName(ReplayWindow);
    } // setupUi

    void retranslateUi(QDialog *ReplayWindow)
    {
        ReplayWindow->setWindowTitle(QCoreApplication::translate("ReplayWindow", "Dialog", nullptr));
        dialog_replay->setText(QCoreApplication::translate("ReplayWindow", "Replay", nullptr));
        username_4->setText(QCoreApplication::translate("ReplayWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700; color:#ffffff;\">Enter Game ID </span></p><p align=\"center\"><span style=\" font-size:16pt; font-weight:700; color:#ffffff;\">To Replay</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReplayWindow: public Ui_ReplayWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLAYWINDOW_H
