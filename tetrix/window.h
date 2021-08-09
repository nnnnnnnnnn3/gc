#ifndef WINDOW_H
#define WINDOW_H
#include <QWidget>

QT_BEGIN_NAMESPACE
class QLCDNumber;
class QLabel;
class QPushButton;
QT_END_NAMESPACE

class MainBoard;

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);

private:
    QLabel *createLabel(const QString &text);
    MainBoard *board;
    QLCDNumber *levelLcd;
    QPushButton *startButton;
    QPushButton *quitButton;
};

#endif
