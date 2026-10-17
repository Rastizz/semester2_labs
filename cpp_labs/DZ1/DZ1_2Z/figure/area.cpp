#include "area.h"
#include <QTimerEvent>
#include <QPainter> // Для использования QColor

Area::Area(QWidget *parent):QWidget(parent)
{
    setFixedSize(QSize(300,200));
    // Передаем координаты, размер и СКОРОСТЬ вращения
    myline = new MyLine(80, 100, 50, 0.02f);   // Скорость для линии
    myrect = new MyRect(220, 100, 50, -0.01f); // Скорость для квадрата (обратное направление)
    myoctagon = new MyOctagon(150, 170, 30, 0.015f); // Скорость для восьмиугольника
    alpha = 0; // Больше не используется для расчетов
}
void Area::showEvent(QShowEvent *)
{
    myTimer=startTimer(50);      // включаем таймер
}
void Area::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    // Устанавливаем стили для каждой фигуры индивидуально с помощью save/restore

    painter.save();
    painter.setPen(Qt::red);
    myline->move(1.0f); // Обновляем угол фигуры
    myline->draw(&painter); // И отрисовываем её
    painter.restore();

    painter.save();
    painter.setPen(Qt::green); // Пример другого цвета для квадрата
    myrect->move(1.0f);
    myrect->draw(&painter);
    painter.restore();

    painter.save();
    painter.setPen(Qt::blue); // Теперь восьмиугольник будет синим
    myoctagon->move(1.0f);
    myoctagon->draw(&painter);
    painter.restore();
}
void Area::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == myTimer)
    {
        // alpha += 0.2; // Удаляем, так как не используем глобальный alpha
        update();        // Вызываем перерисовку
    }
    else
        QWidget::timerEvent(event);
}
void Area::hideEvent(QHideEvent *)
{
    killTimer(myTimer);  // выключить таймер
}
Area::~Area()
{
    delete myline;
    delete myrect;
    delete myoctagon;
}
