/********************************************************************************
** Form generated from reading UI file 'zhuceform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHUCEFORM_H
#define UI_ZHUCEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zhuceForm
{
public:
    QLabel *label;
    QLabel *label_12;
    QComboBox *zhonglei;
    QLabel *label_11;
    QLineEdit *uid;
    QLabel *label_16;
    QDateEdit *date;
    QPushButton *zhucexinxitijaio;
    QPushButton *onecard;
    QPushButton *pushButton_3;
    QLabel *label_13;
    QRadioButton *nv;
    QRadioButton *nan;
    QLineEdit *tizhong;
    QLabel *label_14;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *zhuceForm)
    {
        if (zhuceForm->objectName().isEmpty())
            zhuceForm->setObjectName(QStringLiteral("zhuceForm"));
        zhuceForm->resize(1000, 800);
        zhuceForm->setStyleSheet(QStringLiteral(""));
        label = new QLabel(zhuceForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 0, 321, 61));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_12 = new QLabel(zhuceForm);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 130, 60, 30));
        label_12->setFont(font);
        zhonglei = new QComboBox(zhuceForm);
        zhonglei->setObjectName(QStringLiteral("zhonglei"));
        zhonglei->setEnabled(true);
        zhonglei->setGeometry(QRect(190, 120, 94, 36));
        zhonglei->setMaximumSize(QSize(120, 16777215));
        zhonglei->setFont(font);
        zhonglei->setMaxVisibleItems(201);
        zhonglei->setInsertPolicy(QComboBox::InsertAlphabetically);
        zhonglei->setIconSize(QSize(24, 24));
        label_11 = new QLabel(zhuceForm);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(12, 62, 105, 30));
        label_11->setFont(font);
        uid = new QLineEdit(zhuceForm);
        uid->setObjectName(QStringLiteral("uid"));
        uid->setGeometry(QRect(190, 60, 271, 31));
        uid->setMaximumSize(QSize(16777215, 40));
        QFont font1;
        font1.setPointSize(12);
        uid->setFont(font1);
        label_16 = new QLabel(zhuceForm);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 370, 120, 30));
        label_16->setFont(font);
        date = new QDateEdit(zhuceForm);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(190, 360, 187, 36));
        date->setFont(font);
        zhucexinxitijaio = new QPushButton(zhuceForm);
        zhucexinxitijaio->setObjectName(QStringLiteral("zhucexinxitijaio"));
        zhucexinxitijaio->setGeometry(QRect(10, 460, 112, 41));
        zhucexinxitijaio->setFont(font);
        onecard = new QPushButton(zhuceForm);
        onecard->setObjectName(QStringLiteral("onecard"));
        onecard->setGeometry(QRect(270, 460, 131, 41));
        onecard->setFont(font);
        pushButton_3 = new QPushButton(zhuceForm);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 460, 112, 41));
        pushButton_3->setFont(font);
        label_13 = new QLabel(zhuceForm);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 200, 60, 30));
        label_13->setFont(font);
        nv = new QRadioButton(zhuceForm);
        nv->setObjectName(QStringLiteral("nv"));
        nv->setGeometry(QRect(300, 200, 63, 34));
        nv->setFont(font);
        nan = new QRadioButton(zhuceForm);
        nan->setObjectName(QStringLiteral("nan"));
        nan->setGeometry(QRect(190, 200, 63, 34));
        nan->setFont(font);
        tizhong = new QLineEdit(zhuceForm);
        tizhong->setObjectName(QStringLiteral("tizhong"));
        tizhong->setGeometry(QRect(190, 280, 100, 30));
        tizhong->setMaximumSize(QSize(100, 50));
        tizhong->setFont(font1);
        label_14 = new QLabel(zhuceForm);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 280, 60, 30));
        label_14->setFont(font);
        label_6 = new QLabel(zhuceForm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(310, 280, 30, 30));
        label_6->setMaximumSize(QSize(16777215, 30));
        label_6->setFont(font);
        label_2 = new QLabel(zhuceForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1000, 800));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/image/\346\263\250\345\206\214\344\277\241\346\201\257.jpg);"));
        label_3 = new QLabel(zhuceForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(670, 20, 241, 41));
        label_2->raise();
        label->raise();
        label_12->raise();
        zhonglei->raise();
        label_11->raise();
        uid->raise();
        label_16->raise();
        date->raise();
        zhucexinxitijaio->raise();
        onecard->raise();
        pushButton_3->raise();
        label_13->raise();
        nv->raise();
        nan->raise();
        tizhong->raise();
        label_14->raise();
        label_6->raise();
        label_3->raise();

        retranslateUi(zhuceForm);

        zhonglei->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(zhuceForm);
    } // setupUi

    void retranslateUi(QWidget *zhuceForm)
    {
        zhuceForm->setWindowTitle(QApplication::translate("zhuceForm", "Form", 0));
        label->setText(QApplication::translate("zhuceForm", "\345\212\250\347\211\251\344\277\241\346\201\257\346\263\250\345\206\214", 0));
        label_12->setText(QApplication::translate("zhuceForm", "\347\247\215\347\261\273", 0));
        zhonglei->clear();
        zhonglei->insertItems(0, QStringList()
         << QApplication::translate("zhuceForm", "\345\261\261\347\276\212", 0)
         << QApplication::translate("zhuceForm", "\347\273\265\347\276\212", 0)
         << QApplication::translate("zhuceForm", "\347\211\233", 0)
         << QApplication::translate("zhuceForm", "\351\251\254", 0)
         << QApplication::translate("zhuceForm", "\351\270\241", 0)
         << QApplication::translate("zhuceForm", "\347\213\227", 0)
         << QApplication::translate("zhuceForm", "\347\214\252", 0)
        );
        label_11->setText(QApplication::translate("zhuceForm", "\345\215\241\347\232\204UID", 0));
        label_16->setText(QApplication::translate("zhuceForm", "\345\207\272\347\224\237\346\227\245\346\234\237", 0));
        zhucexinxitijaio->setText(QApplication::translate("zhuceForm", "\346\217\220\344\272\244", 0));
        onecard->setText(QApplication::translate("zhuceForm", "\345\215\225\345\215\241\346\237\245\350\257\242", 0));
        pushButton_3->setText(QApplication::translate("zhuceForm", "\351\207\215\347\275\256", 0));
        label_13->setText(QApplication::translate("zhuceForm", "\346\200\247\345\210\253", 0));
        nv->setText(QApplication::translate("zhuceForm", "\345\245\263", 0));
        nan->setText(QApplication::translate("zhuceForm", "\347\224\267", 0));
        label_14->setText(QApplication::translate("zhuceForm", "\344\275\223\351\207\215", 0));
        label_6->setText(QApplication::translate("zhuceForm", "kg", 0));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("zhuceForm", "\346\263\250\345\206\214\345\220\216\345\260\261\346\230\257\346\234\211\345\220\215\345\255\227\347\232\204\345\260\217\345\212\250\347\211\251\344\272\206", 0));
    } // retranslateUi

};

namespace Ui {
    class zhuceForm: public Ui_zhuceForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHUCEFORM_H
