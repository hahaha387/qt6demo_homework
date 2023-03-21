//author:2021051615215huangruixian
#ifndef SORTDIALOG_H
#define SORTDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class SortDialog; }
QT_END_NAMESPACE

class SortDialog : public QDialog
{
    Q_OBJECT

public:
    SortDialog(QWidget *parent = nullptr);
    ~SortDialog();
    void setColumnRange(QChar frist,QChar last);

private:
    Ui::SortDialog *ui;
};
//QTabWidget
//QListWidget
//QStackedWidget
#endif // SORTDIALOG_H
