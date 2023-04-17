#include "window.h"

window::window(QWidget *parent)
    : QWidget(parent)
{
    setGeometry(400,300,100,90);
}

window::~window()
{
}

