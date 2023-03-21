//author:HuangRuiXian
//data:2023.3.4
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QCheckBox>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QString>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QApplication>

<<<<<<< HEAD
=======

>>>>>>> 5d72a0b (finddialog)
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class FindDialog : public QDialog
{
    Q_OBJECT

public:
    FindDialog(QWidget *parent = nullptr);
    ~FindDialog();
signals:
    void findNext(const QString &str,Qt::CaseSensitivity cs);
    void findPrevious(const QString &str,Qt::CaseSensitivity cs);

private slots:
    void findClicked();
    void enabledFindButton(const QString &text);
<<<<<<< HEAD
=======


>>>>>>> 5d72a0b (finddialog)
};
#endif // DIALOG_H
