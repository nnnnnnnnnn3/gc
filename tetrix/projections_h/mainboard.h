#ifndef MAINBOARD_H
#define MAINBOARD_H

#include <QBasicTimer>
#include <QFrame>
#include <QPointer>
#include "graphics_h/line.h"
#include "graphics_h/point.h"
#include "lateralboard.h"

QT_BEGIN_NAMESPACE
class QLabel;
QT_END_NAMESPACE

class MainBoard : public QFrame
{
    Q_OBJECT

public:
    MainBoard(QWidget *parent = nullptr);
    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;
    LateralBoard lateralBoard;
    Point p;
public slots:
    void start();

signals:
    void levelChanged(int level);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    enum { BoardWidth = 50, BoardHeight = 52 };
    int squareWidth() { return 200; }
    int squareHeight() { return contentsRect().height() / BoardHeight; }
    void clearBoard();
    bool isStarted;

    int curX;
    int level;
};

#endif
