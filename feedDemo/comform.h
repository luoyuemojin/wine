#ifndef CHUANKOUFORM_H
#define CHUANKOUFORM_H

#include <QWidget>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QButtonGroup>
#include <QRadioButton>
#include <QGroupBox>
#include <QObject>
#include <QMessageBox>
#include <QSqlQuery>
#include <QtSql>
#include "ReadDLL.h"
#include "serialrfid.h"
#include "winesql.h"
#include "datastruct.h"
namespace Ui {
class comForm;
}

class comForm : public QWidget
{
    Q_OBJECT

public:
    explicit comForm(QWidget *parent = 0);
    ~comForm();
    SerialRfid *ser;
    QSerialPort *serial;
    WineSql *wines;
    int isdan;

private slots:
    void on_OpenSerialButton_clicked();

    void on_closeSerialButton_clicked();

private:
    Ui::comForm *ui;
};

#endif // CHUANKOUFORM_H
