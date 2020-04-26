/********************************************************************************
** Form generated from reading UI file 'seeform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEEFORM_H
#define UI_SEEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_seeForm
{
public:
    QPushButton *chakanxinxi;
    QTextBrowser *xianshixinxi;
    QLabel *label;
    QPushButton *deletexinxi;
    QPushButton *clear;

    void setupUi(QWidget *seeForm)
    {
        if (seeForm->objectName().isEmpty())
            seeForm->setObjectName(QStringLiteral("seeForm"));
        seeForm->resize(1000, 800);
        QFont font;
        font.setPointSize(15);
        seeForm->setFont(font);
        chakanxinxi = new QPushButton(seeForm);
        chakanxinxi->setObjectName(QStringLiteral("chakanxinxi"));
        chakanxinxi->setGeometry(QRect(670, 0, 251, 71));
        xianshixinxi = new QTextBrowser(seeForm);
        xianshixinxi->setObjectName(QStringLiteral("xianshixinxi"));
        xianshixinxi->setGeometry(QRect(20, 80, 631, 371));
        xianshixinxi->setStyleSheet(QStringLiteral("QTextBrowser { background-color:rgb(255,132,139,0);border-radius:3px;color:rgb(0,0,0);}"));
        label = new QLabel(seeForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 1000, 800));
        label->setStyleSheet(QStringLiteral("background-image: url(:/image/chakan.jpg);"));
        deletexinxi = new QPushButton(seeForm);
        deletexinxi->setObjectName(QStringLiteral("deletexinxi"));
        deletexinxi->setGeometry(QRect(670, 80, 251, 71));
        clear = new QPushButton(seeForm);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(10, 653, 151, 51));
        label->raise();
        chakanxinxi->raise();
        xianshixinxi->raise();
        deletexinxi->raise();
        clear->raise();

        retranslateUi(seeForm);

        QMetaObject::connectSlotsByName(seeForm);
    } // setupUi

    void retranslateUi(QWidget *seeForm)
    {
        seeForm->setWindowTitle(QApplication::translate("seeForm", "Form", 0));
        chakanxinxi->setText(QApplication::translate("seeForm", "\346\237\245\347\234\213\345\215\241\347\232\204\344\277\241\346\201\257", 0));
        label->setText(QString());
        deletexinxi->setText(QApplication::translate("seeForm", "\345\210\240\351\231\244\344\277\241\346\201\257", 0));
        clear->setText(QApplication::translate("seeForm", "\346\270\205\347\251\272\346\266\210\346\201\257", 0));
    } // retranslateUi

};

namespace Ui {
    class seeForm: public Ui_seeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEEFORM_H
