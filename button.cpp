#include "button.h"

Button::Button(QWidget *parent)
    : QPushButton{parent}
{
    setGeometry(10,50,80,30);
}

bool Button::event(QEvent *e)
{
    if(e->type()==QEvent::MouseButtonPress)
    {
        _timerid = startTimer(300);
    }
    if(e->type()==QEvent::MouseButtonRelease)
    {
        if(_timerid!=0)
        {
            killTimer(_timerid);
            mouseClick();
            qDebug()<<"cilick success";
        }
        else
            ;
    }
    return QWidget::event(e);

}

void Button::timerEvent(QTimerEvent *e)
{
    killTimer(_timerid);
    _timerid=0;
}

void Button::mouseClick()
{
    QApplication::quit();
}
