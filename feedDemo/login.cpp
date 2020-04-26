#include "login.h"
#include "ui_login.h"
#include<smtp.h>
login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    mainwindows = new MainWindow;
    userr = new userregister;
    usersql1 = new  usersql;
    usersql1->createConnection();

}

login::~login()
{
    delete ui;
}

void login::on_yanzheng4_clicked()//验证码
{

    QString name3=ui->zhanghu->text();

    if(name3!=NULL)
{
    qDebug()<<name3;
    UserInfo *lists=usersql1->getUserInfo(name3);
    srand((int)time(0));
    yanzhengma2=1000+rand()%9999;
    QString ss= QString::number(yanzhengma2);
    qDebug()<<yanzhengma2;
    QString str="管理系统验证码";
    qDebug()<<lists->name2;
    if(lists->name2!=NULL)
    {
     Smtp smtp("hu716811@163.com","OXKQFYYTQZDXVAJU");
     smtp.send(lists->email.toLatin1().data(),str,ss.toLatin1().data());
    }

    else
    {
          QMessageBox::information(this,"提示","未注册,请先注册");
    }
 }
    else
    {

        QMessageBox::information(this,"提示","请输入正确的账户");
    }

}

void login::on_login_2_clicked()//登录
{

      QString name6=ui->zhanghu->text();
      UserInfo *lists=usersql1->getUserInfo(name6);
      QString yanzheng5=ui->yanzheng2->text();
      if(lists->name2==NULL)
       {
           QMessageBox::information(this,"提示","账户不存在");
           dengluyanzhneg=false;

       } else if((ui->mima->text()==lists->password)&&(yanzheng5==QString::number(yanzhengma2)))
            {
                dengluyanzhneg=true;
                this->hide();
                mainwindows->show();

            }
            else if(yanzheng5!=QString::number(yanzhengma2))
                {
                 QMessageBox::information(this,"提示","验证码不正确");
                 dengluyanzhneg=false;
            }
            else if(ui->mima->text()!=lists->password)
            {
                 QMessageBox::information(this,"提示","密码不正确");
                 dengluyanzhneg=false;
            }


}

void login::on_reginter_clicked()
{
    this->hide();
    userr->show();
}
