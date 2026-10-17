#include "exportgraphdialog.h"
#include "ui_exportgraphdialog.h"

exportGraphDialog::exportGraphDialog(QWidget *parent, TradeDatabase* db)
    : QDialog(parent)
    , ui(new Ui::exportGraphDialog)
    , database(db)
{
    ui->setupUi(this);
}

exportGraphDialog::~exportGraphDialog()
{
    delete ui;
}

void exportGraphDialog::on_pushButton_clicked()
{
    QString product = ui->lineEdit->text().trimmed();
    if (product.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Введите наименование товара.");
        return;
    }

    if (!database) {
        QMessageBox::critical(this, "Ошибка", "База данных не передана.");
        return;
    }

    QMap<int, double> exportData = database->getExportVolumeByYear(product);

    if (exportData.isEmpty()) {
        QMessageBox::information(this, "Результат", "Нет данных об экспорте товара '" + product + "'.");
        return;
    }

    displayChart(exportData, product);
}

void exportGraphDialog::displayChart(const QMap<int, double>& data, const QString& product)
{
    // Очищаем старый график, если он был
    if (chartView) {
        delete chartView;
        chartView = nullptr;
    }

    // Создаём серию
    QBarSet *set = new QBarSet(product);
    QStringList categories;

    for (auto it = data.constBegin(); it != data.constEnd(); ++it) {
        categories << QString::number(it.key());
        *set << it.value();
    }

    QBarSeries *series = new QBarSeries();
    series->append(set);

    // Создаём график
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Экспорт '" + product + "' по годам");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Ось X
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    axisX->setTitleText("Год");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Ось Y
    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Объем");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Легенда
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);

    // Создаём ChartView
    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    ui->chartLayout_4->addWidget(chartView);
}
