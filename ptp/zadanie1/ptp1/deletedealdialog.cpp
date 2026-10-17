#include "deletedealdialog.h"
#include "ui_deletedealdialog.h"


deleteDealDialog::deleteDealDialog(QWidget *parent, TradeDatabase &db)
    : QDialog(parent)
    , ui(new Ui::deleteDealDialog)
    , bd(&db)
{
    ui->setupUi(this);
}

deleteDealDialog::~deleteDealDialog()
{
    delete ui;
}

void deleteDealDialog::on_pushButton_Exit_clicked()
{
    reject();
}

void deleteDealDialog::on_pushButton_Del_clicked()
{
    QString productName = ui->lineEdit_ProductName_2->text().trimmed();
    QString volumeStr = ui->lineEdit_Volume_2->text().trimmed();
    QString yearStr = ui->spinBox_Year_2->text();
    QString country = ui->lineEdit_Country_2->text().trimmed();
    QString direction = ui->comboBox_Direction_2->currentText();

    QVector<int> toRemove;
    int count = bd->getSize();

    for (int i = 0; i < count; ++i) {
        const Deal &d = bd->getDeals(i);

        bool match = true;

        // Сравнение только заполненных полей
        if (!productName.isEmpty() && d.productName != productName)
            match = false;

        if (!volumeStr.isEmpty()) {
            bool ok = false;
            double v = volumeStr.toInt(&ok);
            if (!ok || qAbs(d.volume - v) > 1e-6)
                match = false;
        }

        if (!yearStr.isEmpty()) {
            bool ok = false;
            int y = yearStr.toInt(&ok);
            if (!ok || d.year != y)
                match = false;
        }

        if (!country.isEmpty() && d.country != country)
            match = false;

        if (!direction.isEmpty() && d.direction != direction)
            match = false;

        if (match) {
            toRemove.append(i);
        }
    }
    if (toRemove.isEmpty()) {
        QMessageBox::warning(this, "", "Сделок, соответствующих введенным данным, не найдено.");
        return;
    }
    for (int i = toRemove.size() - 1; i >= 0; --i) {
        int index = toRemove[i];
        Deal toDelete = bd->getDeals(index);
        bd->removeDeal(toDelete);
    }

    QMessageBox::information(this, "", QString("Удалено сделок: %1").arg(toRemove.size()));
    accept();
}
