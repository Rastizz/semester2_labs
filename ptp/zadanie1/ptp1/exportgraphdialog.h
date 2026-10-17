#ifndef EXPORTGRAPHDIALOG_H
#define EXPORTGRAPHDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QtCharts>
#include "tradedatabase.h"



namespace Ui {
class exportGraphDialog;
}

class exportGraphDialog : public QDialog
{
    Q_OBJECT

public:
    explicit exportGraphDialog(QWidget *parent = nullptr, TradeDatabase* db = nullptr);
    ~exportGraphDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::exportGraphDialog *ui;
    TradeDatabase* database;
    QChartView* chartView = nullptr; // для хранения графика
    void displayChart(const QMap<int, double>& data, const QString& product);
};

#endif // EXPORTGRAPHDIALOG_H
