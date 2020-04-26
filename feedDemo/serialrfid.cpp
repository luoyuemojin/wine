#include "serialrfid.h"
#include "ReadDLL.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QByteArray>
#include <QObject>
SerialRfid::SerialRfid(QObject *parent) : QObject(parent)
{
    uidsList=new QList<QString>;
    timer=new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(timeoutSlot()));
}

void SerialRfid::timeoutSlot()
{
    QList<QString> *sl=getAllUID();
    if(sl==NULL)return;
    else
    {
        for(int i=0;i<sl->size();i++){
            if(!uidsList->contains(sl->at(i)))
            {
                uidsList->append(sl->at(i));
                qDebug()<<"uidlist添加"<<sl->at(i);
            }
        }
    }
}

QList<QString> *SerialRfid::getCOMs()
{
    QList<QString> *comList=new QList<QString>;
    qDebug()<<QSerialPortInfo::availablePorts().size();
    foreach (const QSerialPortInfo &info,QSerialPortInfo::availablePorts()){
        QSerialPort serial;
        serial.setPort(info);

            qDebug() << "Name : " << info.portName();
            comList->append(info.portName());
            serial.close();

    }
    return comList;
}

//int SetCom(const char *m_sPort, int BaudRate, int Databit, char *parity, char *stopbit)
//ret=SetCom("COM1",115200,8,"NONE","1");

bool SerialRfid::setSerial(QString com, int bot)
{
    close();
    if(!SetCom(com.toLatin1().data(),bot,8,"NONE","1")){
        qDebug()<<"链接成功";
        return true;
    }
    return false;
}

QString SerialRfid::getOneUID()
{
    BYTE sUID[8];//uid 为8位
    DWORD tag=0;
    if(!Inventory(sUID,39,tag)){
        return QByteArray((char *)sUID,8).toHex();//8位数据转为十六进制字符。
    }
    return NULL;
}

QList<QString> *SerialRfid::getAllUID()
{
    BYTE sUID[100];//uid 为8位
    DWORD tag=0;
    if(!Inventory(sUID,7,tag)){
        QList<QString> *sl =new QList<QString>;
        char * cptr=(char *)sUID;
        for(int i=0;i<tag;i++){
            sl->append(QByteArray(cptr,8).toHex());//8位数据转为十六进制字符。
            cptr+=8;//向后滑动8位，读取下一uid
        }
        return sl;
    }
    return NULL;
}

void SerialRfid::startSelfMotion()
{
    timer->start(100);//0.1秒发送一次信息
}

void SerialRfid::closeSelfMotion()
{
    timer->stop();          //关闭计时器
}

QList<QString> *SerialRfid::getUidList()//得到自动寻卡过程中uid的列表
{
    return this->uidsList;
}

void SerialRfid::clear()        //清除uid列表
{
    uidsList->clear();
}

void SerialRfid::close()    //关闭串口
{
    CloseCom();
}


