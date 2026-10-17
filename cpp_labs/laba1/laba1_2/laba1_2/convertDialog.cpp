#include <QVBoxLayout>
#include <QHBoxLayout>
#include "convertDialog.h"

ConvertDialog::ConvertDialog(QWidget *parent)
    : QDialog(parent),
    m_bToUpper(true)
{
    setWindowTitle("ex4");
    resize(380, 340);

    // ── Виджеты ──────────────────────────────────────────────────────────────
    m_pInput   = new QLineEdit(this);
    m_pInput->setPlaceholderText("Введите строку и нажмите Enter...");

    m_pConvert = new QPushButton("Convert", this);

    m_pOutput  = new QTextEdit(this);
    m_pOutput->setReadOnly(true);

    // ── Компоновка ───────────────────────────────────────────────────────────
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->setContentsMargins(8, 8, 8, 8);
    mainLayout->setSpacing(6);

    mainLayout->addWidget(m_pInput);
    mainLayout->addWidget(m_pConvert);
    mainLayout->addWidget(m_pOutput);

    setLayout(mainLayout);

    // ── Сигналы и слоты ──────────────────────────────────────────────────────
    // Реакция на завершение ввода (Enter или потеря фокуса)
    connect(m_pInput,   SIGNAL(editingFinished()),
            this,       SLOT(onEditingFinished()));

    // Реакция на нажатие кнопки
    connect(m_pConvert, SIGNAL(clicked()),
            this,       SLOT(onConvertClicked()));
}

// ─── Слоты ───────────────────────────────────────────────────────────────────

void ConvertDialog::onEditingFinished()
{
    QString text = m_pInput->text();
    // Добавляем пометку "input:" и отображаем в поле вывода
    m_pOutput->append("input: " + text);
}

void ConvertDialog::onConvertClicked()
{
    QString text = m_pInput->text();
    QString converted;

    if (m_bToUpper) {
        converted = text.toUpper();
        m_pOutput->append("ALL UPPER: " + converted);
    } else {
        converted = text.toLower();
        m_pOutput->append("all lower: " + converted);
    }

    // Переключаем направление для следующего нажатия
    m_bToUpper = !m_bToUpper;
}
