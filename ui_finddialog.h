/********************************************************************************
** Form generated from reading UI file 'finddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Finddialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardCheckBox;
    QVBoxLayout *verticalLayout;
    QPushButton *findButton;
    QPushButton *closeButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Finddialog)
    {
        if (Finddialog->objectName().isEmpty())
            Finddialog->setObjectName(QString::fromUtf8("Finddialog"));
        Finddialog->resize(415, 144);
        horizontalLayout_2 = new QHBoxLayout(Finddialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Finddialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Finddialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        caseCheckBox = new QCheckBox(Finddialog);
        caseCheckBox->setObjectName(QString::fromUtf8("caseCheckBox"));

        verticalLayout_2->addWidget(caseCheckBox);

        backwardCheckBox = new QCheckBox(Finddialog);
        backwardCheckBox->setObjectName(QString::fromUtf8("backwardCheckBox"));

        verticalLayout_2->addWidget(backwardCheckBox);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        findButton = new QPushButton(Finddialog);
        findButton->setObjectName(QString::fromUtf8("findButton"));

        verticalLayout->addWidget(findButton);

        closeButton = new QPushButton(Finddialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        verticalLayout->addWidget(closeButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        QWidget::setTabOrder(lineEdit, backwardCheckBox);
        QWidget::setTabOrder(backwardCheckBox, caseCheckBox);
        QWidget::setTabOrder(caseCheckBox, findButton);
        QWidget::setTabOrder(findButton, closeButton);

        retranslateUi(Finddialog);

        QMetaObject::connectSlotsByName(Finddialog);
    } // setupUi

    void retranslateUi(QDialog *Finddialog)
    {
        Finddialog->setWindowTitle(QCoreApplication::translate("Finddialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Finddialog", "Find what:", nullptr));
        caseCheckBox->setText(QCoreApplication::translate("Finddialog", "Math case", nullptr));
        backwardCheckBox->setText(QCoreApplication::translate("Finddialog", "Search backward", nullptr));
        findButton->setText(QCoreApplication::translate("Finddialog", "Find", nullptr));
        closeButton->setText(QCoreApplication::translate("Finddialog", "CLose", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Finddialog: public Ui_Finddialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H
