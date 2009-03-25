/********************************************************************************
** Form generated from reading ui file 'attackwindow.ui'
**
** Created: Mon Mar 16 19:49:51 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ATTACKWINDOW_H
#define UI_ATTACKWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AttackWindowClass
{
public:
    QCheckBox *checkBox;
    QPushButton *pushButton;

    void setupUi(QWidget *AttackWindowClass)
    {
        if (AttackWindowClass->objectName().isEmpty())
            AttackWindowClass->setObjectName(QString::fromUtf8("AttackWindowClass"));
        AttackWindowClass->resize(600, 400);
        checkBox = new QCheckBox(AttackWindowClass);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(90, 280, 72, 18));
        pushButton = new QPushButton(AttackWindowClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 320, 75, 23));
        pushButton->setCheckable(true);
        pushButton->setAutoDefault(true);

        retranslateUi(AttackWindowClass);

        QMetaObject::connectSlotsByName(AttackWindowClass);
    } // setupUi

    void retranslateUi(QWidget *AttackWindowClass)
    {
        AttackWindowClass->setWindowTitle(QApplication::translate("AttackWindowClass", "AttackWindow", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("AttackWindowClass", "CheckBox", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AttackWindowClass", "Close", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AttackWindowClass);
    } // retranslateUi

};

namespace Ui {
    class AttackWindowClass: public Ui_AttackWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTACKWINDOW_H
