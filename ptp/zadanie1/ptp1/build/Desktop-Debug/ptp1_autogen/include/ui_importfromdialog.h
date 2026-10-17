/********************************************************************************
** Form generated from reading UI file 'importfromdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTFROMDIALOG_H
#define UI_IMPORTFROMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_importFromDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_findCountry;

    void setupUi(QDialog *importFromDialog)
    {
        if (importFromDialog->objectName().isEmpty())
            importFromDialog->setObjectName("importFromDialog");
        importFromDialog->resize(422, 149);
        label = new QLabel(importFromDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 70, 111, 31));
        label_2 = new QLabel(importFromDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 10, 421, 18));
        label_3 = new QLabel(importFromDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 30, 201, 18));
        widget = new QWidget(importFromDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 100, 381, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        pushButton_findCountry = new QPushButton(widget);
        pushButton_findCountry->setObjectName("pushButton_findCountry");

        horizontalLayout->addWidget(pushButton_findCountry);


        retranslateUi(importFromDialog);

        QMetaObject::connectSlotsByName(importFromDialog);
    } // setupUi

    void retranslateUi(QDialog *importFromDialog)
    {
        importFromDialog->setWindowTitle(QCoreApplication::translate("importFromDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("importFromDialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\202\321\200\320\260\320\275\321\203", nullptr));
        label_2->setText(QCoreApplication::translate("importFromDialog", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \321\202\320\276\320\262\320\260\321\200\321\213, \320\270\320\274\320\277\320\276\321\200\321\202\320\270\321\200\321\203\320\265\320\274\321\213\320\265 \320\270\320\267 \320\264\320\260\320\275\320\275\320\276\320\271 \321\201\321\202\321\200\320\260\320\275\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("importFromDialog", "\320\270 \321\201\321\203\320\274\320\274\320\260\321\200\320\275\321\213\320\271 \320\276\320\261\321\212\320\265\320\274 \321\201\320\264\320\265\320\273\320\276\320\272", nullptr));
        pushButton_findCountry->setText(QCoreApplication::translate("importFromDialog", "\320\237\320\276\320\270\321\201\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class importFromDialog: public Ui_importFromDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTFROMDIALOG_H
