#include "imporbyproductdialog.h"
#include "ui_imporbyproductdialog.h"
#include <QMessageBox>

imporByProductDialog::imporByProductDialog(QWidget *parent, TradeDatabase* db)
    : QDialog(parent)
    , ui(new Ui::imporByProductDialog)
    , database(db)
{
    ui->setupUi(this);
}

imporByProductDialog::~imporByProductDialog()
{
    delete ui;
}

void imporByProductDialog::on_pushButton_findProduct_clicked()
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

    QList<Deal> imports = database->getImportsByProduct(product);

    if (imports.isEmpty()) {
        QMessageBox::information(this, "Результат", "Нет импорта товара '" + product + "'.");
        return;
    }

    QString result = "Страны, из которых импортируется '" + product + "':\n";
    for (const auto& deal : imports) {
        result += "- " + deal.country + " (объем: " + QString::number(deal.volume) + ")\n";
    }

    QMessageBox::information(this, "Результат", result);
}
