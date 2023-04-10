#ifndef LABEL_H
#define LABEL_H

#include <QLabel>

class label : public QLabel
{
    Q_OBJECT
public:
    explicit label(QWidget *parent = nullptr);
    //virtual bool event(QEvent *e) override;
signals:

};

#endif // LABEL_H
