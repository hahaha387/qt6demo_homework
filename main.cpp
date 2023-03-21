<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
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
=======
#include "dbtool.h"
int main()
{
    vector<Grade> students;
    readGrades(students);
      for(int i=0;i<students.size();i++)
      {
          Grade g=students[i];
          cout<<g.getSno()<<" "<<g.getName()<<" "<<g.getMid()<<" "<<g.getFin()<<" "<<g.getHw()<<" "<<g.getFinal()<<endl;
      }
    DBtool dbtool("mydb","postgres","postgres");
    //menue
    while(1)
    {
        int flag;
        cout<<"There has some function to database: "<<endl;
        cout<<"1.插入所有数据 2.查询学生信息 3.删除学生信息 4.清空表 5.删除表 6.退出系统"<<endl;
        cout<<"Please select: ";
        cin>>flag;
        switch (flag) {
        case (1):dbtool.initalValuesToTable(students);
            break;
        case (2):dbtool.selectFromTable();
            break;
        case (3):dbtool.deleteOneFromTable();
            break;
        case (4):dbtool.deleteAllFromTable();
            break;
        case (5):dbtool.dropTable();
            break;
        case (6):flag==-1;
        default:
            break;
       }
        if(flag==-1)
            break;
    }
>>>>>>> df67281 (Grade With Postgresql)
=======
#include <QApplication>
#include <QPushButton>
#include <memory>
int main(int argc,char* argv[])
{
    QApplication app(argc,argv);
//	QPushButton* button=new QPushButton("Quit");
    std::unique_ptr<QPushButton> button(new QPushButton("Quit"));
//   QObject::connect(button,SIGNAL(clicked()),&app,SLOT(quit()));
    QObject::connect(button.get(),&QPushButton::clicked,
                     &app,&QApplication::quit);
    button->show();
    return app.exec();
<<<<<<< HEAD
>>>>>>> f17eab2 (Widget layout)
=======

>>>>>>> e1dc7a1 (Widget Quit)
=======
//author:huangruixian
#include "gotocelldialog.h"
=======
//author:2021051615215huangruixian
#include "sortdialog.h"
>>>>>>> 30ae219 (sortdialog)

=======
//author:huangruixian
>>>>>>> 5d72a0b (finddialog)
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
>>>>>>> 94b3ee7 (gotocelldialog)
}
