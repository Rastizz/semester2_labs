/********************************************************************************
** Form generated from reading UI file 'adddealdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDEALDIALOG_H
#define UI_ADDDEALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addDealDialog
{
public:
    QPushButton *pushButton_Add;
    QPushButton *pushButton_Exit;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_ProductName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_Volume;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *spinBox_Year;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_Country;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *comboBox_Direction;

    void setupUi(QDialog *addDealDialog)
    {
        if (addDealDialog->objectName().isEmpty())
            addDealDialog->setObjectName("addDealDialog");
        addDealDialog->resize(361, 300);
        pushButton_Add = new QPushButton(addDealDialog);
        pushButton_Add->setObjectName("pushButton_Add");
        pushButton_Add->setGeometry(QRect(30, 250, 111, 31));
        pushButton_Exit = new QPushButton(addDealDialog);
        pushButton_Exit->setObjectName("pushButton_Exit");
        pushButton_Exit->setGeometry(QRect(220, 250, 101, 31));
        label = new QLabel(addDealDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 0, 141, 41));
        label->setLineWidth(1);
        layoutWidget = new QWidget(addDealDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 50, 361, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit_ProductName = new QLineEdit(layoutWidget);
        lineEdit_ProductName->setObjectName("lineEdit_ProductName");

        horizontalLayout->addWidget(lineEdit_ProductName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        lineEdit_Volume = new QLineEdit(layoutWidget);
        lineEdit_Volume->setObjectName("lineEdit_Volume");

        horizontalLayout_2->addWidget(lineEdit_Volume);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        spinBox_Year = new QSpinBox(layoutWidget);
        spinBox_Year->setObjectName("spinBox_Year");
        spinBox_Year->setMinimum(0);
        spinBox_Year->setMaximum(2999);
        spinBox_Year->setValue(2010);

        horizontalLayout_3->addWidget(spinBox_Year);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        lineEdit_Country = new QLineEdit(layoutWidget);
        lineEdit_Country->setObjectName("lineEdit_Country");

        horizontalLayout_4->addWidget(lineEdit_Country);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_5->addWidget(label_6);

        comboBox_Direction = new QComboBox(layoutWidget);
        comboBox_Direction->addItem(QString());
        comboBox_Direction->addItem(QString());
        comboBox_Direction->setObjectName("comboBox_Direction");

        horizontalLayout_5->addWidget(comboBox_Direction);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(addDealDialog);

        QMetaObject::connectSlotsByName(addDealDialog);
    } // setupUi

    void retranslateUi(QDialog *addDealDialog)
    {
        addDealDialog->setWindowTitle(QCoreApplication::translate("addDealDialog", "Dialog", nullptr));
        pushButton_Add->setText(QCoreApplication::translate("addDealDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_Exit->setText(QCoreApplication::translate("addDealDialog", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label->setText(QCoreApplication::translate("addDealDialog", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\201\320\264\320\265\320\273\320\272\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("addDealDialog", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("addDealDialog", "\320\236\320\261\321\212\320\265\320\274 \321\201\320\264\320\265\320\273\320\272\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("addDealDialog", "\320\223\320\276\320\264 \320\267\320\260\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217 \321\201\320\264\320\265\320\273\320\272\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("addDealDialog", "\320\241\321\202\321\200\320\260\320\275\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("addDealDialog", "\320\235\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        comboBox_Direction->setItemText(0, QCoreApplication::translate("addDealDialog", "Import", nullptr));
        comboBox_Direction->setItemText(1, QCoreApplication::translate("addDealDialog", "Export", nullptr));

    } // retranslateUi

};

namespace Ui {
    class addDealDialog: public Ui_addDealDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDEALDIALOG_H
