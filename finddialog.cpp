//author:HuangRuiXian
//data:2023.3.4
#include "finddialog.h"

FindDialog::FindDialog(QWidget *parent)
    : QDialog(parent)
{
    auto label=new QLabel ("Find &what:",this);
    auto lineEdit=new QLineEdit("",this);
    label->setBuddy(lineEdit);

    auto caseCheckBox=new QCheckBox("Match &case",this);
    auto backwardCheckBox=new QCheckBox("Search &backward",this);

    auto findButton=new QPushButton("Find",this);
    findButton->setDefault(true);
    findButton->setEnabled(false);

    auto closeButton=new QPushButton("Close",this);
    connect(lineEdit,&QLineEdit::textChanged,
                     this,&FindDialog::enabledFindButton);
    connect(findButton,&QPushButton::clicked,
                     this,&FindDialog::findClicked);
    connect(closeButton,&QPushButton::clicked,
                     this,&FindDialog::close);

    QHBoxLayout *topLeftLayout =new QHBoxLayout;
    topLeftLayout->addWidget(label);
    topLeftLayout->addWidget(lineEdit);

    QVBoxLayout *leftLayout=new QVBoxLayout;
    leftLayout->addLayout(topLeftLayout);
    leftLayout->addWidget(caseCheckBox);
    leftLayout->addWidget(backwardCheckBox);

    QVBoxLayout *rightLayout=new QVBoxLayout;
    rightLayout->addWidget(findButton);
    rightLayout->addWidget(closeButton);
    rightLayout->addStretch();

    QHBoxLayout *mainLayout=new QHBoxLayout;
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);
    setLayout(mainLayout);

    setWindowTitle(tr("Find"));
    setFixedHeight(sizeHint().height());
}

FindDialog::~FindDialog()
{
}

void FindDialog::findClicked()
{
    QString text=this->findChild<QLineEdit*>("")->text();
    auto checkBoxList=this->findChildren<QCheckBox*>();
    Qt::CaseSensitivity cs=checkBoxList[0]->isChecked()?Qt::CaseSensitive:Qt::CaseInsensitive;
    if(checkBoxList[1]->isChecked())
    {
        emit findPrevious(text,cs);
    }
    else
    {
        emit findNext(text,cs);
    }
}

void FindDialog::enabledFindButton(const QString &text)
{
    auto buttonList=this->findChildren<QPushButton*>();
    buttonList[0]->setEnabled(!text.isEmpty());
}
