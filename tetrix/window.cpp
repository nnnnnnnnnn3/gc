#include "projections_h/mainboard.h"
#include "window.h"
#include <QCoreApplication>
#include <QGridLayout>
#include <QLabel>
#include <QLCDNumber>
#include <QPushButton>

Window::Window(QWidget *parent)
    : QWidget(parent), board(new MainBoard)
{
    levelLcd = new QLCDNumber(2);
    levelLcd->setSegmentStyle(QLCDNumber::Filled);

    startButton = new QPushButton(tr("&Start"));
    startButton->setFocusPolicy(Qt::NoFocus);
    quitButton = new QPushButton(tr("&Quit"));
    quitButton->setFocusPolicy(Qt::NoFocus);

    connect(startButton, &QPushButton::clicked, board, &MainBoard::start);
    connect(quitButton , &QPushButton::clicked, qApp, &QCoreApplication::quit);
#if __cplusplus >= 201402L

    connect(board, &MainBoard::levelChanged,
            levelLcd, qOverload<int>(&QLCDNumber::display));
#else
    connect(board, &MainBoard::levelChanged,
            levelLcd, QOverload<int>::of(&QLCDNumber::display));
#endif
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(createLabel(tr("LEVEL")), 2, 0);
    LateralBoard *lateralBoard = new LateralBoard;
    layout->addWidget(lateralBoard, 3, 6);
    layout->addWidget(levelLcd, 3, 0);
    layout->addWidget(startButton, 4, 0);
    layout->addWidget(board, 0, 1, 4, 4);
    layout->addWidget(quitButton, 5, 0);
    setLayout(layout);
    setWindowTitle(tr("Tetrix"));
    resize(50, 370);
}

QLabel *Window::createLabel(const QString &text)
{
    QLabel *label = new QLabel(text);


    label->setAlignment(Qt::AlignHCenter | Qt::AlignCenter);
    return label;
}

