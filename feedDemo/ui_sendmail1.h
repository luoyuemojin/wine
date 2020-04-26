/********************************************************************************
** Form generated from reading UI file 'sendmail1.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMAIL1_H
#define UI_SENDMAIL1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sendmail1
{
public:

    void setupUi(QWidget *sendmail1)
    {
        if (sendmail1->objectName().isEmpty())
            sendmail1->setObjectName(QStringLiteral("sendmail1"));
        sendmail1->resize(400, 300);

        retranslateUi(sendmail1);

        QMetaObject::connectSlotsByName(sendmail1);
    } // setupUi

    void retranslateUi(QWidget *sendmail1)
    {
        sendmail1->setWindowTitle(QApplication::translate("sendmail1", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class sendmail1: public Ui_sendmail1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMAIL1_H
