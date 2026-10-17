#include "findform.h"
#include "ui_findform.h"
#include <QMessageBox>

FindForm::FindForm(QWidget *parent, ContactList* list)
    : QWidget(parent)
    , ui(new Ui::FindForm)
    , mylist(list)
{
    ui->setupUi(this);
}

FindForm::~FindForm()
{
    delete ui;
}

void FindForm::on_pushButton_Find_clicked()
{
    curr = mylist->head;
    QString name = ui->lineEdit_Name->text();
    QString surname = ui->lineEdit_Surname->text();
    QString phone = ui->lineEdit_Phone->text();
    QString address = ui->lineEdit_Address->text();
    curr = mylist->findContact(mylist->head, name, surname, phone,address);
    if (curr == nullptr){
        QMessageBox::warning(this, "","Контакт не найден");
    }
    QMessageBox::StandardButton reply;
    do{
        if (curr == nullptr){
            QMessageBox::warning(this, "","Контактов больше не найдено");
            return;
        }
        else{
        QString msg = "Пользователь, которого вы искали? "+ curr->getName()+" "+ curr->getSurname()+", "+ curr->getPhone()+" "+ curr->getAddress();
        reply = QMessageBox::question(this, "Поиск абонентов", msg,
                                      QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::No) {
            curr = curr-> next;
            curr = mylist->findContact(curr, name, surname, phone,address);
        }
        if(reply==QMessageBox::Yes){
        }
        }
    }while (reply == QMessageBox::No);
}
void FindForm::on_pushButton_Delete_clicked(){
    curr = mylist->head;
    QString name = ui->lineEdit_Name->text();
    QString surname = ui->lineEdit_Surname->text();
    QString phone = ui->lineEdit_Phone->text();
    QString address = ui->lineEdit_Address->text();
    curr = mylist->findContact(curr,name,surname,phone,address);
    if (curr == nullptr){
        QMessageBox::warning(this, "","Контакт не найден");
    }
    QMessageBox::StandardButton reply;
    do{
        if(curr == nullptr){
            QMessageBox::warning(this,"","Список пуст");
        }
        else{
            QString msg = "Пользователь, которого вы хотели далить это: " + curr->getName() + " " + curr->getSurname() + "," + curr->getPhone()+ "," + curr->getAddress();
            reply = QMessageBox::question(this, "Поиск абонентов", msg,
                                          QMessageBox::Yes | QMessageBox::No);
            if (reply == QMessageBox::No) {
                curr = curr-> next;
                curr = mylist->findContact(curr, name, surname, phone,address);
            }
            if(reply==QMessageBox::Yes){
                mylist->deleteContact(curr);
            }
        }
    }while(reply == QMessageBox::No);
}

