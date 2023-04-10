#include "window.h"
#include <QMouseEvent>
window::window(QWidget *parent)
    : QWidget(parent)
{
    setGeometry(100,100,300,300);
    _label=new label{this};
    //对象树
}

bool window::event(QEvent *event)
{
    if(event->type()==QEvent::MouseMove)
    {
        qDebug()<<"move in "<<"window::event";
        event->accept();
    }
    return QWidget::event(event);
}

window::~window()
{
}

