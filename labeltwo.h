//author: huangruixian
//data:2023.04.17
#ifndef LABELTWO_H
#define LABELTWO_H

#include <QWidget>
#include <QLabel>
#include <QEvent>
#include <QMouseEvent>
class LabelTwo : public QLabel
{
    Q_OBJECT
public:
    explicit LabelTwo(QWidget *parent = nullptr);
    virtual bool event(QEvent *e) override;
    virtual void mouseDoubleClickEvent(QMouseEvent *e) override;
signals:

};

#endif // LABELTWO_H
