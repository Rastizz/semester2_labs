#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addform.h"
#include "findform.h"
#include "contactList.h"

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
    ContactList mylist;

private slots:

    void on_pushButton_Add_clicked();

    void on_pushButton_Find_clicked();

private:
    Ui::MainWindow *ui;
    AddForm add;
    FindForm find;
};
#endif // MAINWINDOW_H
