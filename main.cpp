#include "window.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    window w;
    //auto labelA=new QLabel{"hahaha",&w};
    //都是顶层window的孩子
    //label *labelB=new label{};
    //labelB->setParent(&w);
    auto labelA=new QLabel{"hahaha",&w};
    auto pushButtonB=new QPushButton{"hehehe",&w};
    labelA->setBackgroundRole(QPalette::Dark);
    labelA->setAutoFillBackground(true);

    pushButtonB->setGeometry(50,50,100,100);
    pushButtonB->setBackgroundRole(QPalette::Dark);
    pushButtonB->setAutoFillBackground(true);


    labelA->installEventFilter(&w);
    pushButtonB->installEventFilter(&w);

    //labelA->installEventFilter(w);
    //labelB->installEventFilter(w);
    w.show();

     qDebug()<<"labelA hahaha move";
    return a.exec();
}
