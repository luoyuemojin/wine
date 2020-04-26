#include "userregister.h"
#include "ui_userregister.h"
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
userregister::userregister(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userregister)
{
    ui->setupUi(this);
    usersql2 = new usersql;
    usersql2->createConnection();
}

userregister::~userregister()
{
    delete ui;
}
void userregister::on_zhucetijiao_clicked()
{

    UserInfo str;
    QString s1=ui->zhucepassword->text();
    QString s2=ui->zhucepassword2->text();
    qDebug()<<s1<<" "<<s2;
    if(s1==s2)
    {
    str.name2=ui->zhuceuser->text();
    str.email=ui->zhuceemail->text();
    str.password=ui->zhucepassword->text();
    str.tel=ui->zhucetel->text();
    qDebug()<<str.name2<<" "<<str.password<<" "<<str.tel<<" "<<str.email;
    if(usersql2->adduser(str)==true)
    {

        QMessageBox::information(this,"提示","插入成功");
    }
    }else
    {
        QMessageBox::information(this,"提示","两次密码不一致,请重新输入");
    }

}

void userregister::on_return_2_clicked()
{
      //this->hide();

}
