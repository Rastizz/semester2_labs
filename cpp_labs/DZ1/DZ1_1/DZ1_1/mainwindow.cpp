#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit->setFocus();
    connect(ui->pushButton_C, &QPushButton::clicked,
            this, &MainWindow::clearAll);
    connect(ui->pushButton_plus,  &QPushButton::clicked,
            this, &MainWindow::handleOpButton);
    connect(ui->pushButton_minus, &QPushButton::clicked,
            this, &MainWindow::handleOpButton);
    connect(ui->pushButton_mul,   &QPushButton::clicked,
            this, &MainWindow::handleOpButton);
    connect(ui->pushButton_div,   &QPushButton::clicked,
            this, &MainWindow::handleOpButton);
    connect(ui->pushButton_eq,    &QPushButton::clicked,
            this, &MainWindow::handleOpButton);
    connect(ui->pushButton_exit, &QPushButton::clicked,
            this, &QWidget::close);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clearAll()
{
    res  = 0.0;
    oper = '@';
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();
}

void MainWindow::handleOpButton()
{
    auto *btn = qobject_cast<QPushButton*>(sender());
    if (!btn)
        return;

    double x = ui->lineEdit->text().toDouble();

    if (oper == '+')      res += x;
    else if (oper == '-') res -= x;
    else if (oper == '*') res *= x;
    else if (oper == '/') res /= x;
    else                  res  = x;

    oper = btn->text().at(0);

    if (oper == '=') {
        ui->lineEdit->setText(QString::number(res));
    } else {
        ui->lineEdit->clear();
    }

    ui->lineEdit->setFocus();
}
