#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow), stack(100)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonPushInt_clicked()
{
    bool ok = false;
    int value = ui->lineEditInt->text().toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Ошибка", "Введите целое число");
        return;
    }
    try {
        stack.pushInt(value);
    } catch (const StackOverflowException &e) {
        QMessageBox::critical(this, "Исключение", e.what());
    }
}

void MainWindow::on_pushButtonPushChar_clicked()
{
    QString text = ui->lineEditChar->text();
    if (text.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Введите символ");
        return;
    }
    QChar ch = text.at(0);

    // Проверка: только буквы (a-z, A-Z)
    if (!ch.isLetter()) {
        QMessageBox::critical(this, "Исключение",
                              QString("Недопустимый символ '%1'. Введите только букву (a-z, A-Z)").arg(ch));
        return;
    }

    try {
        stack.pushChar(ch);
    } catch (const StackOverflowException &e) {
        QMessageBox::critical(this, "Исключение", e.what());
    }
}


void MainWindow::on_pushButtonPop_clicked()
{
    try {
        stack.pop();
    } catch (const StackEmptyException &e) {
        QMessageBox::critical(this, "Исключение", e.what());
    }
}

void MainWindow::on_pushButtonPrint_clicked()
{
    ui->textEditStack->setPlainText(stack.toString());
}

void MainWindow::on_pushButtonSortInts_clicked()
{
    stack.sortIntsAscending();
    ui->textEditStack->setPlainText(stack.toString());
}

void MainWindow::on_pushButtonSortChars_clicked()
{
    stack.sortCharsAlphabetically();
    ui->textEditStack->setPlainText(stack.toString());
}
