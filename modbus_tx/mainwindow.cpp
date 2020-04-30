#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

void sendDate();

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mmrtu=new McModbusRTU();
    connect(mmrtu,&McModbusRTU::McModbusRTUMessage,this,&MainWindow::McModbusRTUMessage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::McModbusRTUMessage(unsigned char mID, int mFunction, QByteArray Data){
    //这里处理所有接收到的数据 注意字符、数字等类型
    ShortToOther ChangeTemp;
    for(int i=0;i<2;i++){
        ChangeTemp.mshort[i]=(Data[i*2]<<8)|(Data[i*2+1]&0xFF);
    }
     qDebug()<<ChangeTemp.mfloat;
}

void MainWindow::on_pushButton_4_clicked() //判断是否连接成功
{
    if(mmrtu->LinkUart(ui->lineEdit_3->text())>5){
        statusBar()->showMessage("连接成功");
    }
}

void MainWindow::on_pushButton_5_clicked() //模拟触发函数
{
    s_work();
}
