#include <QApplication>
#include <QLabel>
#include <memory>
int main(int argc ,char*argv[])
{
	QApplication app(argc,argv);
    auto label=std::make_shared<QLabel>("hello QT!");
    //QLabel *label=new QLabel("hello QT!");
	label->show();
	return app.exec();
}
