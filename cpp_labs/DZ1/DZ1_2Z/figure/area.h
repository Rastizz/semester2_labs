#ifndef AREA_H
#define AREA_H
#include "figura.h"
#include <QWidget>
#include <QTimer>

class Area : public QWidget
{
    int myTimer; // идентификатор таймера
    float alpha; // Не используется напрямую для расчета поворота фигур
public:
    Area(QWidget *parent = nullptr);
    ~Area();
    MyLine *myline;    // указатели на объекты фигур
    MyRect *myrect;
    MyOctagon *myoctagon; // <-- Убедитесь, что добавлено

protected:
           //	обработчики событий
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void showEvent(QShowEvent *event);
    void hideEvent(QHideEvent *event);
};
#endif // AREA_H
