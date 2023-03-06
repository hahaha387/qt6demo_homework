//author:huangruixian
#include <QApplication>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QObject>
#include <QCheckBox>
#include <QWidget>
#include <memory>
#include <QHBoxLayout>
#include <QVBoxLayout>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //window
    auto window=std::make_shared<QWidget>();
    window->setWindowTitle("Find");
    //search label
    auto label=std::make_shared<QLabel>("Find&What:");
    auto lineEdit=std::make_shared<QLineEdit>("Walter");
    label->setBuddy(lineEdit.get());
    //box
    auto backwarfdCheckBox=std::make_shared<QCheckBox>("Match&case");
    auto caseChrckBOx=std::make_shared<QCheckBox>("Search&backward");
    //button
    auto findButton=std::make_shared<QPushButton>("Find");
    auto closeButton=std::make_shared<QPushButton>("Close");
    findButton->setDefault(true);
    findButton->setEnabled(false);
    //layout topleft
    auto topLeftLayout=std::make_shared<QHBoxLayout>();
    topLeftLayout->addWidget(label.get());
    topLeftLayout->addWidget(lineEdit.get());
    //layout left
    auto leftLayout=std::make_shared<QVBoxLayout>();
    leftLayout->addLayout(topLeftLayout.get());
    leftLayout->addWidget(backwarfdCheckBox.get());
    leftLayout->addWidget(caseChrckBOx.get());
    //layout right
    auto rightLayout=std::make_shared<QVBoxLayout>();
    rightLayout->addWidget(findButton.get());
    rightLayout->addWidget(closeButton.get());
    rightLayout->addStretch();
    //add layout together
    auto mainLayout=std::make_shared<QHBoxLayout>();
    mainLayout->addLayout(leftLayout.get());
    mainLayout->addLayout(rightLayout.get());
    //Signal and Slot
    //QObject::connect(lineEdit.get(),&QLineEdit::textChanged,findButton.get(),&QPushButton::setEnabled);
    //QObject::connect(lineEdit.get(),SIGNAL(textChanged(const Qstring&)),findButton.get(),SLOT(setEnabled(true)));
    /*
    //search and case
    QObject::connect(backwarfdCheckBox.get(),&QCheckBox::ischecked,findButton.get(),&QPushButton::setEnabled);
    QObject::connect(caseChrckBOx.get(),&QPushButton::clicked,findButton.get(),&QPushButton::setEnabled);

    QObject::connect(findButton.get(),&QPushButton::clicked,findButton.get(),&QPushButton::setEnabled);
    //close window
    */
    QObject::connect(closeButton.get(),&QPushButton::clicked,
                     window.get(),&QWidget::close);
    window->setLayout(mainLayout.get());
    window->show();
    return a.exec();
}
