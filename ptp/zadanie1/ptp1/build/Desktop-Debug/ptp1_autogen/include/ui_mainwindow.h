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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_path;
    QPushButton *pushButton_Browse;
    QPushButton *pushButton_ImporByProduct;
    QPushButton *pushButton_ImportFrom;
    QPushButton *pushButton_ExportGraph;
    QPushButton *pushButton_BestExporter;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_AddDeal;
    QPushButton *pushButton_DeleteDeal;
    QTableWidget *tableWidget;
    QPushButton *pushButton_Exit;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1045, 651);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 20, 961, 571));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_path = new QLineEdit(layoutWidget);
        lineEdit_path->setObjectName("lineEdit_path");

        horizontalLayout->addWidget(lineEdit_path);

        pushButton_Browse = new QPushButton(layoutWidget);
        pushButton_Browse->setObjectName("pushButton_Browse");

        horizontalLayout->addWidget(pushButton_Browse);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButton_ImporByProduct = new QPushButton(layoutWidget);
        pushButton_ImporByProduct->setObjectName("pushButton_ImporByProduct");

        verticalLayout_3->addWidget(pushButton_ImporByProduct);

        pushButton_ImportFrom = new QPushButton(layoutWidget);
        pushButton_ImportFrom->setObjectName("pushButton_ImportFrom");

        verticalLayout_3->addWidget(pushButton_ImportFrom);

        pushButton_ExportGraph = new QPushButton(layoutWidget);
        pushButton_ExportGraph->setObjectName("pushButton_ExportGraph");

        verticalLayout_3->addWidget(pushButton_ExportGraph);

        pushButton_BestExporter = new QPushButton(layoutWidget);
        pushButton_BestExporter->setObjectName("pushButton_BestExporter");

        verticalLayout_3->addWidget(pushButton_BestExporter);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_3);


        verticalLayout_2->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton_AddDeal = new QPushButton(layoutWidget);
        pushButton_AddDeal->setObjectName("pushButton_AddDeal");

        verticalLayout->addWidget(pushButton_AddDeal);

        pushButton_DeleteDeal = new QPushButton(layoutWidget);
        pushButton_DeleteDeal->setObjectName("pushButton_DeleteDeal");

        verticalLayout->addWidget(pushButton_DeleteDeal);


        verticalLayout_2->addLayout(verticalLayout);

        tableWidget = new QTableWidget(layoutWidget);
        tableWidget->setObjectName("tableWidget");

        verticalLayout_2->addWidget(tableWidget);

        pushButton_Exit = new QPushButton(layoutWidget);
        pushButton_Exit->setObjectName("pushButton_Exit");

        verticalLayout_2->addWidget(pushButton_Exit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1045, 23));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_Browse->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\267\320\276\321\200", nullptr));
        pushButton_ImporByProduct->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\320\277\320\276\321\200\321\202\321\221\321\200\321\213 \320\277\320\276 \321\202\320\276\320\262\320\260\321\200\321\203", nullptr));
        pushButton_ImportFrom->setText(QCoreApplication::translate("MainWindow", " \320\242\320\276\320\262\320\260\321\200\321\213 \320\270 \320\276\320\261\321\212\320\265\320\274 \320\277\320\276 \321\201\321\202\321\200\320\260\320\275\320\265", nullptr));
        pushButton_ExportGraph->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272 \321\215\320\272\321\201\320\277\320\276\321\200\321\202\320\260 \320\277\320\276 \321\202\320\276\320\262\320\260\321\200\321\203", nullptr));
        pushButton_BestExporter->setText(QCoreApplication::translate("MainWindow", "\320\233\321\203\321\207\321\210\320\270\320\271 \320\255\320\272\321\201\320\277\320\276\321\200\321\202\320\265\321\200", nullptr));
        pushButton_AddDeal->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\241\320\264\320\265\320\273\320\272\321\203", nullptr));
        pushButton_DeleteDeal->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\241\320\264\320\265\320\273\320\272\321\203", nullptr));
        pushButton_Exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\275\320\265\321\210\320\275\320\265\321\215\320\272\320\276\320\275\320\276\320\274\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\262\320\265\320\264\320\276\320\274\321\201\321\202\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
