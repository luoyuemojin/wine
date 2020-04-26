#ifndef USERSQL_H
#define USERSQL_H
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QList>
#include <QWidget>
#include <QMessageBox>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QButtonGroup>
#include <QRadioButton>
#include <QGroupBox>
#include <QObject>
#include <datastruct.h>
class usersql
{
public:
    usersql();
private:
    QSqlDatabase db;
    QSqlQuery *query;
public:
    //链接操作
    bool createConnection();
    //用户操作
    bool addWine(WineInfo win);//需实现
    bool delWine(QString uid);   //需实现
    UserInfo *getUserInfo(QString nam); //需实现

    bool setWinenumber(QString uid,int number);   //需实现
    bool setWinevalue(QString uid,double value);   //需实现
    bool login(QString name2,QString password,int yanzhengma);
    bool adduser(UserInfo use);
};

#endif // USERSQL_H
