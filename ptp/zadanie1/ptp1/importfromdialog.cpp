#include "importfromdialog.h"
#include "ui_importfromdialog.h"
#include <QMessageBox>

importFromDialog::importFromDialog(QWidget *parent, TradeDatabase* db)
    : QDialog(parent)
    , ui(new Ui::importFromDialog)
    , database(db)
{
    ui->setupUi(this);
}

importFromDialog::~importFromDialog()
{
    delete ui;
}

void importFromDialog::on_pushButton_findCountry_clicked()
{
    QString country = ui->lineEdit->text().trimmed();
    if (country.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Введите название страны.");
        return;
    }

    if (!database) {
        QMessageBox::critical(this, "Ошибка", "База данных не передана.");
        return;
    }

    int totalVolume = 0;
    QList<Deal> imports = database->getImportsByCountry(country, totalVolume);

    if (imports.isEmpty()) {
        QMessageBox::information(this, "Результат", "Нет импорта из страны '" + country + "'.");
        return;
    }

    QString result = "Товары, импортируемые из '" + country + "':\n";
    for (const auto& deal : imports) {
        result += "- " + deal.productName + " (" + QString::number(deal.volume) + ")\n";
    }
    result += "\nОбщий объем: " + QString::number(totalVolume);

    QMessageBox::information(this, "Результат", result);
}
