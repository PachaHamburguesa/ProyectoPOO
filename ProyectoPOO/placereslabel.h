#ifndef PLACERESLABEL_H
#define PLACERESLABEL_H

#include <QLabel>
#include <QMouseEvent>
#include <QDebug>

class PlaceresLabel : public QLabel
{
    Q_OBJECT
public:
    explicit PlaceresLabel(QWidget *parent = 0);
    void mouseMoveEvent(QMouseEvent *ev);
    void leaveEvent(QEvent *);
    int x, y;

signals:
    void Mouse_Pos();
    void Mouse_Left();

public slots:

};

#endif // PLACERESLABEL_H
