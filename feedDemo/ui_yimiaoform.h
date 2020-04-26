/********************************************************************************
** Form generated from reading UI file 'yimiaoform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YIMIAOFORM_H
#define UI_YIMIAOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YiMiaoForm
{
public:
    QGroupBox *groupBox;
    QListWidget *valistWidget;
    QPushButton *deleteButton;
    QPushButton *refreshButton;
    QTextBrowser *vatTextBrowser;
    QLabel *label;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *submitButton;
    QTextEdit *vidEdit;
    QTextEdit *relyEdit;
    QTextEdit *vnameEdit;
    QTextEdit *vtimeEdit;
    QTextEdit *vtextEdit;
    QLabel *label_7;
    QPushButton *clearButton;
    QLabel *label_8;

    void setupUi(QWidget *YiMiaoForm)
    {
        if (YiMiaoForm->objectName().isEmpty())
            YiMiaoForm->setObjectName(QStringLiteral("YiMiaoForm"));
        YiMiaoForm->resize(1000, 800);
        groupBox = new QGroupBox(YiMiaoForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 60, 411, 561));
        valistWidget = new QListWidget(groupBox);
        valistWidget->setObjectName(QStringLiteral("valistWidget"));
        valistWidget->setGeometry(QRect(20, 40, 161, 471));
        deleteButton = new QPushButton(groupBox);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(290, 400, 121, 51));
        QFont font;
        font.setPointSize(12);
        deleteButton->setFont(font);
        refreshButton = new QPushButton(groupBox);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setGeometry(QRect(200, 400, 75, 51));
        refreshButton->setFont(font);
        vatTextBrowser = new QTextBrowser(groupBox);
        vatTextBrowser->setObjectName(QStringLiteral("vatTextBrowser"));
        vatTextBrowser->setGeometry(QRect(200, 40, 201, 311));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 0, 161, 41));
        label->setFont(font);
        groupBox_2 = new QGroupBox(YiMiaoForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(430, 60, 491, 551));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 60, 121, 41));
        label_2->setFont(font);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 130, 121, 41));
        label_3->setFont(font);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 270, 111, 41));
        label_4->setFont(font);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 200, 131, 41));
        label_5->setFont(font);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 380, 171, 51));
        label_6->setFont(font);
        submitButton = new QPushButton(groupBox_2);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setGeometry(QRect(40, 462, 75, 41));
        submitButton->setFont(font);
        vidEdit = new QTextEdit(groupBox_2);
        vidEdit->setObjectName(QStringLiteral("vidEdit"));
        vidEdit->setGeometry(QRect(130, 70, 111, 31));
        relyEdit = new QTextEdit(groupBox_2);
        relyEdit->setObjectName(QStringLiteral("relyEdit"));
        relyEdit->setGeometry(QRect(130, 210, 111, 31));
        vnameEdit = new QTextEdit(groupBox_2);
        vnameEdit->setObjectName(QStringLiteral("vnameEdit"));
        vnameEdit->setGeometry(QRect(130, 140, 111, 31));
        vtimeEdit = new QTextEdit(groupBox_2);
        vtimeEdit->setObjectName(QStringLiteral("vtimeEdit"));
        vtimeEdit->setGeometry(QRect(130, 270, 111, 31));
        vtextEdit = new QTextEdit(groupBox_2);
        vtextEdit->setObjectName(QStringLiteral("vtextEdit"));
        vtextEdit->setGeometry(QRect(180, 350, 281, 81));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(250, 0, 231, 321));
        clearButton = new QPushButton(groupBox_2);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(210, 460, 75, 41));
        clearButton->setFont(font);
        label_8 = new QLabel(YiMiaoForm);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 0, 1000, 800));
        label_8->setStyleSheet(QStringLiteral("background-color: rgb(200, 255, 197);"));
        label_8->raise();
        groupBox->raise();
        groupBox_2->raise();

        retranslateUi(YiMiaoForm);

        QMetaObject::connectSlotsByName(YiMiaoForm);
    } // setupUi

    void retranslateUi(QWidget *YiMiaoForm)
    {
        YiMiaoForm->setWindowTitle(QApplication::translate("YiMiaoForm", "Form", 0));
        groupBox->setTitle(QApplication::translate("YiMiaoForm", "\346\211\200\346\234\211\347\226\253\350\213\227", 0));
        deleteButton->setText(QApplication::translate("YiMiaoForm", "\345\210\240\351\231\244\347\226\253\350\213\227", 0));
        refreshButton->setText(QApplication::translate("YiMiaoForm", "\345\210\267\346\226\260", 0));
        label->setText(QApplication::translate("YiMiaoForm", "\347\226\253\350\213\227\350\257\246\347\273\206\344\277\241\346\201\257", 0));
        groupBox_2->setTitle(QApplication::translate("YiMiaoForm", "\345\242\236\345\212\240\347\226\253\350\213\227", 0));
        label_2->setText(QApplication::translate("YiMiaoForm", "\347\226\253\350\213\227\347\274\226\345\217\267\357\274\232", 0));
        label_3->setText(QApplication::translate("YiMiaoForm", "\347\226\253\350\213\227\345\220\215\347\247\260\357\274\232", 0));
        label_4->setText(QApplication::translate("YiMiaoForm", "\346\216\245\347\247\215\346\227\266\351\227\264\357\274\232", 0));
        label_5->setText(QApplication::translate("YiMiaoForm", "\345\205\210\350\241\214\350\215\257\347\274\226\345\217\267\357\274\232", 0));
        label_6->setText(QApplication::translate("YiMiaoForm", "\347\226\253\350\213\227\350\257\246\347\273\206\344\277\241\346\201\257\357\274\232", 0));
        submitButton->setText(QApplication::translate("YiMiaoForm", "\346\217\220\344\272\244", 0));
        label_7->setText(QApplication::translate("YiMiaoForm", "<html><head/><body><p><span style=\" font-weight:600;\">\350\257\264\346\230\216\357\274\232</span></p><p><span style=\" font-weight:600;\">1.\347\226\253\350\213\227\347\274\226\345\217\267\351\234\200\346\230\257\345\224\257\344\270\200</span></p><p><span style=\" font-weight:600;\">2.\345\205\210\350\241\214\350\215\257\350\241\250\347\244\272\347\226\253\350\213\227\346\263\250\345\260\204\345\211\215\347\232\204\344\276\235</span></p><p><span style=\" font-weight:600;\">\350\265\226\347\226\253\350\213\227\343\200\202\345\246\202\347\226\253\350\213\2271\357\274\210\347\254\254\344\272\214\346\254\241\357\274\211\347\232\204</span></p><p><span style=\" font-weight:600;\">\344\276\235\350\265\226\346\230\257\347\226\253\350\213\2271\357\274\210\347\254\254\344\270\200\346\254\241\357\274\211\343\200\202</span></p><p><span style=\" font-weight:600;\">\350\213\245\346\262\241\346\234\211\345\205\210\350\241\214\350\215\257\345\210\231\344\270\215\345\241\253</span></p><p><span style=\" font-weight:600;\">3.\345"
                        "\205\210\350\241\214\350\215\257\347\274\226\345\217\267\345\277\205\351\241\273\346\230\257\347\226\253\350\213\227\345\272\223\344\270\255</span></p><p><span style=\" font-weight:600;\">\345\267\262\346\234\211\347\232\204\347\226\253\350\213\227\347\274\226\345\217\267\343\200\202</span></p><p><span style=\" font-weight:600;\">\350\275\257\344\273\266\345\210\266\344\275\234\346\226\271\346\234\211\346\234\200\347\273\210\350\247\243\351\207\212\346\235\203\343\200\202</span></p></body></html>", 0));
        clearButton->setText(QApplication::translate("YiMiaoForm", "\351\207\215\347\275\256", 0));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class YiMiaoForm: public Ui_YiMiaoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YIMIAOFORM_H
