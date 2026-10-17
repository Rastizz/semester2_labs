#ifndef ADDDEALDIALOG_H
#define ADDDEALDIALOG_H
#include "deal.h"
#include "tradedatabase.h"
#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QMessageBox>
namespace Ui {
class addDealDialog;
}

class addDealDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addDealDialog(QWidget *parent, TradeDatabase& mydatabase);
    ~addDealDialog();

private:
    Ui::addDealDialog *ui;
    TradeDatabase* bd;

private slots:
    void on_pushButton_Add_clicked();
    void on_pushButton_Exit_clicked();
};

#endif // ADDDEALDIALOG_H
