#ifndef FIGURA_H
#define FIGURA_H
#include <QPainter>
#include <cmath> // Для M_PI, если доступно, или используйте 3.14159265...

class Figura
{
public:
    int x, y, halflen;
    float angle; // Угол поворота для этой конкретной фигуры
    float speed; // Скорость вращения для этой конкретной фигуры
    virtual void draw(QPainter *Painter)=0;
    Figura(int X, int Y, int Halflen, float Speed):
        x(X), y(Y), halflen(Halflen), angle(0.0f), speed(Speed) {}
    void move(float deltaTime = 1.0f); // Метод move теперь обновляет угол на основе скорости
    virtual ~Figura() {} // Необходим для полиморфного объекта
};

class MyLine:public Figura
{
public:
    void draw(QPainter *Painter);
public:
    MyLine(int x, int y, int halflen, float speed):Figura(x, y, halflen, speed){}
};

class MyRect:public Figura
{
public:
    void draw(QPainter *Painter);
public:
    MyRect(int x, int y, int halflen, float speed):Figura(x, y, halflen, speed){}
};

class MyOctagon:public Figura
{
public:
    void draw(QPainter *Painter);
public:
    MyOctagon(int x, int y, int halflen, float speed):Figura(x, y, halflen, speed){}
};

#endif // FIGURA_H
