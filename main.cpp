#include "window.h"
#include <QObject>
#include "label.h"
#include "button.h"
#include <QPushButton>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    window w;

    auto label=new Label{&w};
    label->setText("Hello Qt");

    auto button=new Button{&w};
    button->setText("Exit");

    QObject::connect(button,&QPushButton::clicked,&a,&QApplication::quit);
    w.show();
    return a.exec();
}
