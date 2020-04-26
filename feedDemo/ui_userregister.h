/********************************************************************************
** Form generated from reading UI file 'userregister.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERREGISTER_H
#define UI_USERREGISTER_H

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

class Ui_userregister
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *zhuceuser;
    QLineEdit *zhucepassword;
    QLineEdit *zhucepassword2;
    QLineEdit *zhucetel;
    QLineEdit *zhuceemail;
    QPushButton *zhucetijiao;
    QPushButton *return_2;

    void setupUi(QWidget *userregister)
    {
        if (userregister->objectName().isEmpty())
            userregister->setObjectName(QStringLiteral("userregister"));
        userregister->resize(1304, 735);
        QFont font;
        font.setPointSize(9);
        userregister->setFont(font);
        label = new QLabel(userregister);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 30, 501, 71));
        QFont font1;
        font1.setPointSize(30);
        label->setFont(font1);
        label_2 = new QLabel(userregister);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 190, 81, 41));
        QFont font2;
        font2.setPointSize(20);
        label_2->setFont(font2);
        label_3 = new QLabel(userregister);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 260, 111, 31));
        label_3->setFont(font2);
        label_4 = new QLabel(userregister);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 320, 171, 51));
        label_4->setFont(font2);
        label_5 = new QLabel(userregister);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 390, 91, 41));
        label_5->setFont(font2);
        label_6 = new QLabel(userregister);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(130, 460, 81, 51));
        label_6->setFont(font2);
        zhuceuser = new QLineEdit(userregister);
        zhuceuser->setObjectName(QStringLiteral("zhuceuser"));
        zhuceuser->setGeometry(QRect(280, 190, 181, 31));
        QFont font3;
        font3.setPointSize(12);
        zhuceuser->setFont(font3);
        zhucepassword = new QLineEdit(userregister);
        zhucepassword->setObjectName(QStringLiteral("zhucepassword"));
        zhucepassword->setGeometry(QRect(280, 260, 181, 31));
        zhucepassword->setFont(font3);
        zhucepassword2 = new QLineEdit(userregister);
        zhucepassword2->setObjectName(QStringLiteral("zhucepassword2"));
        zhucepassword2->setGeometry(QRect(280, 334, 181, 31));
        zhucepassword2->setFont(font3);
        zhucetel = new QLineEdit(userregister);
        zhucetel->setObjectName(QStringLiteral("zhucetel"));
        zhucetel->setGeometry(QRect(280, 394, 181, 31));
        zhucetel->setFont(font3);
        zhuceemail = new QLineEdit(userregister);
        zhuceemail->setObjectName(QStringLiteral("zhuceemail"));
        zhuceemail->setGeometry(QRect(280, 460, 181, 41));
        zhuceemail->setFont(font3);
        zhucetijiao = new QPushButton(userregister);
        zhucetijiao->setObjectName(QStringLiteral("zhucetijiao"));
        zhucetijiao->setGeometry(QRect(240, 590, 161, 61));
        zhucetijiao->setFont(font2);
        return_2 = new QPushButton(userregister);
        return_2->setObjectName(QStringLiteral("return_2"));
        return_2->setGeometry(QRect(500, 590, 171, 61));
        return_2->setFont(font2);

        retranslateUi(userregister);

        QMetaObject::connectSlotsByName(userregister);
    } // setupUi

    void retranslateUi(QWidget *userregister)
    {
        userregister->setWindowTitle(QApplication::translate("userregister", "Form", 0));
        label->setText(QApplication::translate("userregister", "\346\254\242\350\277\216\350\277\233\345\205\245\346\263\250\345\206\214\347\225\214\351\235\242", 0));
        label_2->setText(QApplication::translate("userregister", "\347\224\250\346\210\267\345\220\215", 0));
        label_3->setText(QApplication::translate("userregister", "\345\257\206\347\240\201", 0));
        label_4->setText(QApplication::translate("userregister", "\345\206\215\346\254\241\350\276\223\345\205\245", 0));
        label_5->setText(QApplication::translate("userregister", "\347\224\265\350\257\235", 0));
        label_6->setText(QApplication::translate("userregister", "\351\202\256\347\256\261", 0));
        zhucetijiao->setText(QApplication::translate("userregister", "\346\217\220\344\272\244", 0));
        return_2->setText(QApplication::translate("userregister", "\350\277\224\345\233\236\347\231\273\345\275\225", 0));
    } // retranslateUi

};

namespace Ui {
    class userregister: public Ui_userregister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERREGISTER_H
