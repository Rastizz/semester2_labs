#ifndef ADDFORM_H
#define ADDFORM_H

#include <QWidget>
#include "contactList.h"

namespace Ui {
class AddForm;
}

class AddForm : public QWidget
{
    Q_OBJECT

public:
    explicit AddForm(QWidget *parent = nullptr, ContactList* list = nullptr);
    ~AddForm();

private slots:
    void on_pushButton_Exit_clicked();

    void on_pushButton_Add_clicked();

private:
    Ui::AddForm *ui;
    ContactList* mylist;
};

#endif // ADDFORM_H
