#ifndef LABEL_H
#define LABEL_H

#include <QWidget>
#include <QLabel>
class Label : public QLabel
{
    Q_OBJECT
public:
    explicit Label(QWidget *parent = nullptr);

signals:

};

#endif // LABEL_H
