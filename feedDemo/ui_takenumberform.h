/********************************************************************************
** Form generated from reading UI file 'takenumberform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAKENUMBERFORM_H
#define UI_TAKENUMBERFORM_H

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

class Ui_takenumberForm
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

    void setupUi(QWidget *takenumberForm)
    {
        if (takenumberForm->objectName().isEmpty())
            takenumberForm->setObjectName(QStringLiteral("takenumberForm"));
        takenumberForm->resize(1000, 800);
        showUid = new QTextBrowser(takenumberForm);
        showUid->setObjectName(QStringLiteral("showUid"));
        showUid->setGeometry(QRect(390, 110, 271, 251));
        QFont font;
        font.setPointSize(12);
        showUid->setFont(font);
        showUid->setStyleSheet(QStringLiteral("QTextBrowser { background-color:rgb(255,132,139,0);border-radius:3px;color:rgb(0,0,0);}"));
        innum = new QLabel(takenumberForm);
        innum->setObjectName(QStringLiteral("innum"));
        innum->setGeometry(QRect(620, 424, 72, 31));
        innum->setFont(font);
        outCount = new QPushButton(takenumberForm);
        outCount->setObjectName(QStringLiteral("outCount"));
        outCount->setGeometry(QRect(192, 140, 131, 28));
        outCount->setFont(font);
        finishCount = new QPushButton(takenumberForm);
        finishCount->setObjectName(QStringLiteral("finishCount"));
        finishCount->setGeometry(QRect(192, 280, 131, 28));
        finishCount->setFont(font);
        outnum = new QLabel(takenumberForm);
        outnum->setObjectName(QStringLiteral("outnum"));
        outnum->setGeometry(QRect(270, 414, 72, 41));
        outnum->setFont(font);
        inCount = new QPushButton(takenumberForm);
        inCount->setObjectName(QStringLiteral("inCount"));
        inCount->setGeometry(QRect(192, 190, 131, 31));
        inCount->setFont(font);
        label = new QLabel(takenumberForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 414, 72, 41));
        label->setFont(font);
        title = new QLabel(takenumberForm);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(320, 30, 251, 61));
        QFont font1;
        font1.setPointSize(20);
        title->setFont(font1);
        label_2 = new QLabel(takenumberForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(490, 424, 72, 31));
        label_2->setFont(font);
        label_3 = new QLabel(takenumberForm);
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

        retranslateUi(takenumberForm);

        QMetaObject::connectSlotsByName(takenumberForm);
    } // setupUi

    void retranslateUi(QWidget *takenumberForm)
    {
        takenumberForm->setWindowTitle(QApplication::translate("takenumberForm", "Form", 0));
        innum->setText(QApplication::translate("takenumberForm", "0", 0));
        outCount->setText(QApplication::translate("takenumberForm", "\345\207\272\350\264\247\350\256\241\346\225\260", 0));
        finishCount->setText(QApplication::translate("takenumberForm", "\350\256\241\346\225\260\347\273\223\346\235\237", 0));
        outnum->setText(QApplication::translate("takenumberForm", "0", 0));
        inCount->setText(QApplication::translate("takenumberForm", "\350\277\233\350\264\247\350\256\241\346\225\260", 0));
        label->setText(QApplication::translate("takenumberForm", "\345\207\272\350\264\247\346\225\260\351\207\217", 0));
        title->setText(QApplication::translate("takenumberForm", "\345\212\250\347\211\251\346\225\260\351\207\217\347\273\237\350\256\241", 0));
        label_2->setText(QApplication::translate("takenumberForm", "\350\277\233\350\264\247\346\225\260\351\207\217", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class takenumberForm: public Ui_takenumberForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAKENUMBERFORM_H
