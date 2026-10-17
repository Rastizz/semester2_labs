/********************************************************************************
** Form generated from reading UI file 'addform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFORM_H
#define UI_ADDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddForm
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_Surname;
    QLineEdit *lineEdit_Name;
    QLineEdit *lineEdit_Phone;
    QLineEdit *lineEdit_Address;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Add;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_Exit;

    void setupUi(QWidget *AddForm)
    {
        if (AddForm->objectName().isEmpty())
            AddForm->setObjectName("AddForm");
        AddForm->resize(345, 184);
        verticalLayout_3 = new QVBoxLayout(AddForm);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(AddForm);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(AddForm);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(AddForm);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(AddForm);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit_Surname = new QLineEdit(AddForm);
        lineEdit_Surname->setObjectName("lineEdit_Surname");

        verticalLayout->addWidget(lineEdit_Surname);

        lineEdit_Name = new QLineEdit(AddForm);
        lineEdit_Name->setObjectName("lineEdit_Name");

        verticalLayout->addWidget(lineEdit_Name);

        lineEdit_Phone = new QLineEdit(AddForm);
        lineEdit_Phone->setObjectName("lineEdit_Phone");
        lineEdit_Phone->setMaxLength(12);

        verticalLayout->addWidget(lineEdit_Phone);

        lineEdit_Address = new QLineEdit(AddForm);
        lineEdit_Address->setObjectName("lineEdit_Address");

        verticalLayout->addWidget(lineEdit_Address);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_Add = new QPushButton(AddForm);
        pushButton_Add->setObjectName("pushButton_Add");

        horizontalLayout_2->addWidget(pushButton_Add);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_Exit = new QPushButton(AddForm);
        pushButton_Exit->setObjectName("pushButton_Exit");

        horizontalLayout_2->addWidget(pushButton_Exit);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(AddForm);

        QMetaObject::connectSlotsByName(AddForm);
    } // setupUi

    void retranslateUi(QWidget *AddForm)
    {
        AddForm->setWindowTitle(QCoreApplication::translate("AddForm", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        label->setText(QCoreApplication::translate("AddForm", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("AddForm", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("AddForm", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        label_4->setText(QCoreApplication::translate("AddForm", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        lineEdit_Surname->setInputMask(QString());
        lineEdit_Surname->setText(QString());
        lineEdit_Surname->setPlaceholderText(QCoreApplication::translate("AddForm", "\320\230\320\262\320\260\320\275\320\276\320\262", nullptr));
        lineEdit_Name->setPlaceholderText(QCoreApplication::translate("AddForm", "\320\230\320\262\320\260\320\275", nullptr));
        lineEdit_Phone->setPlaceholderText(QCoreApplication::translate("AddForm", "+71234567890", nullptr));
        lineEdit_Address->setPlaceholderText(QCoreApplication::translate("AddForm", "\320\237\321\203\321\210\320\272\320\270\320\275\320\260 13", nullptr));
        pushButton_Add->setText(QCoreApplication::translate("AddForm", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_Exit->setText(QCoreApplication::translate("AddForm", "\320\232\320\276\320\275\320\265\321\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddForm: public Ui_AddForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFORM_H
