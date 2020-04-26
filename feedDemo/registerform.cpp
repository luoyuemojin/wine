#include "registerform.h"
#include "ui_registerform.h"
#include <QtCore/QTextCodec>
registerForm::registerForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registerForm)
{
    ui->setupUi(this);
    ser = new SerialRfid;
    wines = new WineSql;

   // setFixedSize(1000,800);
    ui->date->setCalendarPopup(true);
    wines->createConnection();
    ui->zhucexinxitijaio->setStyleSheet("QPushButton{background-color:#63B8FF;color: white;   border-radius: 10px;  border: 2px groove gray; border-style: outset;}"

                                               "QPushButton:hover{background-color:white; color: #63B8FF;}"

                                              "QPushButton:pressed{background-color:red;border-style: inset; }"

                                               );
    ui->onecard->setStyleSheet("QPushButton{background-color:#63B8FF;color: white;   border-radius: 10px;  border: 2px groove gray; border-style: outset;}"

                                               "QPushButton:hover{background-color:white; color: #63B8FF;}"

                                              "QPushButton:pressed{background-color:red;border-style: inset; }"

                                               );
    ui->pushButton_3->setStyleSheet("QPushButton{background-color:#63B8FF;color: white;   border-radius: 10px;  border: 2px groove gray; border-style: outset;}"

                                               "QPushButton:hover{background-color:white; color: #63B8FF;}"

                                              "QPushButton:pressed{background-color:red;border-style: inset; }"

                                               );

}

registerForm::~registerForm()
{
    delete ui;
}

void registerForm::setWineSql(WineSql *f)
{
    this->winesql=f;
}

void registerForm::on_zhucexinxitijaio_clicked()//注册信息
{
     WineInfo stru;
     stru.uid=ser->getOneUID();
     //stru.uid="110";
     stru.name=ui->winelei->text();
     QDate date = ui->date->date();
     stru.number=ui->number->text().toInt();
     stru.values=ui->winevalue->text().toDouble();
     stru.birth=date;

    qDebug()<<stru.uid<<endl;
    qDebug()<<stru.name<<endl;
    qDebug()<<stru.birth<<endl;
    qDebug()<<stru.number<<endl;
    qDebug()<<stru.values<<endl;
    if(winesql->addWine(stru)==true)
    {
        QMessageBox::information(this,"提示","插入成功");
    }
}


void registerForm::on_onecard_clicked()
{
    //BYTE sUID[8];//uid 为8位
    //DWORD tag=0;
   /*if(!Inventory(sUID,39,tag)){
        qDebug()<<"获取成功";
        qDebug()<<"it is"<<QByteArray((char *)sUID,8).toHex();//8位数据转为十六进制字符。
    }
    ui->uid->setText(QByteArray((char *)sUID,8).toHex());*/
    ui->uid->setText(ser->getOneUID());

}

void registerForm::on_pushButton_3_clicked()//重置按钮
{
       ui->winelei->setText(" ");
       ui->uid->setText(" ");
       ui->number->setText(" ");
       ui->winevalue->setText(" ");
}
