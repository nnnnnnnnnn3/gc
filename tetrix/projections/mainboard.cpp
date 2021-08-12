#include "projections_h/mainboard.h"
#include "projections_h/lateralboard.h"
#include <QKeyEvent>
#include <QGridLayout>
#include <QLabel>
#include <QPainter>
#include <QFrame>
#include "graphics_h/line.h"
#include "graphics_h/point.h"

MainBoard::MainBoard(QWidget *parent)
    : QFrame(parent), isStarted(false)
{
    setFrameStyle(QFrame::Panel | QFrame::Sunken);
    setFocusPolicy(Qt::StrongFocus);
    clearBoard();

}

QSize MainBoard::sizeHint() const
{
    return QSize(100, 100);
}

QSize MainBoard::minimumSizeHint() const
{
    return QSize(BoardWidth * 5 + frameWidth() * 2,
                 BoardHeight * 5 + frameWidth() * 2);
}

void MainBoard::start()
{
    isStarted = true;
    clearBoard();
    emit levelChanged(1);

}

void MainBoard::paintEvent(QPaintEvent *event)
{
    QFrame::paintEvent(event);
    QPainter painter(this);

    p.putPixel(painter,100,100);
}


void MainBoard::clearBoard()
{

}
