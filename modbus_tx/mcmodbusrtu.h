#ifndef MCMODBUSRTU_H
#define MCMODBUSRTU_H

#include <QObject>
#include <QSerialPort>
#include <QTimer>

class McModbusRTU : public QObject
{
    Q_OBJECT
public:
    explicit McModbusRTU(QObject *parent = NULL);
    int LinkUart(QString Port);//连接串口
    void CloseUart();//关闭串口
    void Request03(unsigned char id, unsigned int address, unsigned short dLong);//批量读保持寄存器
    void Request04(unsigned char id, unsigned int address, unsigned short dLong);//批量读输入寄存器
    void Request06(unsigned char id, unsigned int address, unsigned short data);//单个写保持寄存器
    void Request16(unsigned char id, unsigned int address, int dLong, unsigned short *data);//批量写保持寄存器
private:
    void McMBCRC16(unsigned char *pDataIn, int iLenIn, unsigned int *pCRCOut);
signals:
    void McModbusRTUMessage(unsigned char mID,int mFunction,QByteArray Data);//消息返回函数，注意“高位对应内存地位”

public slots:
    void Read_Data();//串口数据读取函数
    void Tick_Server();//串口分时接收
private:
    bool serial_enable; //bool占1位
    QByteArray Read_Temp; //理解为缓冲区
    int Read_TempLong;
    QTimer *Tick;

    QByteArray Data_temp;

public:
    QSerialPort* myserial; //串口句柄
};

#endif // MCMODBUSRTU_H
