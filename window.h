//author: huangruixian
//data:2023.04.17
#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QEvent>
#include<iostream>
#include "label.h"
class window : public QWidget
{
    Q_OBJECT

public:
    window(QWidget *parent = nullptr);
    ~window();
     virtual bool event(QEvent *e) override;
private:
    Label *_label;
};
#endif // WINDOW_H
