#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QEvent>
#include <label.h>
class window : public QWidget
{
    Q_OBJECT

public:
    window(QWidget *parent = nullptr);
    //自己写事件过滤器
    virtual bool eventFilter(QObject *obj,QEvent *e) override;
    //virtual bool event(QEvent *event ) override;
    ~window();
    //label *_label;
};
#endif // WINDOW_H
