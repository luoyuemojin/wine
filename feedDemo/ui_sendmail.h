/********************************************************************************
** Form generated from reading UI file 'sendmail.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMAIL_H
#define UI_SENDMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sendmail
{
public:

    void setupUi(QWidget *sendmail)
    {
        if (sendmail->objectName().isEmpty())
            sendmail->setObjectName(QStringLiteral("sendmail"));
        sendmail->resize(400, 300);

        retranslateUi(sendmail);

        QMetaObject::connectSlotsByName(sendmail);
    } // setupUi

    void retranslateUi(QWidget *sendmail)
    {
        sendmail->setWindowTitle(QApplication::translate("sendmail", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class sendmail: public Ui_sendmail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMAIL_H
