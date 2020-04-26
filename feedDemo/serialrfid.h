#ifndef SERIALRFID_H
#define SERIALRFID_H

#include <QDebug>
#include<QString>
#include <QTimer>
#include <QList>
#include <QObject>
class SerialRfid :public QObject
{
     Q_OBJECT
public:
    explicit SerialRfid(QObject *parent = 0);
private:
    QList<QString>    * uidsList;
    QTimer * timer;
public slots:
    void timeoutSlot();

public:
    static QList<QString> *getCOMs();
   static bool setSerial(QString com,int bot);
    QString getOneUID();//一次单卡寻卡，返回uid,没有则返回空
    QList<QString>* getAllUID();//一次多卡查询,返回uid列表，没有返回空。
    void startSelfMotion();     //开启自动寻卡
    void closeSelfMotion();     //关闭自动寻卡//注意自动寻卡期间，将把所有扫到的id存起来。
    QList<QString> * getUidList(); //得到列表

    void clear();                   //清空uid列表
    static void close();                   //关闭串口。
};

#endif // SERIALRFID_H
