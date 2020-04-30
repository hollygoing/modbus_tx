#include "mcmodbusrtu.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "qdebug.h"
#include <QTimer>

McModbusRTU::McModbusRTU(QObject *parent) : QObject(parent)
{
    Tick=new QTimer(this);
    connect(Tick, SIGNAL(timeout()), this, SLOT(Tick_Server()));
    serial_enable=0;//情况连接状态
    Read_TempLong=0;//接收数据长度备份
}
/*
 * 连接设备
 * Port设备端口号或者设备地址
 * 返回 大于5则连接成功，否则连接失败
*/
int McModbusRTU::LinkUart(QString Port){
    int Err=0;
    myserial = new QSerialPort;
    //设置串口名
    myserial->setPortName(Port);
    //打开串口
    Err += myserial->open(QIODevice::ReadWrite);
    //设置波特率
    Err += myserial->setBaudRate(QSerialPort::Baud38400);
    //设置数据位数
    Err += myserial->setDataBits(QSerialPort::Data8);
     //设置奇偶校验
    Err += myserial->setParity(QSerialPort::NoParity);
    //设置停止位
    Err += myserial->setStopBits(QSerialPort::OneStop);
    //设置流控制
    Err += myserial->setFlowControl(QSerialPort::NoFlowControl);
    //连接信号量
    connect(myserial, &QSerialPort::readyRead, this, &McModbusRTU::Read_Data);

    if(Err>5){
        Tick->start(5);
        serial_enable=1;//标记当前已连接
    }
    return Err;
}
//分时处理消息
void McModbusRTU::Tick_Server(){
    int i;
    if(Read_Temp.length()>0){
        if(Read_Temp.length()>Read_TempLong){
            Read_TempLong=Read_Temp.length();
        }else{
            //数据接收
            Data_temp.clear();
            for(i=3;i<Read_Temp.length()-2;i++)Data_temp.append(Read_Temp[i]);
            emit McModbusRTUMessage(Read_Temp[0],Read_Temp[1],Data_temp);
            Read_TempLong=0;
            Read_Temp.clear();
        }
    }
}

void McModbusRTU::Request06(unsigned char id, unsigned int address, unsigned short data){
    if(serial_enable==0)return;
    unsigned char SenData[8];
    SenData[0]=id;
    SenData[1]=06; //写单个寄存器 调试器按照标准的来写的
    SenData[2]=address>>8;
    SenData[3]=address&0xFF;
    SenData[4]=data>>8;
    SenData[5]=data&0xFF;
    SenData[6]=0x00;
    SenData[7]=0x00;
    myserial->write((const char *)SenData,8);
}

void McModbusRTU::Request03(unsigned char id, unsigned int address, unsigned short dLong){
    if(serial_enable==0)return;
    unsigned char SenData[8];
    SenData[0]=id;
    SenData[1]=03;
    SenData[2]=address>>8;
    SenData[3]=address&0xFF;
    SenData[4]=dLong>>8;
    SenData[5]=dLong&0xFF;
    SenData[6]=0x00;
    SenData[7]=0x00;
    myserial->write((const char *)SenData,8);
}

void McModbusRTU::Request16(unsigned char id, unsigned int address, int dLong, unsigned short *data){
    if(serial_enable==0)return;
    unsigned char SenData[9+dLong*2];
    int i;

    SenData[0]=id;
    SenData[1]=16;
    SenData[2]=address>>8;
    SenData[3]=address&0xFF;
    SenData[4]=dLong>>8;
    SenData[5]=dLong&0xFF;
    SenData[6]=dLong*2;

    for(i=0;i<dLong;i++){
        SenData[7+2*i]=data[i]>>8;
        SenData[8+2*i]=data[i]&0xFF;
    }
    SenData[7+dLong*2]=0x00;
    SenData[8+dLong*2]=0x00;
    myserial->write((const char *)SenData,9+dLong*2);
}

void McModbusRTU::Request04(unsigned char id, unsigned int address, unsigned short dLong){
    if(serial_enable==0)return;
    unsigned char SenData[8];
    SenData[0]=id;
    SenData[1]=04;
    SenData[2]=address>>8;
    SenData[3]=address&0xFF;
    SenData[4]=dLong>>8;
    SenData[5]=dLong&0xFF;
    SenData[6]=0x00;
    SenData[7]=0x00;
    myserial->write((const char *)SenData,8);
}

//串口数据接收
void McModbusRTU::Read_Data(){
    Read_Temp.append(myserial->readAll());
    if(Read_Temp.length()>1000)Read_Temp.clear();
}
//关闭串口，释放资源
void McModbusRTU::CloseUart(){
    if(serial_enable){
        myserial->clear();
        myserial->close();
        myserial->deleteLater();
        Tick->stop();
    }
}
