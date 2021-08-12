#ifndef POINT_H
#define POINT_H
#include <QPainter>
#include <QWidget>
#include <QPaintEvent>
class Point
{
public:
    void putPixel(QPainter &painter,  int x, int y)
        {
            painter.setPen(QPen(Qt::black, 1, Qt::DashDotLine, Qt::RoundCap));
            painter.drawPoint(x, y);
        }
};
#endif
