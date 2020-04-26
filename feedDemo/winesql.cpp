#include "winesql.h"
#include <QProcess>
WineSql::WineSql()
{   

}

bool WineSql::createConnection()
{
    db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("wine");
    db.setUserName("root");
    db.setPassword("123456");
    if(!db.open()){
        QMessageBox::critical(0,QObject::tr("无法打开数据库"),"无法创建数据库链接！",QMessageBox::Cancel
                              );

        return false;//链接不成功
    }

    query=new QSqlQuery(db);
    if(query==NULL)return false;
    qDebug()<<"数据库链接成功";
    return true;
}

bool WineSql::addWine(WineInfo win)
{

    QString ss=QString("INSERT INTO wine VALUE('%1','%2','%3',%4,%5)").arg(win.uid).arg(win.name)
            .arg(win.birth.toString("yyyy-MM-dd")).arg(win.number).arg(win.values);
    query->exec(ss);
    if(query->numRowsAffected()==1){
     qDebug()<<"插入成功";
     return true;

    }
    else return false;
}

bool WineSql::delWine(QString uid)
{

    QString ss=QString("DELETE FROM wine WHERE aid='%1';").arg(uid);
    query->exec(ss);
    if(query->numRowsAffected()==1){
      //  qDebug()<<"删除成功";
        return true;
    }
    return false;
}

WineInfo *WineSql::getWineInfo(QString uid)
{
    QString ss=QString("SELECT * from wine WHERE aid='%1';").arg(uid);
    query->exec(ss);
    if(query->numRowsAffected()==1){
       // qDebug()<<"animal查询成功";
        WineInfo *info=new WineInfo;

        query->next();
        info->uid=query->value(0).toString();
        info->name=query->value(1).toString();
        info->birth=query->value(2).toDate();
        info->number=query->value(3).toInt();
        info->values=query->value(4).toDouble();
      //  qDebug()<<info->uid<<info->name<<info->birth<<info->sex;
        return info;
    }
    return NULL;
}


bool WineSql::setWinevalue(QString uid, double value)
{

}
