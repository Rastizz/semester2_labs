#ifndef FINDFORM_H
#define FINDFORM_H

#include <QWidget>
#include "contactList.h"

namespace Ui {
class FindForm;
}

class FindForm : public QWidget
{
    Q_OBJECT

public:
    explicit FindForm(QWidget *parent = nullptr, ContactList* list = nullptr);
    ~FindForm();

private slots:
    void on_pushButton_Find_clicked();
    void on_pushButton_Delete_clicked();
private:
    Ui::FindForm *ui;
    ContactList *mylist;
    Contact *curr;
};

#endif // FINDFORM_H
