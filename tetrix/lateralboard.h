#ifndef LATERALBOARD_H
#define LATERALBOARD_H

#include <QBasicTimer>
#include <QFrame>
#include <QPointer>
#include "line.h"

QT_BEGIN_NAMESPACE
class QLabel;
QT_END_NAMESPACE

class LateralBoard : public QFrame
{
    Q_OBJECT

public:
    LateralBoard(QWidget *parent = nullptr);

signals:
    void levelChanged(int level);
private:

};

#endif
