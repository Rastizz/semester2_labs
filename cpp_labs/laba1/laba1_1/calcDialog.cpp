#include "calcDialog.h"
#include <QVector>
#include <QGridLayout>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFont>

#define DIV 10
#define MUL 11
#define MINUS 12
#define PLUS 13
#define INVERSE 15
#define DOT 16
#define EQ 20
#define BKSP 30
#define CLR 31
#define CLR_ALL 32

#define GRID_KEYS 16

struct BtnDescr {
    QString text;
    int id;
    BtnDescr() { id = 0; }
    BtnDescr(const QString &str, int i) { text = str; id = i; }
};

QVector<BtnDescr> _btnDescr;

void InitBtnDescrArray()
{
    _btnDescr.push_back(BtnDescr("7", 7));
    _btnDescr.push_back(BtnDescr("8", 8));
    _btnDescr.push_back(BtnDescr("9", 9));
    _btnDescr.push_back(BtnDescr("/", DIV));
    _btnDescr.push_back(BtnDescr("4", 4));
    _btnDescr.push_back(BtnDescr("5", 5));
    _btnDescr.push_back(BtnDescr("6", 6));
    _btnDescr.push_back(BtnDescr("*", MUL));
    _btnDescr.push_back(BtnDescr("1", 1));
    _btnDescr.push_back(BtnDescr("2", 2));
    _btnDescr.push_back(BtnDescr("3", 3));
    _btnDescr.push_back(BtnDescr("-", MINUS));
    _btnDescr.push_back(BtnDescr("0", 0));
    _btnDescr.push_back(BtnDescr("-/+", INVERSE));
    _btnDescr.push_back(BtnDescr(".", DOT));
    _btnDescr.push_back(BtnDescr("+", PLUS));
    _btnDescr.push_back(BtnDescr("<-", BKSP));
    _btnDescr.push_back(BtnDescr("CE", CLR));
    _btnDescr.push_back(BtnDescr("C", CLR_ALL));
    _btnDescr.push_back(BtnDescr("=", EQ));
}

CalcDialog::CalcDialog(QWidget *parent)
    : QDialog(parent)
{
    initNum();
    InitBtnDescrArray();

    m_pLineEdit = new QLineEdit(this);
    m_pLineEdit->setReadOnly(true);

    QGridLayout *gridLayout = new QGridLayout();
    QHBoxLayout *bccKeysLayout = new QHBoxLayout();
    QHBoxLayout *mainKeysLayout = new QHBoxLayout();
    QVBoxLayout *dlgLayout = new QVBoxLayout();

    for (int i = 0; i < _btnDescr.size(); ++i) {
        QPushButton *button = new QPushButton(_btnDescr[i].text);

        if (i >= GRID_KEYS + 3 || i < GRID_KEYS)
            button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

        if (_btnDescr[i].id >= 10) {
            QFont fnt = button->font();
            fnt.setPointSize(fnt.pointSize() + 4);
            button->setFont(fnt);
        }

        button->setProperty("id", _btnDescr[i].id);

        connect(button, &QPushButton::clicked, this, [this, button]() {
            int id = button->property("id").toInt();
            clicked(id);
        });

        if (i < GRID_KEYS)
            gridLayout->addWidget(button, i / 4, i % 4);
        else if (i < GRID_KEYS + 3)
            bccKeysLayout->addWidget(button);
        else {
            mainKeysLayout->addLayout(gridLayout);
            mainKeysLayout->addWidget(button);
        }
    }

    dlgLayout->addWidget(m_pLineEdit);
    dlgLayout->addLayout(bccKeysLayout);
    dlgLayout->addLayout(mainKeysLayout);

    setLayout(dlgLayout);
    setNumEdit(0);
}

void CalcDialog::clicked(int id)
{
    switch (id) {
    case INVERSE:
        setNumEdit(getNumEdit() * -1.0);
        break;
    case DOT:
        checkOpPerf();
        {
            QString str = m_pLineEdit->text();
            str.append(".");
            bool ok = false;
            str.toDouble(&ok);
            if (ok) m_pLineEdit->setText(str);
        }
        break;
    case DIV:
    case MUL:
    case PLUS:
    case MINUS:
    case EQ:
        calcPrevOp(id);
        break;
    case CLR_ALL:
        initNum();
        [[fallthrough]];
    case CLR:
        setNumEdit(0);
        break;
    case BKSP:
        checkOpPerf();
        {
            QString str = m_pLineEdit->text();
            if (str.length()) {
                str.remove(str.length() - 1, 1);
                m_pLineEdit->setText(str);
            }
        }
        break;
    default:
        checkOpPerf();
        {
            QString sId = QString::number(id);
            QString str = m_pLineEdit->text();
            if (str == "0")
                str = sId;
            else
                str.append(sId);
            m_pLineEdit->setText(str);
        }
        break;
    }
}

double CalcDialog::getNumEdit()
{
    return m_pLineEdit->text().toDouble();
}

void CalcDialog::setNumEdit(double num)
{
    m_pLineEdit->setText(QString::number(num, 'g', 15));
}

void CalcDialog::calcPrevOp(int curOp)
{
    double num = getNumEdit();
    switch (m_Op) {
    case DIV:
        if (num != 0) m_Val /= num;
        else m_Val = 0;
        break;
    case MUL:
        m_Val *= num;
        break;
    case PLUS:
        m_Val += num;
        break;
    case MINUS:
        m_Val -= num;
        break;
    case EQ:
        m_Val = num;
        break;
    }
    m_Op = curOp;
    setNumEdit(m_Val);
    m_bPerf = true;
}

void CalcDialog::checkOpPerf()
{
    if (m_bPerf) {
        m_pLineEdit->clear();
        m_bPerf = false;
    }
}

void CalcDialog::initNum()
{
    m_bPerf = false;
    m_Val = 0;
    m_Op = EQ;
}
