#include "./ui_finddialog.h"
#include <QApplication>
#include <QDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc,argv);

    Ui::Finddialog ui;
    QDialog *finddialog=new QDialog;
    ui.setupUi(finddialog);
    finddialog->show();
    return a.exec();
}
