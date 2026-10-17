#ifndef CALCDIALOG_H
#define CALCDIALOG_H

#include <QDialog>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
class QPushButton;
QT_END_NAMESPACE

class CalcDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CalcDialog(QWidget *parent = nullptr);

protected:
    QLineEdit *m_pLineEdit;
    double m_Val;
    int m_Op;
    bool m_bPerf;

    void initNum();
    double getNumEdit();
    void setNumEdit(double num);
    void calcPrevOp(int curOp);
    void checkOpPerf();

private slots:
    void clicked(int id);

};

#endif // CALCDIALOG_H
