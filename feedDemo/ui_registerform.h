/********************************************************************************
** Form generated from reading UI file 'registerform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERFORM_H
#define UI_REGISTERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerForm
{
public:
    QLabel *label;
    QLabel *label_12;
    QLabel *label_11;
    QLineEdit *uid;
    QLabel *label_16;
    QDateEdit *date;
    QPushButton *zhucexinxitijaio;
    QPushButton *onecard;
    QPushButton *pushButton_3;
    QLineEdit *number;
    QLabel *label_14;
    QLabel *label_2;
    QLineEdit *winelei;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *winevalue;
    QLabel *label_6;

    void setupUi(QWidget *registerForm)
    {
        if (registerForm->objectName().isEmpty())
            registerForm->setObjectName(QStringLiteral("registerForm"));
        registerForm->resize(1000, 800);
        registerForm->setStyleSheet(QStringLiteral(""));
        label = new QLabel(registerForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 0, 321, 61));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_12 = new QLabel(registerForm);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 130, 60, 30));
        label_12->setFont(font);
        label_11 = new QLabel(registerForm);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(12, 62, 105, 30));
        label_11->setFont(font);
        uid = new QLineEdit(registerForm);
        uid->setObjectName(QStringLiteral("uid"));
        uid->setGeometry(QRect(190, 60, 271, 31));
        uid->setMaximumSize(QSize(16777215, 40));
        QFont font1;
        font1.setPointSize(12);
        uid->setFont(font1);
        label_16 = new QLabel(registerForm);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 220, 120, 30));
        label_16->setFont(font);
        date = new QDateEdit(registerForm);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(190, 210, 187, 36));
        date->setFont(font);
        zhucexinxitijaio = new QPushButton(registerForm);
        zhucexinxitijaio->setObjectName(QStringLiteral("zhucexinxitijaio"));
        zhucexinxitijaio->setGeometry(QRect(10, 460, 112, 41));
        zhucexinxitijaio->setFont(font);
        onecard = new QPushButton(registerForm);
        onecard->setObjectName(QStringLiteral("onecard"));
        onecard->setGeometry(QRect(270, 460, 131, 41));
        onecard->setFont(font);
        pushButton_3 = new QPushButton(registerForm);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 460, 112, 41));
        pushButton_3->setFont(font);
        number = new QLineEdit(registerForm);
        number->setObjectName(QStringLiteral("number"));
        number->setGeometry(QRect(190, 270, 100, 50));
        number->setMaximumSize(QSize(100, 50));
        number->setFont(font1);
        label_14 = new QLabel(registerForm);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 280, 60, 30));
        label_14->setFont(font);
        label_2 = new QLabel(registerForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1000, 781));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/image/\346\263\250\345\206\214\344\277\241\346\201\257.jpg);"));
        winelei = new QLineEdit(registerForm);
        winelei->setObjectName(QStringLiteral("winelei"));
        winelei->setGeometry(QRect(190, 130, 151, 41));
        label_4 = new QLabel(registerForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(320, 277, 81, 41));
        QFont font2;
        font2.setPointSize(14);
        label_4->setFont(font2);
        label_5 = new QLabel(registerForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 340, 81, 51));
        label_5->setFont(font2);
        winevalue = new QLineEdit(registerForm);
        winevalue->setObjectName(QStringLiteral("winevalue"));
        winevalue->setGeometry(QRect(190, 340, 101, 51));
        label_6 = new QLabel(registerForm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(330, 350, 81, 31));
        label_6->setFont(font2);
        label_2->raise();
        label->raise();
        label_12->raise();
        label_11->raise();
        uid->raise();
        label_16->raise();
        date->raise();
        zhucexinxitijaio->raise();
        onecard->raise();
        pushButton_3->raise();
        number->raise();
        label_14->raise();
        winelei->raise();
        label_4->raise();
        label_5->raise();
        winevalue->raise();
        label_6->raise();

        retranslateUi(registerForm);

        QMetaObject::connectSlotsByName(registerForm);
    } // setupUi

    void retranslateUi(QWidget *registerForm)
    {
        registerForm->setWindowTitle(QApplication::translate("registerForm", "Form", 0));
        label->setText(QApplication::translate("registerForm", "\351\205\222\347\261\273\344\277\241\346\201\257\346\263\250\345\206\214", 0));
        label_12->setText(QApplication::translate("registerForm", "\347\247\215\347\261\273", 0));
        label_11->setText(QApplication::translate("registerForm", "\345\215\241\347\232\204UID", 0));
        label_16->setText(QApplication::translate("registerForm", "\347\224\237\344\272\247\346\227\245\346\234\237", 0));
        zhucexinxitijaio->setText(QApplication::translate("registerForm", "\346\217\220\344\272\244", 0));
        onecard->setText(QApplication::translate("registerForm", "\345\215\225\345\215\241\346\237\245\350\257\242", 0));
        pushButton_3->setText(QApplication::translate("registerForm", "\351\207\215\347\275\256", 0));
        label_14->setText(QApplication::translate("registerForm", "\346\225\260\351\207\217", 0));
        label_2->setText(QString());
        label_4->setText(QApplication::translate("registerForm", "\347\223\266/\347\256\261", 0));
        label_5->setText(QApplication::translate("registerForm", "\344\273\267\345\200\274", 0));
        label_6->setText(QApplication::translate("registerForm", "\347\223\266/\347\256\261", 0));
    } // retranslateUi

};

namespace Ui {
    class registerForm: public Ui_registerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERFORM_H
