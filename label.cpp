#include "label.h"
#include <QMouseEvent>
label::label(QWidget *parent)
    : QLabel{parent}
{
    setText("event handing");
    setBackgroundRole(QPalette::Dark);
    setAutoFillBackground(true);
}

bool label::event(QEvent *e)
{
    if(e->type()==QEvent::MouseMove)
    {
        qDebug()<<"move in "<<"label ::event";
        e->accept();
        return true;
    }
    return QWidget::event(e);
}
