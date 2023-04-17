//author: huangruixian
//data:2023.04.17
#ifndef BUTTON_H
#define BUTTON_H

#include <QWidget>
#include <QPushButton>
#include <QEvent>
#include"labeltwo.h"
class Button : public QPushButton
{
    Q_OBJECT
public:
    explicit Button(QWidget *parent = nullptr);
    virtual bool event(QEvent *e) override;
    virtual void mouseDoubleClickEvent(QMouseEvent *e) override;
private:
    LabelTwo *_labeltwo;
signals:

};

#endif // BUTTON_H
