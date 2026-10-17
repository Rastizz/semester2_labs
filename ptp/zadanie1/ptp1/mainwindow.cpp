#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHeaderView>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_AddDeal_clicked() {
    addDealDialog add(this, mydatabase);
    if (add.exec() == QDialog::Accepted) {
        refreshTable();
    }
}

void MainWindow::on_pushButton_DeleteDeal_clicked() {
    deleteDealDialog del(this, mydatabase);
    if (del.exec() == QDialog::Accepted) {
        refreshTable();
    }
}
void MainWindow::on_pushButton_Browse_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Выберите файл базы данных",QDir::homePath(),"База данных (*.txt *.csv *.db);;Все файлы (*.*)"
        );

    if (fileName.isEmpty())
        return;
    ui->lineEdit_path->setText(fileName);
    mydatabase.setFileName(fileName);
    this->filename = fileName;
    mydatabase.loadFromFile();   // сначала загружаем данные
    refreshTable();
}
void MainWindow:: on_pushButton_Exit_clicked(){
    this->close();
}

void MainWindow:: on_pushButton_ImportFrom_clicked(){
    importFromDialog dialog(this, &mydatabase);
    dialog.exec();
}
void MainWindow::on_pushButton_BestExporter_clicked()
{
    QString topCountry = mydatabase.getTopExportCountry();
    if (topCountry.isEmpty()) {
        QMessageBox::information(this, "Результат", "Нет данных об экспорте.");
        return;
    }
    QMessageBox::information(this, "Результат", "Страна с наибольшим экспортом: " + topCountry);
}
void MainWindow:: on_pushButton_ImporByProduct_clicked(){
    imporByProductDialog dialog(this, &mydatabase);
    dialog.exec();
}
void MainWindow:: on_pushButton_ExportGraph_clicked(){
    exportGraphDialog dialog(this, &mydatabase);
    dialog.exec();
}

void MainWindow::refreshTable()
{
    int count = mydatabase.getSize();
    ui->tableWidget->setRowCount(count);
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()
                                               << "Наименование" << "Объем" << "Год" << "Страна" << "Направление");
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    for (int i = 0; i < count; ++i) {
        const Deal &d = mydatabase.getDeals(i);
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(d.productName));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(d.volume)));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(d.year)));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(d.country));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(d.direction));
    }
}
