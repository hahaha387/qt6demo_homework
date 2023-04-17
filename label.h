//author: huangruixian
//data:2023.04.17
#ifndef LABEL_H
#define LABEL_H

#include <QWidget>
#include <QLabel>
#include <QEvent>
#include "button.h"
class Label : public QLabel
{
    Q_OBJECT
public:
    explicit Label(QWidget *parent = nullptr);
    virtual bool event(QEvent *e) override;
    virtual void mouseDoubleClickEvent(QMouseEvent *e) override;
private:
    Button *_button;
signals:

};

#endif // LABEL_H
