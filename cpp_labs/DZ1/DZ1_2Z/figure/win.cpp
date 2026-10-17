#include "win.h"
#include <QVBoxLayout>
#include <QMessageBox>
#include<QValidator>
Win::Win(QWidget *parent):QWidget(parent)
{
    setWindowTitle("Возведение в квадрат");
    frame = new QFrame(this);
    frame -> setFrameShadow(QFrame::Raised);
    frame -> setFrameShape(QFrame::Panel);
    inputLabel =
        new QLabel("Введите число:",this);
    inputEdit = new QLineEdit("",this);
    StrValidator *v=new StrValidator(inputEdit);
    inputEdit -> setValidator(v);
    outputLabel =
        new QLabel("Результат:",this);
    outputEdit = new QLineEdit("",this);
    nextButton =
        new QPushButton("Следующее",this);
    exitButton =
        new QPushButton("Выход",this);
    QVBoxLayout *vLayout1 = new QVBoxLayout(frame);
    vLayout1->addWidget(inputLabel);
    vLayout1->addWidget(inputEdit);
    vLayout1->addWidget(outputLabel);
    vLayout1->addWidget(outputEdit);
    vLayout1->addStretch();

    QVBoxLayout *vLayout2 = new QVBoxLayout();
    vLayout2->addWidget(nextButton);
    vLayout2->addWidget(exitButton);
    vLayout2->addStretch();

    QHBoxLayout *hLayout = new QHBoxLayout(this);
    hLayout->addWidget(frame);
    hLayout->addLayout(vLayout2);
    begin();
    connect(exitButton,SIGNAL(clicked(bool)),
            this,SLOT(close()));
         // связь нажатия кнопки Следующее и инициализации интерфейса
    connect(nextButton,SIGNAL(clicked(bool)),
            this,SLOT(begin()));
         // связь нажатия клавиши Enter и вычислений
    connect(inputEdit,SIGNAL(returnPressed()),
            this,SLOT(calc()));
}
void Win::begin()
{
    inputEdit->clear();             // очистка строки ввода
    nextButton->setEnabled(false);  // деактивация кнопки Следующее
    nextButton->setDefault(false);   // отмена активации кнопки
        // Следующее при нажатии Enter
    inputEdit->setEnabled(true);     // активация строки ввода
    outputLabel->setVisible(false);  // сокрытие метки результата
    outputEdit->setVisible(false);   // сокрытие строки результата
    inputEdit->setFocus();        // установка фокуса на строку ввода
}
void Win::calc()
{
    bool Ok=true;
    float r,a;
    QString str=inputEdit->text(); // копирование введенной строки
    a=str.toDouble(&Ok);           // преобразование строки в число
    if (Ok)                        // если преобразование успешно, то
    {
        r=a*a;                    // возводим число в квадрат
        str.setNum(r);            // преобразуем число в строку
        outputEdit->setText(str); // заносим результат в окно результата
        inputEdit->setEnabled(false); // деактивируем окно ввода
        outputEdit->setEnabled(false); // деактивируем окно вывода
        outputLabel->setVisible(true); // показываем метку результата
        outputEdit->setVisible(true);   // показываем окно результата
        nextButton->setDefault(true);  // назначаем Следующее кнопкой
            // активируемой по нажатию клавиши Enter
        nextButton->setFocus();   // устанавливаем фокус и активируем
        nextButton->setEnabled(false); // кнопку Следующее
    }
    else
        if (!str.isEmpty())
        {
            QMessageBox msgBox(QMessageBox::Information,
                               "Возведение в квадрат.",
                               "Введено неверное значение.",
                               QMessageBox::Ok);
            msgBox.exec();
        }
}
