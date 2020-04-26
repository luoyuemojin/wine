#include "seeform.h"
#include "ui_seeform.h"

seeForm::seeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::seeForm)
{
    ui->setupUi(this);
    ser = new SerialRfid;
    wines = new WineSql;
    winesql = new WineSql;

    ui->chakanxinxi->setStyleSheet("QPushButton{background-color:#63B8FF;color: white;   border-radius: 10px;  border: 2px groove gray; border-style: outset;}"

                                               "QPushButton:hover{background-color:white; color: #63B8FF;}"

                                              "QPushButton:pressed{background-color:red;border-style: inset; }"

                                               );
    ui->deletexinxi->setStyleSheet("QPushButton{background-color:#63B8FF;color: white;   border-radius: 10px;  border: 2px groove gray; border-style: outset;}"

                                               "QPushButton:hover{background-color:white; color: #63B8FF;}"

                                              "QPushButton:pressed{background-color:red;border-style: inset; }"

                                               );

   ui->clear->setStyleSheet("QPushButton{background-color:#63B8FF;color: white;   border-radius: 10px;  border: 2px groove gray; border-style: outset;}"

    "QPushButton:hover{background-color:white; color: #63B8FF;}"

   "QPushButton:pressed{background-color:red;border-style: inset; }"

    );
  //  setFixedSize(1000,800);

}

seeForm::~seeForm()
{
    delete ui;
}

void seeForm::setWineSql(WineSql *f)
{
    this->winesql=f;
}

void seeForm::on_chakanxinxi_clicked()
{

    WineInfo *lists=winesql->getWineInfo(ser->getOneUID());
    //  AnimalInfo *lists=feedsql->getAnimalInfo("002");//检测

   WineInfo * winfo=winesql->getWineInfo(ser->getOneUID());
   if(winfo==NULL){
         ui->xianshixinxi->insertPlainText("编号: ");
         ui->xianshixinxi->insertPlainText(ser->getOneUID());
         ui->xianshixinxi->insertPlainText(" 无此卡的任何信息,请先注册后再查询\n");
         QMessageBox::information(this,"提示","无此卡的信息");
    }else
   {
    ui->xianshixinxi->insertPlainText("第"+QString("%1").arg(i)+"次查询:\n");
    ui->xianshixinxi->insertPlainText("编号: ");
    ui->xianshixinxi->insertPlainText(lists->uid);
    ui->xianshixinxi->insertPlainText("\n");
    ui->xianshixinxi->insertPlainText("种类:");
    ui->xianshixinxi->insertPlainText(lists->name);
    ui->xianshixinxi->insertPlainText("\n");
    ui->xianshixinxi->insertPlainText("年份:");
    ui->xianshixinxi->insertPlainText(lists->birth.toString());
    ui->xianshixinxi->insertPlainText("\n");
    ui->xianshixinxi->insertPlainText("数量:");
    ui->xianshixinxi->insertPlainText(QString("%1").arg(lists->number));
    ui->xianshixinxi->insertPlainText("\n");
    ui->xianshixinxi->insertPlainText("价值:");
    ui->xianshixinxi->insertPlainText(QString("%1").arg(lists->values));
    ui->xianshixinxi->insertPlainText("\n");
    ui->xianshixinxi->insertPlainText("\n");
    i++;
   }
}

void seeForm::on_deletexinxi_clicked()
{
    WineInfo * winfo=winesql->getWineInfo(ser->getOneUID());

    if(winfo==NULL){
        ui->xianshixinxi->insertPlainText("编号: ");
        ui->xianshixinxi->insertPlainText(ser->getOneUID());
        ui->xianshixinxi->insertPlainText(" 无此卡的任何信息,无法删除\n");
        QMessageBox::information(this,"提示","无此卡的信息,无法删除");
    }
    else{
    ui->xianshixinxi->insertPlainText("编号: ");
    ui->xianshixinxi->insertPlainText(ser->getOneUID());
    ui->xianshixinxi->insertPlainText("  已被删除\n");
    winesql->delWine(ser->getOneUID());
    QMessageBox::information(this,"提示","删除成功");
    }
}

void seeForm::on_clear_clicked()
{
    ui->xianshixinxi->setText("");
    i=1;
}
