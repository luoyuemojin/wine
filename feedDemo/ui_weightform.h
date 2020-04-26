/********************************************************************************
** Form generated from reading UI file 'weightform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEIGHTFORM_H
#define UI_WEIGHTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WeightForm
{
public:
    QGroupBox *groupBox;
    QTextEdit *uidEdit;
    QLabel *label;
    QPushButton *searchButton;
    QPushButton *getUidButton;
    QLabel *label_11;
    QTextEdit *weightEdit;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QLabel *weight;
    QLabel *age;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *atype;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *WeightForm)
    {
        if (WeightForm->objectName().isEmpty())
            WeightForm->setObjectName(QStringLiteral("WeightForm"));
        WeightForm->resize(1000, 800);
        groupBox = new QGroupBox(WeightForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 70, 481, 371));
        QFont font;
        font.setPointSize(12);
        groupBox->setFont(font);
        uidEdit = new QTextEdit(groupBox);
        uidEdit->setObjectName(QStringLiteral("uidEdit"));
        uidEdit->setGeometry(QRect(140, 60, 301, 41));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(63, 71, 81, 31));
        searchButton = new QPushButton(groupBox);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(264, 112, 111, 41));
        getUidButton = new QPushButton(groupBox);
        getUidButton->setObjectName(QStringLiteral("getUidButton"));
        getUidButton->setGeometry(QRect(144, 112, 91, 41));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 210, 121, 51));
        weightEdit = new QTextEdit(groupBox);
        weightEdit->setObjectName(QStringLiteral("weightEdit"));
        weightEdit->setGeometry(QRect(160, 210, 281, 41));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 270, 131, 51));
        groupBox_2 = new QGroupBox(WeightForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(550, 70, 351, 361));
        groupBox_2->setFont(font);
        weight = new QLabel(groupBox_2);
        weight->setObjectName(QStringLiteral("weight"));
        weight->setGeometry(QRect(180, 210, 131, 41));
        age = new QLabel(groupBox_2);
        age->setObjectName(QStringLiteral("age"));
        age->setGeometry(QRect(180, 160, 131, 31));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(180, 120, 51, 16));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 160, 131, 31));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 110, 101, 31));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 210, 161, 41));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 120, 51, 16));
        atype = new QLabel(groupBox_2);
        atype->setObjectName(QStringLiteral("atype"));
        atype->setGeometry(QRect(170, 100, 121, 31));
        label_2 = new QLabel(WeightForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1000, 800));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/image/\347\247\260\351\207\215.jpg);"));
        label_3 = new QLabel(WeightForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 10, 181, 41));
        QFont font1;
        font1.setPointSize(15);
        label_3->setFont(font1);
        label_2->raise();
        groupBox->raise();
        groupBox_2->raise();
        label_3->raise();

        retranslateUi(WeightForm);

        QMetaObject::connectSlotsByName(WeightForm);
    } // setupUi

    void retranslateUi(QWidget *WeightForm)
    {
        WeightForm->setWindowTitle(QApplication::translate("WeightForm", "Form", 0));
        groupBox->setTitle(QApplication::translate("WeightForm", "\351\200\211\351\241\271", 0));
        label->setText(QApplication::translate("WeightForm", "\345\215\241\345\217\267\357\274\232", 0));
        searchButton->setText(QApplication::translate("WeightForm", "\346\237\245\350\257\242", 0));
        getUidButton->setText(QApplication::translate("WeightForm", "\345\257\273\345\215\241", 0));
        label_11->setText(QApplication::translate("WeightForm", "\350\256\276\347\275\256\344\275\223\351\207\215\357\274\232", 0));
        pushButton->setText(QApplication::translate("WeightForm", "\350\256\276\347\275\256\344\275\223\351\207\215", 0));
        groupBox_2->setTitle(QApplication::translate("WeightForm", "\344\277\241\346\201\257", 0));
        weight->setText(QString());
        age->setText(QString());
        label_6->setText(QString());
        label_5->setText(QApplication::translate("WeightForm", "\346\227\245\351\276\204\357\274\210\345\244\251\357\274\211\357\274\232", 0));
        label_4->setText(QApplication::translate("WeightForm", "\347\247\215\347\261\273\357\274\232", 0));
        label_10->setText(QApplication::translate("WeightForm", "\344\275\223\351\207\215\357\274\210\345\205\254\346\226\244\357\274\211\357\274\232", 0));
        label_9->setText(QString());
        atype->setText(QString());
        label_2->setText(QString());
        label_3->setText(QApplication::translate("WeightForm", "\347\247\260\351\207\215\347\225\214\351\235\242", 0));
    } // retranslateUi

};

namespace Ui {
    class WeightForm: public Ui_WeightForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEIGHTFORM_H
