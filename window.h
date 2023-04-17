#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class window : public QWidget
{
    Q_OBJECT

public:
    window(QWidget *parent = nullptr);
    ~window();
private:
};
#endif // WINDOW_H
