/********************************************************************************
** Form generated from reading UI file 'exportgraphdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTGRAPHDIALOG_H
#define UI_EXPORTGRAPHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_exportGraphDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *leftLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QWidget *chartContainer_4;
    QVBoxLayout *chartLayout_4;

    void setupUi(QDialog *exportGraphDialog)
    {
        if (exportGraphDialog->objectName().isEmpty())
            exportGraphDialog->setObjectName("exportGraphDialog");
        exportGraphDialog->resize(1195, 645);
        layoutWidget = new QWidget(exportGraphDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 1191, 641));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        leftLayout_4 = new QVBoxLayout();
        leftLayout_4->setObjectName("leftLayout_4");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        leftLayout_4->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        leftLayout_4->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        leftLayout_4->addWidget(pushButton);


        horizontalLayout_4->addLayout(leftLayout_4);

        chartContainer_4 = new QWidget(layoutWidget);
        chartContainer_4->setObjectName("chartContainer_4");
        chartLayout_4 = new QVBoxLayout(chartContainer_4);
        chartLayout_4->setObjectName("chartLayout_4");

        horizontalLayout_4->addWidget(chartContainer_4);


        retranslateUi(exportGraphDialog);

        QMetaObject::connectSlotsByName(exportGraphDialog);
    } // setupUi

    void retranslateUi(QDialog *exportGraphDialog)
    {
        exportGraphDialog->setWindowTitle(QCoreApplication::translate("exportGraphDialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("exportGraphDialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\276\320\262\320\260\321\200 \320\264\320\273\321\217 \320\263\321\200\320\260\321\204\320\270\320\272\320\260 \321\215\320\272\321\201\320\277\320\276\321\200\321\202\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("exportGraphDialog", "\320\235\320\260\320\271\321\202\320\270 \321\202\320\276\320\262\320\260\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class exportGraphDialog: public Ui_exportGraphDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTGRAPHDIALOG_H
