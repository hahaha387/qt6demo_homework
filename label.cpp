//author: huangruixian
//data:2023.04.17
#include "label.h"

Label::Label(QWidget *parent)
    : QLabel{parent}
{
    setBackgroundRole(QPalette::Dark);
    setAutoFillBackground(true);

    _button=new Button{this};
    _button->setText("label's frist child");
    _button->setGeometry(0,0,200,200);


}
bool Label::event(QEvent *e)
{
    if(e->type()==QEvent::MouseButtonDblClick)
    {
        this->mouseDoubleClickEvent((QMouseEvent*)e);
        return true;
    }
    return QWidget::event(e);
}

void Label::mouseDoubleClickEvent(QMouseEvent *e)
{
    qDebug()<<"DoubleClick in"<<"Label::event."<<"windows's child"<<"Second";
    e->ignore();
}
