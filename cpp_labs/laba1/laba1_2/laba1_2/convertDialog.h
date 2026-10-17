#ifndef CONVERTDIALOG_H
#define CONVERTDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>

/// Диалог ввода строки с преобразованием регистра (задание 5.2)
class ConvertDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConvertDialog(QWidget *parent = nullptr);

private slots:
    /// Реакция на завершение ввода (сигнал editingFinished)
    void onEditingFinished();

    /// Реакция на нажатие кнопки Convert (сигнал clicked)
    void onConvertClicked();

private:
    QLineEdit   *m_pInput;      ///< Строка ввода
    QPushButton *m_pConvert;    ///< Кнопка преобразования
    QTextEdit   *m_pOutput;     ///< Поле вывода (только чтение)

    bool m_bToUpper;            ///< true — следующий Convert делает UPPER
};

#endif // CONVERTDIALOG_H
