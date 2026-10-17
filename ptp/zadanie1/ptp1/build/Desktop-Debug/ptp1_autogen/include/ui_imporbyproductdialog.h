/********************************************************************************
** Form generated from reading UI file 'imporbyproductdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORBYPRODUCTDIALOG_H
#define UI_IMPORBYPRODUCTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_imporByProductDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_findProduct;
    QLabel *label_3;

    void setupUi(QDialog *imporByProductDialog)
    {
        if (imporByProductDialog->objectName().isEmpty())
            imporByProductDialog->setObjectName("imporByProductDialog");
        imporByProductDialog->resize(466, 136);
        label = new QLabel(imporByProductDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 50, 111, 31));
        label_2 = new QLabel(imporByProductDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 471, 18));
        layoutWidget = new QWidget(imporByProductDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 90, 421, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        pushButton_findProduct = new QPushButton(layoutWidget);
        pushButton_findProduct->setObjectName("pushButton_findProduct");

        horizontalLayout->addWidget(pushButton_findProduct);

        label_3 = new QLabel(imporByProductDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 20, 241, 18));

        retranslateUi(imporByProductDialog);

        QMetaObject::connectSlotsByName(imporByProductDialog);
    } // setupUi

    void retranslateUi(QDialog *imporByProductDialog)
    {
        imporByProductDialog->setWindowTitle(QCoreApplication::translate("imporByProductDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("imporByProductDialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\276\320\262\320\260\321\200", nullptr));
        label_2->setText(QCoreApplication::translate("imporByProductDialog", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \321\201\321\202\321\200\320\260\320\275\321\213, \320\270\320\267 \320\272\320\276\321\202\320\276\321\200\321\213\321\205 \320\270\320\274\320\277\320\276\321\200\321\202\320\270\321\200\321\203\320\265\321\202\321\201\321\217 \320\264\320\260\320\275\320\275\321\213\320\271 \321\202\320\276\320\262\320\260\321\200", nullptr));
        pushButton_findProduct->setText(QCoreApplication::translate("imporByProductDialog", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        label_3->setText(QCoreApplication::translate("imporByProductDialog", " \320\270 \320\276\320\261\321\212\320\265\320\274 \321\201\320\264\320\265\320\273\320\276\320\272 \320\262 \320\272\320\260\320\266\320\264\320\276\320\274 \321\201\320\273\321\203\321\207\320\260\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class imporByProductDialog: public Ui_imporByProductDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORBYPRODUCTDIALOG_H
