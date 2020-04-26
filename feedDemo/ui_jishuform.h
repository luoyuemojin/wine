/********************************************************************************
** Form generated from reading UI file 'jishuform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JISHUFORM_H
#define UI_JISHUFORM_H

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

class Ui_JishuForm
{
public:
    QTextBrowser *showUid;
    QLabel *innum;
    QPushButton *outCount;
    QPushButton *finishCount;
    QLabel *outnum;
    QPushButton *inCount;
    QLabel *label;
    QLabel *title;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *JishuForm)
    {
        if (JishuForm->objectName().isEmpty())
            JishuForm->setObjectName(QStringLiteral("JishuForm"));
        JishuForm->resize(1000, 800);
        showUid = new QTextBrowser(JishuForm);
        showUid->setObjectName(QStringLiteral("showUid"));
        showUid->setGeometry(QRect(390, 110, 271, 251));
        QFont font;
        font.setPointSize(12);
        showUid->setFont(font);
        showUid->setStyleSheet(QStringLiteral("QTextBrowser { background-color:rgb(255,132,139,0);border-radius:3px;color:rgb(0,0,0);}"));
        innum = new QLabel(JishuForm);
        innum->setObjectName(QStringLiteral("innum"));
        innum->setGeometry(QRect(620, 424, 72, 31));
        innum->setFont(font);
        outCount = new QPushButton(JishuForm);
        outCount->setObjectName(QStringLiteral("outCount"));
        outCount->setGeometry(QRect(192, 140, 131, 28));
        outCount->setFont(font);
        finishCount = new QPushButton(JishuForm);
        finishCount->setObjectName(QStringLiteral("finishCount"));
        finishCount->setGeometry(QRect(192, 280, 131, 28));
        finishCount->setFont(font);
        outnum = new QLabel(JishuForm);
        outnum->setObjectName(QStringLiteral("outnum"));
        outnum->setGeometry(QRect(270, 414, 72, 41));
        outnum->setFont(font);
        inCount = new QPushButton(JishuForm);
        inCount->setObjectName(QStringLiteral("inCount"));
        inCount->setGeometry(QRect(192, 190, 131, 31));
        inCount->setFont(font);
        label = new QLabel(JishuForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 414, 72, 41));
        label->setFont(font);
        title = new QLabel(JishuForm);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(320, 30, 251, 61));
        QFont font1;
        font1.setPointSize(20);
        title->setFont(font1);
        label_2 = new QLabel(JishuForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(490, 424, 72, 31));
        label_2->setFont(font);
        label_3 = new QLabel(JishuForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 1000, 800));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/image/\350\256\241\346\225\260.jpg);"));
        label_3->raise();
        showUid->raise();
        innum->raise();
        outCount->raise();
        finishCount->raise();
        outnum->raise();
        inCount->raise();
        label->raise();
        title->raise();
        label_2->raise();

        retranslateUi(JishuForm);

        QMetaObject::connectSlotsByName(JishuForm);
    } // setupUi

    void retranslateUi(QWidget *JishuForm)
    {
        JishuForm->setWindowTitle(QApplication::translate("JishuForm", "Form", 0));
        innum->setText(QApplication::translate("JishuForm", "0", 0));
        outCount->setText(QApplication::translate("JishuForm", "\345\207\272\345\234\210\350\256\241\346\225\260", 0));
        finishCount->setText(QApplication::translate("JishuForm", "\350\256\241\346\225\260\347\273\223\346\235\237", 0));
        outnum->setText(QApplication::translate("JishuForm", "0", 0));
        inCount->setText(QApplication::translate("JishuForm", "\345\205\245\345\234\210\350\256\241\346\225\260", 0));
        label->setText(QApplication::translate("JishuForm", "\345\207\272\345\234\210\346\225\260\351\207\217", 0));
        title->setText(QApplication::translate("JishuForm", "\345\212\250\347\211\251\346\225\260\351\207\217\347\273\237\350\256\241", 0));
        label_2->setText(QApplication::translate("JishuForm", "\345\205\245\345\234\210\346\225\260\351\207\217", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class JishuForm: public Ui_JishuForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JISHUFORM_H
