//author: huangruixian
//data:2023.04.17
#include "labeltwo.h"

LabelTwo::LabelTwo(QWidget *parent)
    : QLabel{parent}
{
    setBackgroundRole(QPalette::Dark);
    setAutoFillBackground(true);
}

bool LabelTwo::event(QEvent *e)
{
    if(e->type()==QEvent::MouseButtonDblClick)
    {
        this->mouseDoubleClickEvent((QMouseEvent*)e);
        return true;
    }
    return QWidget::event(e);
}

void LabelTwo::mouseDoubleClickEvent(QMouseEvent *e)
{
     qDebug()<<"DoubleClick in"<<"LabelTwo::event."<<"button's child"<<"Fourth";
     e->ignore();
}
