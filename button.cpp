//author: huangruixian
//data:2023.04.17
#include "button.h"

Button::Button(QWidget *parent)
    : QPushButton{parent}
{
    setBackgroundRole(QPalette::Dark);
    setAutoFillBackground(true);

    _labeltwo=new LabelTwo{this};
    _labeltwo->setText("button's frist child");
    _labeltwo->setGeometry(0,0,100,100);
}

bool Button::event(QEvent *e)
{
    if(e->type()==QEvent::MouseButtonDblClick)
    {
        this->mouseDoubleClickEvent((QMouseEvent*)e);
        return true;
    }
    return QWidget::event(e);
}

void Button::mouseDoubleClickEvent(QMouseEvent *e)
{
    qDebug()<<"DoubleClick in"<<"button::event."<<"label's child"<<"Third";
    e->ignore();
}
