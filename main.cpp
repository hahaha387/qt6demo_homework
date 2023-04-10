#include "window.h"
#include <QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    window w;
    //auto labelA=new QLabel{"hahaha",&w};
    //都是顶层window的孩子
    //label *labelB=new label{};
    //labelB->setParent(&w);

    w.show();
    return a.exec();
}
