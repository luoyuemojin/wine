#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    f=new WineSql();
    if(!f->createConnection()) exit(0);//链接数据库
    actionList=new QList<QAction *>;
    widgetList=new QList<QWidget *>;
    actionList->append(ui->action_0);
    actionList->append(ui->action_1);
    actionList->append(ui->action_2);
    actionList->append(ui->action_3);
    actionList->append(ui->action_4);
    actionList->append(ui->action_5);
    actionList->append(ui->action_6);
    widgetList->append(ui->widget);
    widgetList->append(ui->widget_2);
    widgetList->append(ui->widget_3);


    widgetList->append(ui->widget_6);


    for(int k=0;k<widgetList->size();k++){       //隐藏所有界面
            widgetList->at(k)->setVisible(false);

    }
    widgetList->at(0)->setVisible(true);
    for(int i =0;i<actionList->size();i++){
        connect(actionList->at(i),SIGNAL(triggered(bool)),this,SLOT(actionSlot()));
    }   //绑定槽函数
    //设置数据库连接
    ((registerForm *)ui->widget_2)->setWineSql(this->f);
    ((seeForm *)ui->widget_3)->setWineSql(this->f);


}

MainWindow::~MainWindow()
{
    this->close();
    delete ui;
}

void MainWindow::actionSlot()
{
    QAction * a=(QAction*)sender();//获取信号发送者
    for(int k=0;k<widgetList->size();k++){       //隐藏所有界面
            widgetList->at(k)->setVisible(false);

    }
    for(int i=0;i<actionList->size();i++){
       if(a==actionList->at(i))
       {     widgetList->at(i)->setVisible(true);//显示发送信号的action对应的widget;
           this->setVisible(true);
            //qDebug()<<"第"<<i;
       }
    }
}
