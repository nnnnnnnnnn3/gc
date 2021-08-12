#include "projections_h/lateralboard.h"
#include <QKeyEvent>
#include <QLabel>
#include <QPainter>

LateralBoard::LateralBoard(QWidget *parent)
    : QFrame(parent)
{
    setFrameStyle(QFrame::Panel | QFrame::Sunken);
    setFocusPolicy(Qt::StrongFocus);
}
