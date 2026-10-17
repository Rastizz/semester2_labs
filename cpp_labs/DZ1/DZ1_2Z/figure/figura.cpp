#include "figura.h"
#include <QTransform> // Для преобразований
#include <QPolygonF>
void Figura::move(float deltaTime)
{
    angle += speed * deltaTime;
}

void MyLine::draw(QPainter *Painter)
{
    QTransform transform;
    transform.translate(x, y);
    transform.rotateRadians(angle);
    transform.translate(-x, -y);

    Painter->save();
    Painter->setTransform(transform, true);


    int half_len = halflen;
    Painter->drawLine(x - half_len, y, x + half_len, y);

    Painter->restore();
}


void MyRect::draw(QPainter *Painter)
{
    QTransform transform;
    transform.translate(x, y);
    transform.rotateRadians(angle);
    transform.translate(-x, -y);

    Painter->save();
    Painter->setTransform(transform, true);


    int half_len = halflen;
    QRect rect(x - half_len, y - half_len, 2 * half_len, 2 * half_len);
    Painter->drawRect(rect);

    Painter->restore();
}

void MyOctagon::draw(QPainter *Painter)
{
    const int numSides = 8;
    double angleStep = 2 * M_PI / numSides;
    QPolygonF polygon;
    polygon.reserve(numSides);
    for (int i = 0; i < numSides; ++i) {
        double localAngle = i * angleStep;

        QPointF point(
            static_cast<double>(halflen) * cos(localAngle),
            static_cast<double>(halflen) * sin(localAngle)
            );
        polygon.append(point);
    }
    QTransform transform;
    transform.translate(x, y);       // Перемещаем в центр фигуры
    transform.rotateRadians(angle);  // Поворачиваем на текущий угол
    Painter->save();
    Painter->setTransform(transform, true);
    Painter->drawPolygon(polygon);
    Painter->restore();
}
