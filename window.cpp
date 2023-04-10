#include "window.h"
#include <QMouseEvent>
#include <QPushButton>
window::window(QWidget *parent)
    : QWidget(parent)
{
    setGeometry(100,100,300,300);
    //_label=new label{this};
    //对象树
}

bool window::eventFilter(QObject *obj, QEvent *e)
{
    if(obj==this->findChild<QLabel*>("hehehe"))//hahaha
      {
          if(e->type() == QEvent::MouseButtonDblClick)//确认事件的类型
          {
              qDebug()<<"labelA hahaha move";
              e->accept();
              return true;
          }
      }
    if(obj ==this->findChild<QLabel*>("hehehe"))//hehehe
      {
          if(e->type() == QEvent::MouseButtonDblClick)//确认事件的类型
          {
              qDebug()<<"labelB hehehe move";
              e->accept();
              return true;
          }
      }
    if(obj==this)
    {
        if(e->type()==QEvent::MouseMove)
        {
            qDebug()<<"Window move";
            return true;
        }
    }
      return false;
}

/*bool window::event(QEvent *event)
{
    if(event->type()==QEvent::MouseMove)
    {
        qDebug()<<"move in "<<"window::event";
        event->accept();
    }
    return QWidget::event(event);
}
*/
window::~window()
{
}

