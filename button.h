#ifndef BUTTON_H
#define BUTTON_H

#include <QWidget>
#include <QPushButton>
#include <QEvent>
#include <QApplication>
#include <QMouseEvent>
#include <QTimer>
class Button : public QPushButton
{
    Q_OBJECT
public:
    explicit Button(QWidget *parent = nullptr);
    virtual bool event(QEvent*e) override;
    virtual void timerEvent(QTimerEvent *e) override;
private:
    void mouseClick();
    int _timerid;
signals:
};

#endif // BUTTON_H
