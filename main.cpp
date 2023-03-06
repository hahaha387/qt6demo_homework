//author:huangruixian
#include <QLabel>
#include <QPushButton>
#include <QApplication>
#include <memory>
int main(int argc, char *argv[])
{
   QApplication app(argc,argv);

   auto window=std::make_unique<QWidget>();
   window->setGeometry(500,500,300,200);

   auto label=new QLabel("hello qt",window.get());
   label->setAlignment(Qt::AlignCenter);
   label->setGeometry(100,100,80,30);

   auto button=new QPushButton("Exit",window.get());
   button->setGeometry(300,300,200,60);

   QObject::connect(button,&QPushButton::clicked,&app,&QApplication::closeAllWindows);
   window->show();
   return app.exec();
}
