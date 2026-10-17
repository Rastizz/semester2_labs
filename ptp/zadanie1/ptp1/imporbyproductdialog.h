#ifndef IMPORBYPRODUCTDIALOG_H
#define IMPORBYPRODUCTDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "tradedatabase.h"

namespace Ui {
class imporByProductDialog;
}

class imporByProductDialog : public QDialog
{
    Q_OBJECT

public:
    explicit imporByProductDialog(QWidget *parent = nullptr, TradeDatabase* db = nullptr);
    ~imporByProductDialog();

private slots:
    void on_pushButton_findProduct_clicked();

private:
    Ui::imporByProductDialog *ui;
    TradeDatabase* database;
};

#endif // IMPORBYPRODUCTDIALOG_H
