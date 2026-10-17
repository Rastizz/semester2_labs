#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "tradedatabase.h"
#include "adddealdialog.h"
#include "deletedealdialog.h"
#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QChartView>
#include <QtCharts>
#include "importfromdialog.h"
#include "imporbyproductdialog.h"
#include "exportgraphdialog.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    TradeDatabase mydatabase;
private slots:
    void on_pushButton_AddDeal_clicked(); //Добавить сделку
    void on_pushButton_DeleteDeal_clicked(); //удалить сделку
    void on_pushButton_Browse_clicked(); //обзор пути
    void on_pushButton_ImportFrom_clicked(); // Импорт из страны (Определить все товары, импортируемые из данной страны и суммарный объем сделок.)
    void on_pushButton_BestExporter_clicked(); // Топ экспорт (Определить страну, экспорт в которую имеет наибольший объем.)
    void on_pushButton_ImporByProduct_clicked(); // Импорт товара (Определить все страны, из которых импортируется данный товар, и объем сделок в каждом случае.)
    void on_pushButton_ExportGraph_clicked(); // График экспорта по годам (Построить график экспорта заданного товара по годам.)
    void on_pushButton_Exit_clicked();
    void refreshTable();
private:
    Ui::MainWindow *ui;
    QString filename;
};
#endif // MAINWINDOW_H
