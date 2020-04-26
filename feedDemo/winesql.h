#ifndef FEEDSQL_H
#define FEEDSQL_H
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QList>
#include "datastruct.h"
class WineSql
{
public:
    WineSql();
private:
    QSqlDatabase db;
    QSqlQuery *query;
public:
     //链接操作
     bool createConnection();
     //酒类操作
     bool addWine(WineInfo win);//需实现
     bool delWine(QString uid);   //需实现
     WineInfo *getWineInfo(QString uid); //需实现
     bool setWinenumber(QString uid,int number);   //需实现
     bool setWinevalue(QString uid,double value);   //需实现

     /*//疫苗操作
     bool addVac(VacInfo vac);
     VacInfo *getVacInfo(QString vid);
     bool delVac(QString vid);
     QList<VacInfo> *getAllVacInfos();  //需实现
     QList<VacInfo> *getNeedVacInfos(QString uid);  //需实现 获取某动物该接种的疫苗
     //接种操作
     bool jiezhong(QString uid,QString vid);    //需实现
     */
};

#endif // FEEDSQL_H
