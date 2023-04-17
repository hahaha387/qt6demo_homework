//author: huangruixian
//data:2023.04.17
#include "window.h"
window::window(QWidget *parent)
    : QWidget(parent)
{
    setGeometry(50,50,400,400);
    _label=new Label{this};
    _label->setGeometry(0,0,300,300);
    _label->setText("window's frist child");
    //_label为window对象树的孩子对象
}

window::~window()
{
}

bool window::event(QEvent *e)
{
    //在事件转发给处理函数之前就进行处理
    if(e->type()==QEvent::MouseButtonDblClick)
    {
        qDebug()<<"DoubleClick in"<<"window::event."<<"Frist";
        e->accept();
        //表示事件已处理
    }
    return QWidget::event(e);
    //传给该对象的父对象进行处理没有则抛弃这些事件
}

