#include "weightform.h"
#include "ui_weightform.h"


WeightForm::WeightForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WeightForm)
{
    ui->setupUi(this);
    sr=new SerialRfid();
    ui->getUidButton->setStyleSheet("QPushButton{background-color:#63B8FF;color: white;   border-radius: 10px;  border: 2px groove gray; border-style: outset;}"

                                               "QPushButton:hover{background-color:white; color: #63B8FF;}"

                                              "QPushButton:pressed{background-color:red;border-style: inset; }"

                                               );
    ui->pushButton->setStyleSheet("QPushButton{background-color:#63B8FF;color: white;   border-radius: 10px;  border: 2px groove gray; border-style: outset;}"

                                               "QPushButton:hover{background-color:white; color: #63B8FF;}"

                                              "QPushButton:pressed{background-color:red;border-style: inset; }"

                                               );
    ui->searchButton->setStyleSheet("QPushButton{background-color:#63B8FF;color: white;   border-radius: 10px;  border: 2px groove gray; border-style: outset;}"

                                               "QPushButton:hover{background-color:white; color: #63B8FF;}"

                                              "QPushButton:pressed{background-color:red;border-style: inset; }"

                                               );
}

WeightForm::~WeightForm()
{
    delete ui;
}

void WeightForm::setFeedSql(FeedSql * f)
{
    this->feedsql=f;
}

void WeightForm::on_searchButton_clicked()
{
    ui->atype->setText("");
    ui->age->setText("");
    ui->weight->setText("");
    QString uid=ui->uidEdit->toPlainText();
    qDebug()<<uid;
    if(uid==NULL) return;
    AnimalInfo * ainfo=feedsql->getAnimalInfo(uid);

    if(ainfo==NULL){
        QMessageBox::critical(0,QObject::tr("Cannot find out the uid"),"该卡号不存在！",QMessageBox::Cancel
                              );
        return;
    }

    ui->atype->setText(ainfo->name);
    ui->age->setText(QString("%1").arg(QDate::currentDate().toJulianDay()-ainfo->birth.toJulianDay()));
    ui->weight->setText(QString("%1").arg(ainfo->weight));
    //查询完成
}

void WeightForm::on_getUidButton_clicked()
{
    QString uid=sr->getOneUID();
    if(uid==NULL||uid==""){
        qDebug()<<"没有查到卡号";
        return;
    }
    else{
        ui->uidEdit->setText(uid);
        on_searchButton_clicked();//查询
    }
}

void WeightForm::on_pushButton_clicked()
{
    //获取值
    QString w=ui->weightEdit->toPlainText();

    QString uid=ui->uidEdit->toPlainText();
    if(uid==NULL||!feedsql->setAnimalWeight(uid,w.toDouble())){
        //uid为空，或设置失败。
        QMessageBox::critical(0,QObject::tr("finish"),"设置失败！",QMessageBox::Cancel);
    }
    else{
         QMessageBox::information(this,"提示","设置成功");
        on_searchButton_clicked();
    }
}
