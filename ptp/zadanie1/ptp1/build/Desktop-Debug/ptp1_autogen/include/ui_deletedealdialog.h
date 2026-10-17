/********************************************************************************
** Form generated from reading UI file 'deletedealdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEDEALDIALOG_H
#define UI_DELETEDEALDIALOG_H

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

class Ui_deleteDealDialog
{
public:
    QPushButton *pushButton_Exit;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *lineEdit_ProductName_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *lineEdit_Volume_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QSpinBox *spinBox_Year_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *lineEdit_Country_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QComboBox *comboBox_Direction_2;
    QPushButton *pushButton_Del;

    void setupUi(QDialog *deleteDealDialog)
    {
        if (deleteDealDialog->objectName().isEmpty())
            deleteDealDialog->setObjectName("deleteDealDialog");
        deleteDealDialog->resize(362, 300);
        pushButton_Exit = new QPushButton(deleteDealDialog);
        pushButton_Exit->setObjectName("pushButton_Exit");
        pushButton_Exit->setGeometry(QRect(220, 250, 101, 31));
        label = new QLabel(deleteDealDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 0, 141, 41));
        label->setLineWidth(1);
        layoutWidget = new QWidget(deleteDealDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 50, 361, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_6->addWidget(label_7);

        lineEdit_ProductName_2 = new QLineEdit(layoutWidget);
        lineEdit_ProductName_2->setObjectName("lineEdit_ProductName_2");

        horizontalLayout_6->addWidget(lineEdit_ProductName_2);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_7->addWidget(label_8);

        lineEdit_Volume_2 = new QLineEdit(layoutWidget);
        lineEdit_Volume_2->setObjectName("lineEdit_Volume_2");

        horizontalLayout_7->addWidget(lineEdit_Volume_2);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");

        horizontalLayout_8->addWidget(label_9);

        spinBox_Year_2 = new QSpinBox(layoutWidget);
        spinBox_Year_2->setObjectName("spinBox_Year_2");
        spinBox_Year_2->setMinimum(0);
        spinBox_Year_2->setMaximum(2999);
        spinBox_Year_2->setValue(2010);

        horizontalLayout_8->addWidget(spinBox_Year_2);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName("label_10");

        horizontalLayout_9->addWidget(label_10);

        lineEdit_Country_2 = new QLineEdit(layoutWidget);
        lineEdit_Country_2->setObjectName("lineEdit_Country_2");

        horizontalLayout_9->addWidget(lineEdit_Country_2);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName("label_11");

        horizontalLayout_10->addWidget(label_11);

        comboBox_Direction_2 = new QComboBox(layoutWidget);
        comboBox_Direction_2->addItem(QString());
        comboBox_Direction_2->addItem(QString());
        comboBox_Direction_2->setObjectName("comboBox_Direction_2");

        horizontalLayout_10->addWidget(comboBox_Direction_2);


        verticalLayout_2->addLayout(horizontalLayout_10);

        pushButton_Del = new QPushButton(deleteDealDialog);
        pushButton_Del->setObjectName("pushButton_Del");
        pushButton_Del->setGeometry(QRect(30, 250, 111, 31));

        retranslateUi(deleteDealDialog);

        QMetaObject::connectSlotsByName(deleteDealDialog);
    } // setupUi

    void retranslateUi(QDialog *deleteDealDialog)
    {
        deleteDealDialog->setWindowTitle(QCoreApplication::translate("deleteDealDialog", "Dialog", nullptr));
        pushButton_Exit->setText(QCoreApplication::translate("deleteDealDialog", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label->setText(QCoreApplication::translate("deleteDealDialog", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \321\201\320\264\320\265\320\273\320\272\320\270", nullptr));
        label_7->setText(QCoreApplication::translate("deleteDealDialog", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\276\320\262\320\260\321\200\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("deleteDealDialog", "\320\236\320\261\321\212\320\265\320\274 \321\201\320\264\320\265\320\273\320\272\320\270", nullptr));
        label_9->setText(QCoreApplication::translate("deleteDealDialog", "\320\223\320\276\320\264 \320\267\320\260\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217 \321\201\320\264\320\265\320\273\320\272\320\270", nullptr));
        label_10->setText(QCoreApplication::translate("deleteDealDialog", "\320\241\321\202\321\200\320\260\320\275\320\260", nullptr));
        label_11->setText(QCoreApplication::translate("deleteDealDialog", "\320\235\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        comboBox_Direction_2->setItemText(0, QCoreApplication::translate("deleteDealDialog", "import", nullptr));
        comboBox_Direction_2->setItemText(1, QCoreApplication::translate("deleteDealDialog", "export", nullptr));

        pushButton_Del->setText(QCoreApplication::translate("deleteDealDialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteDealDialog: public Ui_deleteDealDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEDEALDIALOG_H
