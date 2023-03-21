//author:huangruixian
#include "gotocelldialog.h"

#include <QtGui>
#include <QRegularExpression>
GoToCellDialog::GoToCellDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GoToCellDialog)
{
    ui->setupUi(this);
    QRegularExpression regExp("[A-Za-z][1-9][0-9]{0,2}");
    ui->lineEdit->setValidator(new QRegularExpressionValidator(regExp));
    connect(ui->okButton,&QPushButton::clicked,this,&GoToCellDialog::accept);
    connect(ui->cancelButton,&QPushButton::clicked,this,&GoToCellDialog::reject);

}
void GoToCellDialog::on_lineEdit_textChanged()
{
    ui->okButton->setEnabled(ui->lineEdit->hasMouseTracking());
}

GoToCellDialog::~GoToCellDialog()
{
    delete ui;
}

