#include "addform.h"
#include "ui_addform.h"

AddForm::AddForm(QWidget *parent, ContactList *list)
    : QWidget(parent)
    , ui(new Ui::AddForm)
    , mylist(list)
{
    ui->setupUi(this);
}

AddForm::~AddForm()
{
    delete ui;

}

void AddForm::on_pushButton_Exit_clicked()
{
    this->close();
}


void AddForm::on_pushButton_Add_clicked()
{

    QString name = ui->lineEdit_Name->text();
    QString surname = ui->lineEdit_Surname->text();
    QString phone = ui->lineEdit_Phone->text();
    QString address = ui->lineEdit_Address->text();
    mylist->addContact(name,surname,phone,address);
    ui->lineEdit_Name->clear();
    ui->lineEdit_Surname->clear();
    ui->lineEdit_Phone->clear();
    ui->lineEdit_Address->clear();
}

