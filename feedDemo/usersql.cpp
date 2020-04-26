#include "usersql.h"

usersql::usersql()
{

}

bool usersql::createConnection()
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

UserInfo *usersql::getUserInfo(QString nam)
{
    qDebug()<<nam;
    QString ss=QString("SELECT * from user WHERE name2='%1';").arg(nam);
    qDebug()<<ss;
    //QString ss=QString("SELECT * from user WHERE name2='胡伟涛';");
    query->exec(ss);
    if(query->numRowsAffected()==1){
        qDebug()<<"查询成功";
        UserInfo *info=new UserInfo;
        query->next();
        info->name2=query->value(0).toString();
        info->password=query->value(1).toString();
        info->tel=query->value(2).toString();
        info->email=query->value(3).toString();
        return info;
    }
    return NULL;
}

bool usersql::login(QString name2, QString password, int yanzhengma)
{
    QString ss=QString("SELECT * from user WHERE aid='%1';").arg(name2);
    query->exec(ss);
}

bool usersql::adduser(UserInfo use)
{

   QString sss=QString("INSERT INTO user VALUE('%1','%2','%3','%4')").arg(use.name2).arg(use.password)
           .arg(use.tel).arg(use.email);
   //QString sss=QString("INSERT INTO user VALUE('胡伟涛','123','13223002563','hu716811@163.com')");
   qDebug()<<sss;
   query->exec(sss);
    if(query->numRowsAffected()==1){
     qDebug()<<"插入成功";
     return true;

    }
    else
    {
        qDebug()<<"插入失败";
        return false;
    }
}

