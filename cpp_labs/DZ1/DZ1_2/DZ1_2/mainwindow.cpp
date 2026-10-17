#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , add(nullptr, &mylist)
    , find(nullptr, &mylist)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Add_clicked()
{
    add.show();
}


void MainWindow::on_pushButton_Find_clicked()
{
    find.show();
}

