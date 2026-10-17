#ifndef DELETEDEALDIALOG_H
#define DELETEDEALDIALOG_H

#include "deal.h"
#include <QDialog>
#include "tradedatabase.h"
#include <QMessageBox>

namespace Ui {
class deleteDealDialog;
}

class deleteDealDialog : public QDialog
{
    Q_OBJECT

public:
    explicit deleteDealDialog(QWidget *parent, TradeDatabase &db);
    ~deleteDealDialog();

private slots:
    void on_pushButton_Exit_clicked();
    void on_pushButton_Del_clicked();

private:
    Ui::deleteDealDialog *ui;
    TradeDatabase *bd;
};

#endif // DELETEDEALDIALOG_H
