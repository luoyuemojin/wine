#include "comform.h"
#include "ui_comform.h"

comForm::comForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::comForm)
{

    ui->setupUi(this);
    ser = new SerialRfid;
    wines = new WineSql;
   // setFixedSize(1000,800);

  foreach (const QSerialPortInfo &info,QSerialPortInfo::availablePorts()) //查找可用的串口并将串口名字写在下拉列表里
   {

          qDebug()<<info.portName();
          ui->PortBox->addItem(info.portName());
   }
         //feeds->createConnection();

  ui->OpenSerialButton->setStyleSheet("QPushButton{background-color:#63B8FF;color: white;   border-radius: 10px;  border: 2px groove gray; border-style: outset;}"

                                             "QPushButton:hover{background-color:white; color: #63B8FF;}"

                                            "QPushButton:pressed{background-color:red;border-style: inset; }"

                                             );
  ui->closeSerialButton->setStyleSheet("QPushButton{background-color:#63B8FF;color: white;   border-radius: 10px;  border: 2px groove gray; border-style: outset;}"

                                             "QPushButton:hover{background-color:white; color: #63B8FF;}"

                                            "QPushButton:pressed{background-color:red;border-style: inset; }"

                                             );

}

comForm::~comForm()
{
    delete ui;
}

void comForm::on_OpenSerialButton_clicked()//打开串口
{
    bool ok;
    BYTE sUID[8];//uid 为8位
    DWORD tag=0;
    QString str=ui->BaudBox->currentText();//将字符串波特率转化为整型
    int bund=str.toInt(&ok,10);
    QString chuankou=ui->PortBox->currentText();//读取选择的串口
  //  qDebug()<<chuankou<<endl;
     if(ser->setSerial(chuankou,bund))
    {
        QMessageBox::information(this,"提示","连接成功");
        //关闭菜单使能
        ui->PortBox->setEnabled(false);
        ui->BaudBox->setEnabled(false);
        ui->BitBox->setEnabled(false);
        ui->ParityBox->setEnabled(false);
        ui->StopBox->setEnabled(false);
    }
    else
    {
        QMessageBox::information(this,"提示","连接失败");
        //如果连接失败,菜单使能为开
        ui->PortBox->setEnabled(true);
        ui->BaudBox->setEnabled(true);
        ui->BitBox->setEnabled(true);
        ui->ParityBox->setEnabled(true);
        ui->StopBox->setEnabled(true);

    }



}

void comForm::on_closeSerialButton_clicked()//关闭串口
{
    //恢复设置使能
    ui->PortBox->setEnabled(true);
    ui->BaudBox->setEnabled(true);
    ui->BitBox->setEnabled(true);
    ui->ParityBox->setEnabled(true);
    ui->StopBox->setEnabled(true);
    ser->close();
    QMessageBox::information(this,"提示","关闭成功");

}
