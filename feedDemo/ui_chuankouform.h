/********************************************************************************
** Form generated from reading UI file 'chuankouform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHUANKOUFORM_H
#define UI_CHUANKOUFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chuankouForm
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *PortBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *BaudBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *BitBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *ParityBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *StopBox;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *OpenSerialButton;
    QPushButton *closeSerialButton;
    QLabel *label_6;

    void setupUi(QWidget *chuankouForm)
    {
        if (chuankouForm->objectName().isEmpty())
            chuankouForm->setObjectName(QStringLiteral("chuankouForm"));
        chuankouForm->resize(1000, 800);
        chuankouForm->setStyleSheet(QStringLiteral(""));
        layoutWidget = new QWidget(chuankouForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 10, 275, 531));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        PortBox = new QComboBox(layoutWidget);
        PortBox->setObjectName(QStringLiteral("PortBox"));
        PortBox->setMaximumSize(QSize(16777215, 40));
        PortBox->setSizeIncrement(QSize(0, 0));
        PortBox->setIconSize(QSize(24, 30));

        horizontalLayout->addWidget(PortBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        BaudBox = new QComboBox(layoutWidget);
        BaudBox->setObjectName(QStringLiteral("BaudBox"));
        BaudBox->setMaximumSize(QSize(16777215, 40));

        horizontalLayout_2->addWidget(BaudBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        BitBox = new QComboBox(layoutWidget);
        BitBox->setObjectName(QStringLiteral("BitBox"));
        BitBox->setMaximumSize(QSize(16777215, 40));

        horizontalLayout_3->addWidget(BitBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        ParityBox = new QComboBox(layoutWidget);
        ParityBox->setObjectName(QStringLiteral("ParityBox"));
        ParityBox->setMaximumSize(QSize(16777215, 40));

        horizontalLayout_4->addWidget(ParityBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);

        StopBox = new QComboBox(layoutWidget);
        StopBox->setObjectName(QStringLiteral("StopBox"));
        StopBox->setMaximumSize(QSize(16777215, 40));

        horizontalLayout_5->addWidget(StopBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        OpenSerialButton = new QPushButton(layoutWidget);
        OpenSerialButton->setObjectName(QStringLiteral("OpenSerialButton"));
        OpenSerialButton->setMaximumSize(QSize(16777215, 50));
        OpenSerialButton->setFont(font);

        horizontalLayout_6->addWidget(OpenSerialButton);

        closeSerialButton = new QPushButton(layoutWidget);
        closeSerialButton->setObjectName(QStringLiteral("closeSerialButton"));
        closeSerialButton->setMaximumSize(QSize(16777215, 50));
        closeSerialButton->setFont(font);

        horizontalLayout_6->addWidget(closeSerialButton);


        verticalLayout->addLayout(horizontalLayout_6);

        label_6 = new QLabel(chuankouForm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 7, 1000, 800));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/image/\344\270\273\347\225\214\351\235\242.jpg);"));
        label_6->raise();
        layoutWidget->raise();

        retranslateUi(chuankouForm);

        QMetaObject::connectSlotsByName(chuankouForm);
    } // setupUi

    void retranslateUi(QWidget *chuankouForm)
    {
        chuankouForm->setWindowTitle(QApplication::translate("chuankouForm", "Form", 0));
        label->setText(QApplication::translate("chuankouForm", "\344\270\262\345\217\243", 0));
        label_2->setText(QApplication::translate("chuankouForm", "\346\263\242\347\211\271\347\216\207", 0));
        BaudBox->clear();
        BaudBox->insertItems(0, QStringList()
         << QApplication::translate("chuankouForm", "115200", 0)
         << QApplication::translate("chuankouForm", "19200", 0)
         << QApplication::translate("chuankouForm", "14400", 0)
         << QApplication::translate("chuankouForm", "9600", 0)
         << QApplication::translate("chuankouForm", "2400", 0)
         << QApplication::translate("chuankouForm", "1800", 0)
        );
        label_3->setText(QApplication::translate("chuankouForm", "\346\225\260\346\215\256\344\275\215", 0));
        BitBox->clear();
        BitBox->insertItems(0, QStringList()
         << QApplication::translate("chuankouForm", "8", 0)
         << QApplication::translate("chuankouForm", "5", 0)
        );
        label_4->setText(QApplication::translate("chuankouForm", "\346\240\241\351\252\214\344\275\215", 0));
        ParityBox->clear();
        ParityBox->insertItems(0, QStringList()
         << QApplication::translate("chuankouForm", "0", 0)
         << QApplication::translate("chuankouForm", "1", 0)
        );
        label_5->setText(QApplication::translate("chuankouForm", "\345\201\234\346\255\242\344\275\215", 0));
        StopBox->clear();
        StopBox->insertItems(0, QStringList()
         << QApplication::translate("chuankouForm", "1", 0)
         << QApplication::translate("chuankouForm", "2", 0)
        );
        OpenSerialButton->setText(QApplication::translate("chuankouForm", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        closeSerialButton->setText(QApplication::translate("chuankouForm", "\345\205\263\351\227\255\344\270\262\345\217\243", 0));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chuankouForm: public Ui_chuankouForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHUANKOUFORM_H
