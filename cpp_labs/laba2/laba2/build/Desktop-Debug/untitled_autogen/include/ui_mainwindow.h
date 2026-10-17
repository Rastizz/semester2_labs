/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEditInt;
    QLineEdit *lineEditChar;
    QPushButton *pushButtonPushInt;
    QPushButton *pushButtonPushChar;
    QPushButton *pushButtonPop;
    QPushButton *pushButtonPrint;
    QPushButton *pushButtonSortInts;
    QPushButton *pushButtonSortChars;
    QTextEdit *textEditStack;
    QMenuBar *menubar;
    QMenu *menustack;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEditInt = new QLineEdit(centralwidget);
        lineEditInt->setObjectName("lineEditInt");
        lineEditInt->setGeometry(QRect(40, 140, 113, 26));
        lineEditChar = new QLineEdit(centralwidget);
        lineEditChar->setObjectName("lineEditChar");
        lineEditChar->setGeometry(QRect(40, 320, 113, 26));
        pushButtonPushInt = new QPushButton(centralwidget);
        pushButtonPushInt->setObjectName("pushButtonPushInt");
        pushButtonPushInt->setGeometry(QRect(40, 170, 88, 26));
        pushButtonPushChar = new QPushButton(centralwidget);
        pushButtonPushChar->setObjectName("pushButtonPushChar");
        pushButtonPushChar->setGeometry(QRect(40, 350, 88, 26));
        pushButtonPop = new QPushButton(centralwidget);
        pushButtonPop->setObjectName("pushButtonPop");
        pushButtonPop->setGeometry(QRect(40, 410, 88, 26));
        pushButtonPrint = new QPushButton(centralwidget);
        pushButtonPrint->setObjectName("pushButtonPrint");
        pushButtonPrint->setGeometry(QRect(40, 450, 88, 26));
        pushButtonSortInts = new QPushButton(centralwidget);
        pushButtonSortInts->setObjectName("pushButtonSortInts");
        pushButtonSortInts->setGeometry(QRect(240, 380, 88, 26));
        pushButtonSortChars = new QPushButton(centralwidget);
        pushButtonSortChars->setObjectName("pushButtonSortChars");
        pushButtonSortChars->setGeometry(QRect(240, 410, 88, 26));
        textEditStack = new QTextEdit(centralwidget);
        textEditStack->setObjectName("textEditStack");
        textEditStack->setGeometry(QRect(410, 10, 331, 531));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menustack = new QMenu(menubar);
        menustack->setObjectName("menustack");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menustack->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonPushInt->setText(QCoreApplication::translate("MainWindow", "Push int", nullptr));
        pushButtonPushChar->setText(QCoreApplication::translate("MainWindow", "Push char", nullptr));
        pushButtonPop->setText(QCoreApplication::translate("MainWindow", "Pop", nullptr));
        pushButtonPrint->setText(QCoreApplication::translate("MainWindow", "Show stack", nullptr));
        pushButtonSortInts->setText(QCoreApplication::translate("MainWindow", "Sort nums", nullptr));
        pushButtonSortChars->setText(QCoreApplication::translate("MainWindow", "Sort chars", nullptr));
        menustack->setTitle(QCoreApplication::translate("MainWindow", "stack", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
