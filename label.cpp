#include "label.h"

Label::Label(QWidget *parent)
    : QLabel{parent}
{
    setAlignment(Qt::AlignCenter);
    setGeometry(10,10,80,30);
}
