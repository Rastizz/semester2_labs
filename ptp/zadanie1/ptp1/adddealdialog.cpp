#include "adddealdialog.h"
#include "ui_adddealdialog.h"

addDealDialog::addDealDialog(QWidget *parent, TradeDatabase& mydatabase)
    : QDialog(parent)
    , ui(new Ui::addDealDialog)
    ,bd(&mydatabase)
{
    ui->setupUi(this);
}

addDealDialog::~addDealDialog()
{
    delete ui;
}
void addDealDialog:: on_pushButton_Exit_clicked(){
    this->close();
}
void addDealDialog:: on_pushButton_Add_clicked(){

    QString productName = ui->lineEdit_ProductName->text();
    if(ui->lineEdit_ProductName->text().trimmed().isEmpty()){
        QMessageBox::warning(this,"","Пустое наименование товара!");
        return;
    }
    bool ok = false;
    int volume = ui->lineEdit_Volume->text().toDouble(&ok);
    if (!ok) {
        QMessageBox::warning(this, "", "Введите число!");
        return;
    }
    int year = ui->spinBox_Year->text().toInt();
    QString country = ui->lineEdit_Country->text();
    if(ui->lineEdit_Country->text().trimmed().isEmpty()){
        QMessageBox::warning(this,"","Пустое название страны!");
        return;
    }
    QString direction = ui->comboBox_Direction->currentText();
    Deal deal(productName,volume,year,country,direction);
    bd->addDeal(deal);
    bd->saveToFile(deal);
    accept();
}
