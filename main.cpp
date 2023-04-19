#include <QApplication>
#include <QDialog>

#include "ui_finddialog.h"
int main(int argc,char *argv[])
{
    QApplication a(argc,argv);
    
    Ui::Finddialog ui;
    QDialog *finddialog=new QDialog;
    ui.setupUi(finddialog);
    finddialog->show();
    return a.exec();
}
