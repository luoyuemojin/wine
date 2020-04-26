#ifndef CHAKANFORM_H
#define CHAKANFORM_H

#include <QWidget>
#include <QMainWindow>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QButtonGroup>
#include <QRadioButton>
#include <QGroupBox>
#include <QMessageBox>
#include <QSqlQuery>
#include <QtSql>
#include <QObject>
#include "ReadDLL.h"
#include "serialrfid.h"
#include "winesql.h"
#include "datastruct.h"
namespace Ui {
class seeForm;
}

class seeForm : public QWidget
{
    Q_OBJECT

public:
    explicit seeForm(QWidget *parent = 0);
    ~seeForm();
   WineSql *winesql;
   void setWineSql( WineSql *f);
    SerialRfid *ser;
    QSerialPort *serial;
    WineSql *wines;
    int isdan;
    int i=1;
private slots:
    void on_chakanxinxi_clicked();

    void on_deletexinxi_clicked();

    void on_clear_clicked();

private:
    Ui::seeForm *ui;
};

#endif // CHAKANFORM_H
