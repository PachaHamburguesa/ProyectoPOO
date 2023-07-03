#include "placereslabel.h"

PlaceresLabel::PlaceresLabel(QWidget *parent) : QLabel(parent)
{

}

void PlaceresLabel::mouseMoveEvent(QMouseEvent *ev)
{
    this->x = ev->x();
    this->y = ev->y();
    emit Mouse_Pos();
}

void PlaceresLabel::leaveEvent(QEvent *)
{
    emit Mouse_Left();
}
