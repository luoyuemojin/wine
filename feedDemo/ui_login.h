/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *zhanghu;
    QLabel *label_4;
    QLineEdit *mima;
    QPushButton *login_2;
    QLabel *label_5;
    QLineEdit *yanzheng2;
    QPushButton *reginter;
    QPushButton *changepassword;
    QPushButton *yanzheng4;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(933, 742);
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 220, 711, 511));
        label_2->setStyleSheet(QStringLiteral("background-image: url(:/image/login.png);"));
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 40, 291, 111));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 237, 101, 41));
        QFont font1;
        font1.setPointSize(20);
        label_3->setFont(font1);
        zhanghu = new QLineEdit(login);
        zhanghu->setObjectName(QStringLiteral("zhanghu"));
        zhanghu->setGeometry(QRect(210, 230, 251, 41));
        label_4 = new QLabel(login);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 330, 81, 41));
        label_4->setFont(font1);
        mima = new QLineEdit(login);
        mima->setObjectName(QStringLiteral("mima"));
        mima->setGeometry(QRect(210, 324, 241, 41));
        login_2 = new QPushButton(login);
        login_2->setObjectName(QStringLiteral("login_2"));
        login_2->setGeometry(QRect(110, 470, 111, 51));
        QFont font2;
        font2.setPointSize(15);
        login_2->setFont(font2);
        label_5 = new QLabel(login);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 390, 131, 41));
        label_5->setFont(font1);
        yanzheng2 = new QLineEdit(login);
        yanzheng2->setObjectName(QStringLiteral("yanzheng2"));
        yanzheng2->setGeometry(QRect(250, 390, 113, 51));
        yanzheng2->setFont(font2);
        reginter = new QPushButton(login);
        reginter->setObjectName(QStringLiteral("reginter"));
        reginter->setGeometry(QRect(330, 470, 121, 51));
        reginter->setFont(font2);
        changepassword = new QPushButton(login);
        changepassword->setObjectName(QStringLiteral("changepassword"));
        changepassword->setGeometry(QRect(40, 670, 112, 34));
        yanzheng4 = new QPushButton(login);
        yanzheng4->setObjectName(QStringLiteral("yanzheng4"));
        yanzheng4->setGeometry(QRect(400, 400, 112, 34));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", 0));
        label_2->setText(QString());
        label->setText(QApplication::translate("login", "\346\254\242\350\277\216\346\202\250", 0));
        label_3->setText(QApplication::translate("login", "\350\264\246\345\217\267", 0));
        label_4->setText(QApplication::translate("login", "\345\257\206\347\240\201", 0));
        login_2->setText(QApplication::translate("login", "\347\231\273\345\275\225", 0));
        label_5->setText(QApplication::translate("login", "\351\252\214\350\257\201\347\240\201", 0));
        reginter->setText(QApplication::translate("login", "\346\263\250\345\206\214", 0));
        changepassword->setText(QApplication::translate("login", "\345\277\230\350\256\260\345\257\206\347\240\201", 0));
        yanzheng4->setText(QApplication::translate("login", "\350\216\267\345\217\226\351\252\214\350\257\201\347\240\201", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
