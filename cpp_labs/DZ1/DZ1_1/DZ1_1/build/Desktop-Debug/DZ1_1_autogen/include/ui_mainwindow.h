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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_C;
    QPushButton *pushButton_eq;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_mul;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_div;
    QPushButton *pushButton_exit;
    QMenuBar *menubar;
    QMenu *menucalc;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(331, 387);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 10, 251, 71));
        lineEdit->setAlignment(Qt::AlignCenter);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 100, 251, 231));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_C = new QPushButton(widget);
        pushButton_C->setObjectName("pushButton_C");

        horizontalLayout->addWidget(pushButton_C);

        pushButton_eq = new QPushButton(widget);
        pushButton_eq->setObjectName("pushButton_eq");

        horizontalLayout->addWidget(pushButton_eq);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_plus = new QPushButton(widget);
        pushButton_plus->setObjectName("pushButton_plus");

        horizontalLayout_2->addWidget(pushButton_plus);

        pushButton_mul = new QPushButton(widget);
        pushButton_mul->setObjectName("pushButton_mul");

        horizontalLayout_2->addWidget(pushButton_mul);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_minus = new QPushButton(widget);
        pushButton_minus->setObjectName("pushButton_minus");

        horizontalLayout_3->addWidget(pushButton_minus);

        pushButton_div = new QPushButton(widget);
        pushButton_div->setObjectName("pushButton_div");

        horizontalLayout_3->addWidget(pushButton_div);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_exit = new QPushButton(widget);
        pushButton_exit->setObjectName("pushButton_exit");

        verticalLayout->addWidget(pushButton_exit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 331, 23));
        menucalc = new QMenu(menubar);
        menucalc->setObjectName("menucalc");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menucalc->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_C->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        menucalc->setTitle(QCoreApplication::translate("MainWindow", "calc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
