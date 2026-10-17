#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "sortablestackcontainer.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pushButtonPushInt_clicked();
    void on_pushButtonPushChar_clicked();
    void on_pushButtonPop_clicked();
    void on_pushButtonPrint_clicked();
    void on_pushButtonSortInts_clicked();
    void on_pushButtonSortChars_clicked();
private:
    Ui::MainWindow *ui;
    SortableStackContainer stack;
};
#endif
