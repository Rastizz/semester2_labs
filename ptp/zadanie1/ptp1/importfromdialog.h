#ifndef IMPORTFROMDIALOG_H
#define IMPORTFROMDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "tradedatabase.h"

namespace Ui {
class importFromDialog;
}

class importFromDialog : public QDialog
{
    Q_OBJECT

public:
    explicit importFromDialog(QWidget *parent = nullptr, TradeDatabase* db = nullptr);
    ~importFromDialog();

private slots:
    void on_pushButton_findCountry_clicked();

private:
    Ui::importFromDialog *ui;
    TradeDatabase* database;
};

#endif // IMPORTFROMDIALOG_H
