#ifndef WIDGET_H
#define WIDGET_H
#define BGCOLOR #5555ff
#define FONTCOLOR white
#include <QWidget>
#include <QKeyEvent>
#include<QLabel>
#include<string>
using std::string;
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void SetbunkerPage();
    void update_data();
    bool getIO1() const;
    void setIO1(bool value);

    bool getCS1() const;
    void setCS1(bool value);

    bool getCS2() const;
    void setCS2(bool value);

    bool getIO2() const;
    void setIO2(bool value);

    bool getIN() const;
    void setIN(bool value);

    bool getSP() const;
    void setSP(bool value);

    bool getKEY() const;
    void setKEY(bool value);

    bool getChuankou1() const;
    void setChuankou1(bool value);

    bool getChuankou2() const;
    void setChuankou2(bool value);

    bool getWangkou() const;
    void setWangkou(bool value);

    void updateMainPageParams();
protected:
    virtual void keyPressEvent(QKeyEvent *ev);
private:
    Ui::Widget *ui;
    void init();
    void restore();
    void init_belt(int pageNum);//设置皮带
    void init_machine(int pageNum);//
    QList<QLabel *> fun_list;
    void setRedColor(string name);//设置部件字体为红色
    void setGreenColor(string name);//设置部件字体为绿色
    void setWhiteColor(string name);//设置部件字体为白色
    void setContent(string name,string content);//更改部件显示内容
    int nowPage;
    int numOfPage;
    //***************************************
    bool CS1;
    bool CS2;
    bool IO1;
    bool IO2;
    bool IN;
    bool SP;
    bool KEY;
    bool chuankou1;//串口1
    bool chuankou2;//窗口2
    bool wangkou;//网口

    //***************************************

    //********************杨屹部分*********************
public:
       bool getPage6_param14() const;
       void setPage6_param14(bool value);

       bool getPage6_param22() const;
       void setPage6_param22(bool value);

       bool getPage6_param24() const;
       void setPage6_param24(bool value);

       bool getPage6_param32() const;
       void setPage6_param32(bool value);

       bool getPage6_param34() const;
       void setPage6_param34(bool value);

       bool getMotor_state11() const;
       void setMotor_state11(bool value);

       double getMotor_state31() const;
       void setMotor_state31(double value);

       double getMotor_state41() const;
       void setMotor_state41(double value);

       double getMotor_state42() const;
       void setMotor_state42(double value);

       double getMotor_state43() const;
       void setMotor_state43(double value);

       double getMotor_state51() const;
       void setMotor_state51(double value);

       double getMotor_state52() const;
       void setMotor_state52(double value);

       double getMotor_state53() const;
       void setMotor_state53(double value);

       bool getMotor_state12() const;
       void setMotor_state12(bool value);

       double getMotor_state32() const;
       void setMotor_state32(double value);

       double getMotor_state44() const;
       void setMotor_state44(double value);

       double getMotor_state45() const;
       void setMotor_state45(double value);

       double getMotor_state46() const;
       void setMotor_state46(double value);

       double getMotor_state54() const;
       void setMotor_state54(double value);

       double getMotor_state55() const;
       void setMotor_state55(double value);

       double getMotor_state56() const;
       void setMotor_state56(double value);

       bool getMotor_state13() const;
       void setMotor_state13(bool value);

       double getMotor_state33() const;
       void setMotor_state33(double value);

       double getMotor_state47() const;
       void setMotor_state47(double value);

       double getMotor_state48() const;
       void setMotor_state48(double value);

       double getMotor_state49() const;
       void setMotor_state49(double value);

       double getMotor_state57() const;
       void setMotor_state57(double value);

       double getMotor_state58() const;
       void setMotor_state58(double value);

       double getMotor_state59() const;
       void setMotor_state59(double value);

       bool getMotor_state14() const;
       void setMotor_state14(bool value);

       double getMotor_state34() const;
       void setMotor_state34(double value);

       double getMotor_state410() const;
       void setMotor_state410(double value);

       double getMotor_state411() const;
       void setMotor_state411(double value);

       double getMotor_state412() const;
       void setMotor_state412(double value);

       double getMotor_state510() const;
       void setMotor_state510(double value);

       double getMotor_state511() const;
       void setMotor_state511(double value);

       double getMotor_state512() const;
       void setMotor_state512(double value);

       bool getMotor_state15() const;
       void setMotor_state15(bool value);

       double getMotor_state35() const;
       void setMotor_state35(double value);

       double getMotor_state413() const;
       void setMotor_state413(double value);

       double getMotor_state414() const;
       void setMotor_state414(double value);

       double getMotor_state415() const;
       void setMotor_state415(double value);

       double getMotor_state513() const;
       void setMotor_state513(double value);

       double getMotor_state514() const;
       void setMotor_state514(double value);

       double getMotor_state515() const;
       void setMotor_state515(double value);

       bool getMotor_state16() const;
       void setMotor_state16(bool value);

       double getMotor_state36() const;
       void setMotor_state36(double value);

       double getMotor_state416() const;
       void setMotor_state416(double value);

       double getMotor_state417() const;
       void setMotor_state417(double value);

       double getMotor_state418() const;
       void setMotor_state418(double value);

       double getMotor_state516() const;
       void setMotor_state516(double value);

       double getMotor_state517() const;
       void setMotor_state517(double value);

       double getMotor_state518() const;
       void setMotor_state518(double value);

       bool getPage6_param14_2() const;
       void setPage6_param14_2(bool value);

       bool getPage6_param22_2() const;
       void setPage6_param22_2(bool value);

       bool getPage6_param24_2() const;
       void setPage6_param24_2(bool value);

       bool getPage6_param32_2() const;
       void setPage6_param32_2(bool value);

       bool getPage6_param34_2() const;
       void setPage6_param34_2(bool value);

       bool getMotor_state11_2() const;
       void setMotor_state11_2(bool value);

       double getMotor_state31_2() const;
       void setMotor_state31_2(double value);

       double getMotor_state41_2() const;
       void setMotor_state41_2(double value);

       double getMotor_state42_2() const;
       void setMotor_state42_2(double value);

       double getMotor_state43_2() const;
       void setMotor_state43_2(double value);

       double getMotor_state51_2() const;
       void setMotor_state51_2(double value);

       double getMotor_state52_2() const;
       void setMotor_state52_2(double value);

       double getMotor_state53_2() const;
       void setMotor_state53_2(double value);

       bool getMotor_state12_2() const;
       void setMotor_state12_2(bool value);

       double getMotor_state32_2() const;
       void setMotor_state32_2(double value);

       double getMotor_state44_2() const;
       void setMotor_state44_2(double value);

       double getMotor_state45_2() const;
       void setMotor_state45_2(double value);

       double getMotor_state46_2() const;
       void setMotor_state46_2(double value);

       double getMotor_state54_2() const;
       void setMotor_state54_2(double value);

       double getMotor_state55_2() const;
       void setMotor_state55_2(double value);

       double getMotor_state56_2() const;
       void setMotor_state56_2(double value);

       bool getMotor_state13_2() const;
       void setMotor_state13_2(bool value);

       double getMotor_state33_2() const;
       void setMotor_state33_2(double value);

       double getMotor_state47_2() const;
       void setMotor_state47_2(double value);

       double getMotor_state48_2() const;
       void setMotor_state48_2(double value);

       double getMotor_state49_2() const;
       void setMotor_state49_2(double value);

       double getMotor_state57_2() const;
       void setMotor_state57_2(double value);

       double getMotor_state58_2() const;
       void setMotor_state58_2(double value);

       double getMotor_state59_2() const;
       void setMotor_state59_2(double value);

       bool getMotor_state14_2() const;
       void setMotor_state14_2(bool value);

       double getMotor_state34_2() const;
       void setMotor_state34_2(double value);

       double getMotor_state410_2() const;
       void setMotor_state410_2(double value);

       double getMotor_state411_2() const;
       void setMotor_state411_2(double value);

       double getMotor_state412_2() const;
       void setMotor_state412_2(double value);

       double getMotor_state510_2() const;
       void setMotor_state510_2(double value);

       double getMotor_state511_2() const;
       void setMotor_state511_2(double value);

       double getMotor_state512_2() const;
       void setMotor_state512_2(double value);

       bool getMotor_state15_2() const;
       void setMotor_state15_2(bool value);

       double getMotor_state35_2() const;
       void setMotor_state35_2(double value);

       double getMotor_state413_2() const;
       void setMotor_state413_2(double value);

       double getMotor_state414_2() const;
       void setMotor_state414_2(double value);

       double getMotor_state415_2() const;
       void setMotor_state415_2(double value);

       double getMotor_state513_2() const;
       void setMotor_state513_2(double value);

       double getMotor_state514_2() const;
       void setMotor_state514_2(double value);

       double getMotor_state515_2() const;
       void setMotor_state515_2(double value);

       bool getMotor_state16_2() const;
       void setMotor_state16_2(bool value);

       double getMotor_state36_2() const;
       void setMotor_state36_2(double value);

       double getMotor_state416_2() const;
       void setMotor_state416_2(double value);

       double getMotor_state417_2() const;
       void setMotor_state417_2(double value);

       double getMotor_state418_2() const;
       void setMotor_state418_2(double value);

       double getMotor_state516_2() const;
       void setMotor_state516_2(double value);

       double getMotor_state517_2() const;
       void setMotor_state517_2(double value);

       double getMotor_state518_2() const;
       void setMotor_state518_2(double value);

       bool getPage6_param14_3() const;
       void setPage6_param14_3(bool value);

       bool getPage6_param22_3() const;
       void setPage6_param22_3(bool value);

       bool getPage6_param24_3() const;
       void setPage6_param24_3(bool value);

       bool getPage6_param32_3() const;
       void setPage6_param32_3(bool value);

       bool getPage6_param34_3() const;
       void setPage6_param34_3(bool value);

       bool getMotor_state11_3() const;
       void setMotor_state11_3(bool value);

       double getMotor_state31_3() const;
       void setMotor_state31_3(double value);

       double getMotor_state41_3() const;
       void setMotor_state41_3(double value);

       double getMotor_state42_3() const;
       void setMotor_state42_3(double value);

       double getMotor_state43_3() const;
       void setMotor_state43_3(double value);

       double getMotor_state51_3() const;
       void setMotor_state51_3(double value);

       double getMotor_state52_3() const;
       void setMotor_state52_3(double value);

       double getMotor_state53_3() const;
       void setMotor_state53_3(double value);

       bool getMotor_state12_3() const;
       void setMotor_state12_3(bool value);

       double getMotor_state32_3() const;
       void setMotor_state32_3(double value);

       double getMotor_state44_3() const;
       void setMotor_state44_3(double value);

       double getMotor_state45_3() const;
       void setMotor_state45_3(double value);

       double getMotor_state46_3() const;
       void setMotor_state46_3(double value);

       double getMotor_state54_3() const;
       void setMotor_state54_3(double value);

       double getMotor_state55_3() const;
       void setMotor_state55_3(double value);

       double getMotor_state56_3() const;
       void setMotor_state56_3(double value);

       bool getMotor_state13_3() const;
       void setMotor_state13_3(bool value);

       double getMotor_state33_3() const;
       void setMotor_state33_3(double value);

       double getMotor_state47_3() const;
       void setMotor_state47_3(double value);

       double getMotor_state48_3() const;
       void setMotor_state48_3(double value);

       double getMotor_state49_3() const;
       void setMotor_state49_3(double value);

       double getMotor_state57_3() const;
       void setMotor_state57_3(double value);

       double getMotor_state58_3() const;
       void setMotor_state58_3(double value);

       double getMotor_state59_3() const;
       void setMotor_state59_3(double value);

       bool getMotor_state14_3() const;
       void setMotor_state14_3(bool value);

       double getMotor_state34_3() const;
       void setMotor_state34_3(double value);

       double getMotor_state410_3() const;
       void setMotor_state410_3(double value);

       double getMotor_state411_3() const;
       void setMotor_state411_3(double value);

       double getMotor_state412_3() const;
       void setMotor_state412_3(double value);

       double getMotor_state510_3() const;
       void setMotor_state510_3(double value);

       double getMotor_state511_3() const;
       void setMotor_state511_3(double value);

       double getMotor_state512_3() const;
       void setMotor_state512_3(double value);

       bool getMotor_state15_3() const;
       void setMotor_state15_3(bool value);

       double getMotor_state35_3() const;
       void setMotor_state35_3(double value);

       double getMotor_state413_3() const;
       void setMotor_state413_3(double value);

       double getMotor_state414_3() const;
       void setMotor_state414_3(double value);

       double getMotor_state415_3() const;
       void setMotor_state415_3(double value);

       double getMotor_state513_3() const;
       void setMotor_state513_3(double value);

       double getMotor_state514_3() const;
       void setMotor_state514_3(double value);

       double getMotor_state515_3() const;
       void setMotor_state515_3(double value);

       bool getMotor_state16_3() const;
       void setMotor_state16_3(bool value);

       double getMotor_state36_3() const;
       void setMotor_state36_3(double value);

       double getMotor_state416_3() const;
       void setMotor_state416_3(double value);

       double getMotor_state417_3() const;
       void setMotor_state417_3(double value);

       double getMotor_state418_3() const;
       void setMotor_state418_3(double value);

       double getMotor_state516_3() const;
       void setMotor_state516_3(double value);

       double getMotor_state517_3() const;
       void setMotor_state517_3(double value);

       double getMotor_state518_3() const;
       void setMotor_state518_3(double value);

       bool getPage6_param14_4() const;
       void setPage6_param14_4(bool value);

       bool getPage6_param22_4() const;
       void setPage6_param22_4(bool value);

       bool getPage6_param24_4() const;
       void setPage6_param24_4(bool value);

       bool getPage6_param32_4() const;
       void setPage6_param32_4(bool value);

       bool getPage6_param34_4() const;
       void setPage6_param34_4(bool value);

       bool getMotor_state11_4() const;
       void setMotor_state11_4(bool value);

       double getMotor_state31_4() const;
       void setMotor_state31_4(double value);

       double getMotor_state41_4() const;
       void setMotor_state41_4(double value);

       double getMotor_state42_4() const;
       void setMotor_state42_4(double value);

       double getMotor_state43_4() const;
       void setMotor_state43_4(double value);

       double getMotor_state51_4() const;
       void setMotor_state51_4(double value);

       double getMotor_state52_4() const;
       void setMotor_state52_4(double value);

       double getMotor_state53_4() const;
       void setMotor_state53_4(double value);

       bool getMotor_state12_4() const;
       void setMotor_state12_4(bool value);

       double getMotor_state32_4() const;
       void setMotor_state32_4(double value);

       double getMotor_state44_4() const;
       void setMotor_state44_4(double value);

       double getMotor_state45_4() const;
       void setMotor_state45_4(double value);

       double getMotor_state46_4() const;
       void setMotor_state46_4(double value);

       double getMotor_state54_4() const;
       void setMotor_state54_4(double value);

       double getMotor_state55_4() const;
       void setMotor_state55_4(double value);

       double getMotor_state56_4() const;
       void setMotor_state56_4(double value);

       bool getMotor_state13_4() const;
       void setMotor_state13_4(bool value);

       double getMotor_state33_4() const;
       void setMotor_state33_4(double value);

       double getMotor_state47_4() const;
       void setMotor_state47_4(double value);

       double getMotor_state48_4() const;
       void setMotor_state48_4(double value);

       double getMotor_state49_4() const;
       void setMotor_state49_4(double value);

       double getMotor_state57_4() const;
       void setMotor_state57_4(double value);

       double getMotor_state58_4() const;
       void setMotor_state58_4(double value);

       double getMotor_state59_4() const;
       void setMotor_state59_4(double value);

       bool getMotor_state14_4() const;
       void setMotor_state14_4(bool value);

       double getMotor_state34_4() const;
       void setMotor_state34_4(double value);

       double getMotor_state410_4() const;
       void setMotor_state410_4(double value);

       double getMotor_state411_4() const;
       void setMotor_state411_4(double value);

       double getMotor_state412_4() const;
       void setMotor_state412_4(double value);

       double getMotor_state510_4() const;
       void setMotor_state510_4(double value);

       double getMotor_state511_4() const;
       void setMotor_state511_4(double value);

       double getMotor_state512_4() const;
       void setMotor_state512_4(double value);

       bool getMotor_state15_4() const;
       void setMotor_state15_4(bool value);

       double getMotor_state35_4() const;
       void setMotor_state35_4(double value);

       double getMotor_state413_4() const;
       void setMotor_state413_4(double value);

       double getMotor_state414_4() const;
       void setMotor_state414_4(double value);

       double getMotor_state415_4() const;
       void setMotor_state415_4(double value);

       double getMotor_state513_4() const;
       void setMotor_state513_4(double value);

       double getMotor_state514_4() const;
       void setMotor_state514_4(double value);

       double getMotor_state515_4() const;
       void setMotor_state515_4(double value);

       bool getMotor_state16_4() const;
       void setMotor_state16_4(bool value);

       double getMotor_state36_4() const;
       void setMotor_state36_4(double value);

       double getMotor_state416_4() const;
       void setMotor_state416_4(double value);

       double getMotor_state417_4() const;
       void setMotor_state417_4(double value);

       double getMotor_state418_4() const;
       void setMotor_state418_4(double value);

       double getMotor_state516_4() const;
       void setMotor_state516_4(double value);

       double getMotor_state517_4() const;
       void setMotor_state517_4(double value);

       double getMotor_state518_4() const;
       void setMotor_state518_4(double value);


   private:

       //破碎机
       bool page6_param14 = false;   //过载输出
       bool page6_param22 = false;   //准备就绪
       bool page6_param24 = false;   //启动完成
       bool page6_param32 = false;   //急停输出
       bool page6_param34 = false;   //堆煤保护
       //破碎机1#电机
       bool motor_state11 = false;   //电机状态
       double motor_state31 = 0.0;   //电流大小
       double motor_state41 = 0.0;   //绕柱温度1
       double motor_state42 = 0.0;   //绕柱温度2
       double motor_state43 = 0.0;   //绕柱温度3
       double motor_state51 = 0.0;   //轴承温度1
       double motor_state52 = 0.0;   //轴承温度2
       double motor_state53 = 0.0;   //轴承温度3
       //破碎机2#电机
       bool motor_state12 = false;   //电机状态
       double motor_state32 = 0.0;   //电流大小
       double motor_state44 = 0.0;   //绕柱温度1
       double motor_state45 = 0.0;   //绕柱温度2
       double motor_state46 = 0.0;   //绕柱温度3
       double motor_state54 = 0.0;   //轴承温度1
       double motor_state55 = 0.0;   //轴承温度2
       double motor_state56 = 0.0;   //轴承温度3
       //破碎机3#电机
       bool motor_state13 = false;   //电机状态
       double motor_state33 = 0.0;   //电流大小
       double motor_state47 = 0.0;   //绕柱温度1
       double motor_state48 = 0.0;   //绕柱温度2
       double motor_state49 = 0.0;   //绕柱温度3
       double motor_state57 = 0.0;   //轴承温度1
       double motor_state58 = 0.0;   //轴承温度2
       double motor_state59 = 0.0;   //轴承温度3
       //破碎机4#电机
       bool motor_state14 = false;    //电机状态
       double motor_state34 = 0.0;    //电流大小
       double motor_state410 = 0.0;   //绕柱温度1
       double motor_state411 = 0.0;   //绕柱温度2
       double motor_state412 = 0.0;   //绕柱温度3
       double motor_state510 = 0.0;   //轴承温度1
       double motor_state511 = 0.0;   //轴承温度2
       double motor_state512 = 0.0;   //轴承温度3
       //破碎机5#电机
       bool motor_state15 = false;    //电机状态
       double motor_state35 = 0.0;    //电流大小
       double motor_state413 = 0.0;   //绕柱温度1
       double motor_state414 = 0.0;   //绕柱温度2
       double motor_state415 = 0.0;   //绕柱温度3
       double motor_state513 = 0.0;   //轴承温度1
       double motor_state514 = 0.0;   //轴承温度2
       double motor_state515 = 0.0;   //轴承温度3
       //破碎机6#电机
       bool motor_state16 = false;    //电机状态
       double motor_state36 = 0.0;    //电流大小
       double motor_state416 = 0.0;   //绕柱温度1
       double motor_state417 = 0.0;   //绕柱温度2
       double motor_state418 = 0.0;   //绕柱温度3
       double motor_state516 = 0.0;   //轴承温度1
       double motor_state517 = 0.0;   //轴承温度2
       double motor_state518 = 0.0;   //轴承温度3
       //转载机
       bool page6_param14_2 = false;   //过载输出
       bool page6_param22_2 = false;   //准备就绪
       bool page6_param24_2 = false;   //启动完成
       bool page6_param32_2 = false;   //急停输出
       bool page6_param34_2 = false;   //堆煤保护
       //转载机1#电机
       bool motor_state11_2 = false;   //电机状态
       double motor_state31_2 = 0.0;   //电流大小
       double motor_state41_2 = 0.0;   //绕柱温度1
       double motor_state42_2 = 0.0;   //绕柱温度2
       double motor_state43_2 = 0.0;   //绕柱温度3
       double motor_state51_2 = 0.0;   //轴承温度1
       double motor_state52_2 = 0.0;   //轴承温度2
       double motor_state53_2 = 0.0;   //轴承温度3
       //转载机2#电机
       bool motor_state12_2 = false;   //电机状态
       double motor_state32_2 = 0.0;   //电流大小
       double motor_state44_2 = 0.0;   //绕柱温度1
       double motor_state45_2 = 0.0;   //绕柱温度2
       double motor_state46_2 = 0.0;   //绕柱温度3
       double motor_state54_2 = 0.0;   //轴承温度1
       double motor_state55_2 = 0.0;   //轴承温度2
       double motor_state56_2 = 0.0;   //轴承温度3
       //转载机3#电机
       bool motor_state13_2 = false;   //电机状态
       double motor_state33_2 = 0.0;   //电流大小
       double motor_state47_2 = 0.0;   //绕柱温度1
       double motor_state48_2 = 0.0;   //绕柱温度2
       double motor_state49_2 = 0.0;   //绕柱温度3
       double motor_state57_2 = 0.0;   //轴承温度1
       double motor_state58_2 = 0.0;   //轴承温度2
       double motor_state59_2 = 0.0;   //轴承温度3
       //转载机4#电机
       bool motor_state14_2 = false;    //电机状态
       double motor_state34_2 = 0.0;    //电流大小
       double motor_state410_2 = 0.0;   //绕柱温度1
       double motor_state411_2 = 0.0;   //绕柱温度2
       double motor_state412_2 = 0.0;   //绕柱温度3
       double motor_state510_2 = 0.0;   //轴承温度1
       double motor_state511_2 = 0.0;   //轴承温度2
       double motor_state512_2 = 0.0;   //轴承温度3
       //转载机5#电机
       bool motor_state15_2 = false;    //电机状态
       double motor_state35_2 = 0.0;    //电流大小
       double motor_state413_2 = 0.0;   //绕柱温度1
       double motor_state414_2 = 0.0;   //绕柱温度2
       double motor_state415_2 = 0.0;   //绕柱温度3
       double motor_state513_2 = 0.0;   //轴承温度1
       double motor_state514_2 = 0.0;   //轴承温度2
       double motor_state515_2 = 0.0;   //轴承温度3
       //转载机6#电机
       bool motor_state16_2 = false;    //电机状态
       double motor_state36_2 = 0.0;    //电流大小
       double motor_state416_2 = 0.0;   //绕柱温度1
       double motor_state417_2 = 0.0;   //绕柱温度2
       double motor_state418_2 = 0.0;   //绕柱温度3
       double motor_state516_2 = 0.0;   //轴承温度1
       double motor_state517_2 = 0.0;   //轴承温度2
       double motor_state518_2 = 0.0;   //轴承温度3
       //前部运输机
       bool page6_param14_3 = false;   //过载输出
       bool page6_param22_3 = false;   //准备就绪
       bool page6_param24_3 = false;   //启动完成
       bool page6_param32_3 = false;   //急停输出
       bool page6_param34_3 = false;   //堆煤保护
       //前部运输机1#电机
       bool motor_state11_3 = false;   //电机状态
       double motor_state31_3 = 0.0;   //电流大小
       double motor_state41_3 = 0.0;   //绕柱温度1
       double motor_state42_3 = 0.0;   //绕柱温度2
       double motor_state43_3 = 0.0;   //绕柱温度3
       double motor_state51_3 = 0.0;   //轴承温度1
       double motor_state52_3 = 0.0;   //轴承温度2
       double motor_state53_3 = 0.0;   //轴承温度3
       //前部运输机2#电机
       bool motor_state12_3 = false;   //电机状态
       double motor_state32_3 = 0.0;   //电流大小
       double motor_state44_3 = 0.0;   //绕柱温度1
       double motor_state45_3 = 0.0;   //绕柱温度2
       double motor_state46_3 = 0.0;   //绕柱温度3
       double motor_state54_3 = 0.0;   //轴承温度1
       double motor_state55_3 = 0.0;   //轴承温度2
       double motor_state56_3 = 0.0;   //轴承温度3
       //前部运输机3#电机
       bool motor_state13_3 = false;   //电机状态
       double motor_state33_3 = 0.0;   //电流大小
       double motor_state47_3 = 0.0;   //绕柱温度1
       double motor_state48_3 = 0.0;   //绕柱温度2
       double motor_state49_3 = 0.0;   //绕柱温度3
       double motor_state57_3 = 0.0;   //轴承温度1
       double motor_state58_3 = 0.0;   //轴承温度2
       double motor_state59_3 = 0.0;   //轴承温度3
       //前部运输机4#电机
       bool motor_state14_3 = false;    //电机状态
       double motor_state34_3 = 0.0;    //电流大小
       double motor_state410_3 = 0.0;   //绕柱温度1
       double motor_state411_3 = 0.0;   //绕柱温度2
       double motor_state412_3 = 0.0;   //绕柱温度3
       double motor_state510_3 = 0.0;   //轴承温度1
       double motor_state511_3 = 0.0;   //轴承温度2
       double motor_state512_3 = 0.0;   //轴承温度3
       //前部运输机5#电机
       bool motor_state15_3 = false;    //电机状态
       double motor_state35_3 = 0.0;    //电流大小
       double motor_state413_3 = 0.0;   //绕柱温度1
       double motor_state414_3 = 0.0;   //绕柱温度2
       double motor_state415_3 = 0.0;   //绕柱温度3
       double motor_state513_3 = 0.0;   //轴承温度1
       double motor_state514_3 = 0.0;   //轴承温度2
       double motor_state515_3 = 0.0;   //轴承温度3
       //前部运输机6#电机
       bool motor_state16_3 = false;    //电机状态
       double motor_state36_3 = 0.0;    //电流大小
       double motor_state416_3 = 0.0;   //绕柱温度1
       double motor_state417_3 = 0.0;   //绕柱温度2
       double motor_state418_3 = 0.0;   //绕柱温度3
       double motor_state516_3 = 0.0;   //轴承温度1
       double motor_state517_3 = 0.0;   //轴承温度2
       double motor_state518_3 = 0.0;   //轴承温度3
       //后部运输机
       bool page6_param14_4 = false;   //过载输出
       bool page6_param22_4 = false;   //准备就绪
       bool page6_param24_4 = false;   //启动完成
       bool page6_param32_4 = false;   //急停输出
       bool page6_param34_4 = false;   //堆煤保护
       //后部运输机1#电机
       bool motor_state11_4 = false;   //电机状态
       double motor_state31_4 = 0.0;   //电流大小
       double motor_state41_4 = 0.0;   //绕柱温度1
       double motor_state42_4 = 0.0;   //绕柱温度2
       double motor_state43_4 = 0.0;   //绕柱温度3
       double motor_state51_4 = 0.0;   //轴承温度1
       double motor_state52_4 = 0.0;   //轴承温度2
       double motor_state53_4 = 0.0;   //轴承温度3
       //后部运输机2#电机
       bool motor_state12_4 = false;   //电机状态
       double motor_state32_4 = 0.0;   //电流大小
       double motor_state44_4 = 0.0;   //绕柱温度1
       double motor_state45_4 = 0.0;   //绕柱温度2
       double motor_state46_4 = 0.0;   //绕柱温度3
       double motor_state54_4 = 0.0;   //轴承温度1
       double motor_state55_4 = 0.0;   //轴承温度2
       double motor_state56_4 = 0.0;   //轴承温度3
       //后部运输机3#电机
       bool motor_state13_4 = false;   //电机状态
       double motor_state33_4 = 0.0;   //电流大小
       double motor_state47_4 = 0.0;   //绕柱温度1
       double motor_state48_4 = 0.0;   //绕柱温度2
       double motor_state49_4 = 0.0;   //绕柱温度3
       double motor_state57_4 = 0.0;   //轴承温度1
       double motor_state58_4 = 0.0;   //轴承温度2
       double motor_state59_4 = 0.0;   //轴承温度3
       //后部运输机4#电机
       bool motor_state14_4 = false;    //电机状态
       double motor_state34_4 = 0.0;    //电流大小
       double motor_state410_4 = 0.0;   //绕柱温度1
       double motor_state411_4 = 0.0;   //绕柱温度2
       double motor_state412_4 = 0.0;   //绕柱温度3
       double motor_state510_4 = 0.0;   //轴承温度1
       double motor_state511_4 = 0.0;   //轴承温度2
       double motor_state512_4 = 0.0;   //轴承温度3
       //后部运输机5#电机
       bool motor_state15_4 = false;    //电机状态
       double motor_state35_4 = 0.0;    //电流大小
       double motor_state413_4 = 0.0;   //绕柱温度1
       double motor_state414_4 = 0.0;   //绕柱温度2
       double motor_state415_4 = 0.0;   //绕柱温度3
       double motor_state513_4 = 0.0;   //轴承温度1
       double motor_state514_4 = 0.0;   //轴承温度2
       double motor_state515_4 = 0.0;   //轴承温度3
       //后部运输机6#电机
       bool motor_state16_4 = false;    //电机状态
       double motor_state36_4 = 0.0;    //电流大小
       double motor_state416_4 = 0.0;   //绕柱温度1
       double motor_state417_4 = 0.0;   //绕柱温度2
       double motor_state418_4 = 0.0;   //绕柱温度3
       double motor_state516_4 = 0.0;   //轴承温度1
       double motor_state517_4 = 0.0;   //轴承温度2
       double motor_state518_4 = 0.0;   //轴承温度3
    //*****************************************
    //******************陈溢铭部分*******************
public:
       void BeltSetParam1(QList<bool> state_ls_bool,QList<double> elec_para_ls,QList<bool> elec_machine_ls,QList<double> elec_machine1_ls_double);
          void BeltSetParam2(QList<bool> state_ls_bool,QList<double> elec_para_ls,QList<bool> elec_machine_ls,QList<double> elec_machine1_ls_double);
           void BeltSetParam3(QList<bool> state_ls_bool,QList<double> elec_para_ls,QList<bool> elec_machine_ls,QList<double> elec_machine1_ls_double);
           void BeltSetParam4(QList<bool> state_ls_bool,QList<double> elec_para_ls,QList<bool> elec_machine_ls,QList<double> elec_machine1_ls_double);
           /* BeltSetParam parameters getter setter*/
           bool getYijipaopian_state() const;
           void setYijipaopian_state(bool value);

           bool getErjipaopian_state() const;
           void setErjipaopian_state(bool value);

           bool getDuimeibaohu_state() const;
           void setDuimeibaohu_state(bool value);

           bool getZongsibaohu_state() const;
           void setZongsibaohu_state(bool value);

           bool getYanwubaohu_state() const;
           void setYanwubaohu_state(bool value);

           bool getSudubaohu_state() const;
           void setSudubaohu_state(bool value);

           bool getZhanglibaohu_state() const;
           void setZhanglibaohu_state(bool value);

           bool getSashuifa_state() const;
           void setSashuifa_state(bool value);

           bool getHuanjingwendu_state() const;
           void setHuanjingwendu_state(bool value);

           bool getGuntongwendu_state() const;
           void setGuntongwendu_state(bool value);

           bool getRaozuwendu_state() const;
           void setRaozuwendu_state(bool value);

           bool getChouchengwendu_state() const;
           void setChouchengwendu_state(bool value);

           bool getBeituoshuchu_state() const;
           void setBeituoshuchu_state(bool value);

           bool getZhunbeijiuxu_state() const;
           void setZhunbeijiuxu_state(bool value);

           bool getJitingshuchu_state() const;
           void setJitingshuchu_state(bool value);

           bool getGuozaishuchu_state() const;
           void setGuozaishuchu_state(bool value);

           bool getZhangjinkongzhi_state() const;
           void setZhangjinkongzhi_state(bool value);

           bool getZhangjinwancheng_state() const;
           void setZhangjinwancheng_state(bool value);

           double getPage2_elec_elec1() const;
           void setPage2_elec_elec1(double value);

           double getPage2_elec_elec2() const;
           void setPage2_elec_elec2(double value);

           double getPage2_elec_elec3() const;
           void setPage2_elec_elec3(double value);

           double getPage2_elec_elec4() const;
           void setPage2_elec_elec4(double value);

           double getPage2_elec_elec5() const;
           void setPage2_elec_elec5(double value);

           double getPage2_elec_elec6() const;
           void setPage2_elec_elec6(double value);

           double getPage2_elec_elec7() const;
           void setPage2_elec_elec7(double value);

           double getPage2_elec_elec8() const;
           void setPage2_elec_elec8(double value);

           bool getPage2_state11() const;
           void setPage2_state11(bool value);

           bool getPage2_state21() const;
           void setPage2_state21(bool value);

           double getPage2_state31() const;
           void setPage2_state31(double value);

           bool getPage2_state41() const;
           void setPage2_state41(bool value);

           bool getPage2_state51() const;
           void setPage2_state51(bool value);

           bool getPage2_state13() const;
           void setPage2_state13(bool value);

           bool getPage2_state23() const;
           void setPage2_state23(bool value);

           double getPage2_state33() const;
           void setPage2_state33(double value);

           bool getPage2_state43() const;
           void setPage2_state43(bool value);

           bool getPage2_state53() const;
           void setPage2_state53(bool value);

           bool getPage2_state14() const;
           void setPage2_state14(bool value);

           bool getPage2_state24() const;
           void setPage2_state24(bool value);

           double getPage2_state34() const;
           void setPage2_state34(double value);

           bool getPage2_state44() const;
           void setPage2_state44(bool value);

           bool getPage2_state54() const;
           void setPage2_state54(bool value);

           bool getPage2_state15() const;
           void setPage2_state15(bool value);

           bool getPage2_state25() const;
           void setPage2_state25(bool value);

           double getPage2_state35() const;
           void setPage2_state35(double value);

           bool getPage2_state45() const;
           void setPage2_state45(bool value);

           bool getPage2_state55() const;
           void setPage2_state55(bool value);

           bool getPage2_state16() const;
           void setPage2_state16(bool value);

           bool getPage2_state26() const;
           void setPage2_state26(bool value);

           double getPage2_state36() const;
           void setPage2_state36(double value);

           bool getPage2_state46() const;
           void setPage2_state46(bool value);

           bool getPage2_state56() const;
           void setPage2_state56(bool value);

           bool getYijipaopian_state_2() const;
           void setYijipaopian_state_2(bool value);

           bool getErjipaopian_state_2() const;
           void setErjipaopian_state_2(bool value);

           bool getDuimeibaohu_state_2() const;
           void setDuimeibaohu_state_2(bool value);

           bool getZongsibaohu_state_2() const;
           void setZongsibaohu_state_2(bool value);

           bool getYanwubaohu_state_2() const;
           void setYanwubaohu_state_2(bool value);

           bool getSudubaohu_state_2() const;
           void setSudubaohu_state_2(bool value);

           bool getZhanglibaohu_state_2() const;
           void setZhanglibaohu_state_2(bool value);

           bool getSashuifa_state_2() const;
           void setSashuifa_state_2(bool value);

           bool getHuanjingwendu_state_2() const;
           void setHuanjingwendu_state_2(bool value);

           bool getGuntongwendu_state_2() const;
           void setGuntongwendu_state_2(bool value);

           bool getRaozuwendu_state_2() const;
           void setRaozuwendu_state_2(bool value);

           bool getChouchengwendu_state_2() const;
           void setChouchengwendu_state_2(bool value);

           bool getBeituoshuchu_state_2() const;
           void setBeituoshuchu_state_2(bool value);

           bool getZhunbeijiuxu_state_2() const;
           void setZhunbeijiuxu_state_2(bool value);

           bool getJitingshuchu_state_2() const;
           void setJitingshuchu_state_2(bool value);

           bool getGuozaishuchu_state_2() const;
           void setGuozaishuchu_state_2(bool value);

           bool getZhangjinkongzhi_state_2() const;
           void setZhangjinkongzhi_state_2(bool value);

           bool getZhangjinwancheng_state_2() const;
           void setZhangjinwancheng_state_2(bool value);

           double getPage2_elec_elec1_2() const;
           void setPage2_elec_elec1_2(double value);

           double getPage2_elec_elec2_2() const;
           void setPage2_elec_elec2_2(double value);

           double getPage2_elec_elec3_2() const;
           void setPage2_elec_elec3_2(double value);

           double getPage2_elec_elec4_2() const;
           void setPage2_elec_elec4_2(double value);

           double getPage2_elec_elec5_2() const;
           void setPage2_elec_elec5_2(double value);

           double getPage2_elec_elec6_2() const;
           void setPage2_elec_elec6_2(double value);

           double getPage2_elec_elec7_2() const;
           void setPage2_elec_elec7_2(double value);

           double getPage2_elec_elec8_2() const;
           void setPage2_elec_elec8_2(double value);

           double getPage2_elec_elec1_3() const;
           void setPage2_elec_elec1_3(double value);

           double getPage2_elec_elec2_3() const;
           void setPage2_elec_elec2_3(double value);

           double getPage2_elec_elec3_3() const;
           void setPage2_elec_elec3_3(double value);

           double getPage2_elec_elec4_3() const;
           void setPage2_elec_elec4_3(double value);

           double getPage2_elec_elec5_3() const;
           void setPage2_elec_elec5_3(double value);

           double getPage2_elec_elec6_3() const;
           void setPage2_elec_elec6_3(double value);

           double getPage2_elec_elec7_3() const;
           void setPage2_elec_elec7_3(double value);

           double getPage2_elec_elec8_3() const;
           void setPage2_elec_elec8_3(double value);

           double getPage2_elec_elec1_4() const;
           void setPage2_elec_elec1_4(double value);

           double getPage2_elec_elec2_4() const;
           void setPage2_elec_elec2_4(double value);

           double getPage2_elec_elec4_4() const;
           void setPage2_elec_elec4_4(double value);

           double getPage2_elec_elec5_4() const;
           void setPage2_elec_elec5_4(double value);

           double getPage2_elec_elec6_4() const;
           void setPage2_elec_elec6_4(double value);

           double getPage2_elec_elec7_4() const;
           void setPage2_elec_elec7_4(double value);

           double getPage2_elec_elec8_4() const;
           void setPage2_elec_elec8_4(double value);

           bool getYijipaopian_state_3() const;
           void setYijipaopian_state_3(bool value);

           bool getErjipaopian_state_3() const;
           void setErjipaopian_state_3(bool value);

           bool getDuimeibaohu_state_3() const;
           void setDuimeibaohu_state_3(bool value);

           bool getZongsibaohu_state_3() const;
           void setZongsibaohu_state_3(bool value);

           bool getYanwubaohu_state_3() const;
           void setYanwubaohu_state_3(bool value);

           bool getSudubaohu_state_3() const;
           void setSudubaohu_state_3(bool value);

           bool getZhanglibaohu_state_3() const;
           void setZhanglibaohu_state_3(bool value);

           bool getSashuifa_state_3() const;
           void setSashuifa_state_3(bool value);

           bool getHuanjingwendu_state_3() const;
           void setHuanjingwendu_state_3(bool value);

           bool getGuntongwendu_state_3() const;
           void setGuntongwendu_state_3(bool value);

           bool getRaozuwendu_state_3() const;
           void setRaozuwendu_state_3(bool value);

           bool getChouchengwendu_state_3() const;
           void setChouchengwendu_state_3(bool value);

           bool getBeituoshuchu_state_3() const;
           void setBeituoshuchu_state_3(bool value);

           bool getZhunbeijiuxu_state_3() const;
           void setZhunbeijiuxu_state_3(bool value);

           bool getJitingshuchu_state_3() const;
           void setJitingshuchu_state_3(bool value);

           bool getGuozaishuchu_state_3() const;
           void setGuozaishuchu_state_3(bool value);

           bool getZhangjinkongzhi_state_3() const;
           void setZhangjinkongzhi_state_3(bool value);

           bool getZhangjinwancheng_state_3() const;
           void setZhangjinwancheng_state_3(bool value);

           bool getYijipaopian_state_4() const;
           void setYijipaopian_state_4(bool value);

           bool getErjipaopian_state_4() const;
           void setErjipaopian_state_4(bool value);

           bool getDuimeibaohu_state_4() const;
           void setDuimeibaohu_state_4(bool value);

           bool getZongsibaohu_state_4() const;
           void setZongsibaohu_state_4(bool value);

           bool getYanwubaohu_state_4() const;
           void setYanwubaohu_state_4(bool value);

           bool getSudubaohu_state_4() const;
           void setSudubaohu_state_4(bool value);

           bool getZhanglibaohu_state_4() const;
           void setZhanglibaohu_state_4(bool value);

           bool getSashuifa_state_4() const;
           void setSashuifa_state_4(bool value);

           bool getHuanjingwendu_state_4() const;
           void setHuanjingwendu_state_4(bool value);

           bool getGuntongwendu_state_4() const;
           void setGuntongwendu_state_4(bool value);

           bool getRaozuwendu_state_4() const;
           void setRaozuwendu_state_4(bool value);

           bool getChouchengwendu_state_4() const;
           void setChouchengwendu_state_4(bool value);

           bool getBeituoshuchu_state_4() const;
           void setBeituoshuchu_state_4(bool value);

           bool getZhunbeijiuxu_state_4() const;
           void setZhunbeijiuxu_state_4(bool value);

           bool getJitingshuchu_state_4() const;
           void setJitingshuchu_state_4(bool value);

           bool getGuozaishuchu_state_4() const;
           void setGuozaishuchu_state_4(bool value);

           bool getZhangjinkongzhi_state_4() const;
           void setZhangjinkongzhi_state_4(bool value);

           bool getZhangjinwancheng_state_4() const;
           void setZhangjinwancheng_state_4(bool value);

           bool getPage2_state11_2() const;
           void setPage2_state11_2(bool value);

           bool getPage2_state21_2() const;
           void setPage2_state21_2(bool value);

           double getPage2_state31_2() const;
           void setPage2_state31_2(double value);

           bool getPage2_state41_2() const;
           void setPage2_state41_2(bool value);

           bool getPage2_state51_2() const;
           void setPage2_state51_2(bool value);

           bool getPage2_state11_3() const;
           void setPage2_state11_3(bool value);

           bool getPage2_state21_3() const;
           void setPage2_state21_3(bool value);

           double getPage2_state31_3() const;
           void setPage2_state31_3(double value);

           bool getPage2_state41_3() const;
           void setPage2_state41_3(bool value);

           bool getPage2_state51_3() const;
           void setPage2_state51_3(bool value);

           bool getPage2_state11_4() const;
           void setPage2_state11_4(bool value);

           bool getPage2_state21_4() const;
           void setPage2_state21_4(bool value);

           double getPage2_state31_4() const;
           void setPage2_state31_4(double value);

           bool getPage2_state41_4() const;
           void setPage2_state41_4(bool value);

           bool getPage2_state51_4() const;
           void setPage2_state51_4(bool value);

           bool getPage2_state12() const;
           void setPage2_state12(bool value);

           bool getPage2_state22() const;
           void setPage2_state22(bool value);

           double getPage2_state32() const;
           void setPage2_state32(double value);

           bool getPage2_state42() const;
           void setPage2_state42(bool value);

           bool getPage2_state52() const;
           void setPage2_state52(bool value);

           bool getPage2_state12_2() const;
           void setPage2_state12_2(bool value);

           bool getPage2_state22_2() const;
           void setPage2_state22_2(bool value);

           double getPage2_state32_2() const;
           void setPage2_state32_2(double value);

           bool getPage2_state42_2() const;
           void setPage2_state42_2(bool value);

           bool getPage2_state52_2() const;
           void setPage2_state52_2(bool value);

           bool getPage2_state12_3() const;
           void setPage2_state12_3(bool value);

           bool getPage2_state22_3() const;
           void setPage2_state22_3(bool value);

           double getPage2_state32_3() const;
           void setPage2_state32_3(double value);

           bool getPage2_state42_3() const;
           void setPage2_state42_3(bool value);

           bool getPage2_state52_3() const;
           void setPage2_state52_3(bool value);

           bool getPage2_state12_4() const;
           void setPage2_state12_4(bool value);

           bool getPage2_state22_4() const;
           void setPage2_state22_4(bool value);

           double getPage2_state32_4() const;
           void setPage2_state32_4(double value);

           bool getPage2_state42_4() const;
           void setPage2_state42_4(bool value);

           bool getPage2_state52_4() const;
           void setPage2_state52_4(bool value);

           bool getPage2_state13_2() const;
           void setPage2_state13_2(bool value);

           bool getPage2_state23_2() const;
           void setPage2_state23_2(bool value);

           double getPage2_state33_2() const;
           void setPage2_state33_2(double value);

           bool getPage2_state43_2() const;
           void setPage2_state43_2(bool value);

           bool getPage2_state53_2() const;
           void setPage2_state53_2(bool value);

           bool getPage2_state13_3() const;
           void setPage2_state13_3(bool value);

           bool getPage2_state23_3() const;
           void setPage2_state23_3(bool value);

           double getPage2_state33_3() const;
           void setPage2_state33_3(double value);

           bool getPage2_state43_3() const;
           void setPage2_state43_3(bool value);

           bool getPage2_state53_3() const;
           void setPage2_state53_3(bool value);

           bool getPage2_state13_4() const;
           void setPage2_state13_4(bool value);

           bool getPage2_state23_4() const;
           void setPage2_state23_4(bool value);

           double getPage2_state33_4() const;
           void setPage2_state33_4(double value);

           bool getPage2_state43_4() const;
           void setPage2_state43_4(bool value);

           bool getPage2_state53_4() const;
           void setPage2_state53_4(bool value);

           bool getPage2_state14_2() const;
           void setPage2_state14_2(bool value);

           bool getPage2_state24_2() const;
           void setPage2_state24_2(bool value);

           double getPage2_state34_2() const;
           void setPage2_state34_2(double value);

           bool getPage2_state44_2() const;
           void setPage2_state44_2(bool value);

           bool getPage2_state54_2() const;
           void setPage2_state54_2(bool value);

           bool getPage2_state14_3() const;
           void setPage2_state14_3(bool value);

           bool getPage2_state24_3() const;
           void setPage2_state24_3(bool value);

           double getPage2_state34_3() const;
           void setPage2_state34_3(double value);

           bool getPage2_state44_3() const;
           void setPage2_state44_3(bool value);

           bool getPage2_state54_3() const;
           void setPage2_state54_3(bool value);

           bool getPage2_state14_4() const;
           void setPage2_state14_4(bool value);

           bool getPage2_state24_4() const;
           void setPage2_state24_4(bool value);

           double getPage2_state34_4() const;
           void setPage2_state34_4(double value);

           bool getPage2_state44_4() const;
           void setPage2_state44_4(bool value);

           bool getPage2_state54_4() const;
           void setPage2_state54_4(bool value);

           bool getPage2_state15_2() const;
           void setPage2_state15_2(bool value);

           bool getPage2_state25_2() const;
           void setPage2_state25_2(bool value);

           double getPage2_state35_2() const;
           void setPage2_state35_2(double value);

           bool getPage2_state45_2() const;
           void setPage2_state45_2(bool value);

           bool getPage2_state55_2() const;
           void setPage2_state55_2(bool value);

           bool getPage2_state15_3() const;
           void setPage2_state15_3(bool value);

           bool getPage2_state25_3() const;
           void setPage2_state25_3(bool value);

           double getPage2_state35_3() const;
           void setPage2_state35_3(double value);

           bool getPage2_state45_3() const;
           void setPage2_state45_3(bool value);

           bool getPage2_state55_3() const;
           void setPage2_state55_3(bool value);

           bool getPage2_state15_4() const;
           void setPage2_state15_4(bool value);

           bool getPage2_state25_4() const;
           void setPage2_state25_4(bool value);

           double getPage2_state35_4() const;
           void setPage2_state35_4(double value);

           bool getPage2_state45_4() const;
           void setPage2_state45_4(bool value);

           bool getPage2_state55_4() const;
           void setPage2_state55_4(bool value);

           bool getPage2_state16_2() const;
           void setPage2_state16_2(bool value);

           bool getPage2_state26_2() const;
           void setPage2_state26_2(bool value);

           double getPage2_state36_2() const;
           void setPage2_state36_2(double value);

           bool getPage2_state46_2() const;
           void setPage2_state46_2(bool value);

           bool getPage2_state56_2() const;
           void setPage2_state56_2(bool value);

           bool getPage2_state16_3() const;
           void setPage2_state16_3(bool value);

           bool getPage2_state26_3() const;
           void setPage2_state26_3(bool value);

           double getPage2_state36_3() const;
           void setPage2_state36_3(double value);

           bool getPage2_state46_3() const;
           void setPage2_state46_3(bool value);

           bool getPage2_state56_3() const;
           void setPage2_state56_3(bool value);

           bool getPage2_state16_4() const;
           void setPage2_state16_4(bool value);

           bool getPage2_state26_4() const;
           void setPage2_state26_4(bool value);

           double getPage2_state36_4() const;
           void setPage2_state36_4(double value);

           bool getPage2_state46_4() const;
           void setPage2_state46_4(bool value);

           bool getPage2_state56_4() const;
           void setPage2_state56_4(bool value);
private:
       const QString m_green_SheetStyle = "background-color:green;color:white;border:0px solid white;min-width: 14px; min-height: 14px;max-width:14px; max-height: 14px;border-radius:7px";
       const QString m_red_SheetStyle = "background-color:red;color:red;border:0px solid white;min-width: 14px; min-height: 14px;max-width:14px; max-height: 14px;border-radius:7px";
       const QString m_grey_SheetStyle = "background-color:grey;color:red;border:0px solid white;min-width: 14px; min-height: 14px;max-width:14px; max-height: 14px;border-radius:7px";
           /*setColor*/
           /*belt1_state*/
           bool yijipaopian_state;
           bool erjipaopian_state;
           bool duimeibaohu_state;
           bool zongsibaohu_state;
           bool yanwubaohu_state;
           bool sudubaohu_state;
           bool zhanglibaohu_state;
           bool sashuifa_state;
           bool huanjingwendu_state;
           bool guntongwendu_state;
           bool raozuwendu_state;
           bool chouchengwendu_state;
           bool beituoshuchu_state;
           bool zhunbeijiuxu_state;
           bool jitingshuchu_state;
           bool guozaishuchu_state;
           bool zhangjinkongzhi_state;
           bool zhangjinwancheng_state;
           /*belt1_state*/

           /*belt2_state*/
           bool yijipaopian_state_2;
           bool erjipaopian_state_2;
           bool duimeibaohu_state_2;
           bool zongsibaohu_state_2;
           bool yanwubaohu_state_2;
           bool sudubaohu_state_2;
           bool zhanglibaohu_state_2;
           bool sashuifa_state_2;
           bool huanjingwendu_state_2;
           bool guntongwendu_state_2;
           bool raozuwendu_state_2;
           bool chouchengwendu_state_2;
           bool beituoshuchu_state_2;
           bool zhunbeijiuxu_state_2;
           bool jitingshuchu_state_2;
           bool guozaishuchu_state_2;
           bool zhangjinkongzhi_state_2;
           bool zhangjinwancheng_state_2;
           /*belt2_state*/

           /*belt3_state*/
           bool yijipaopian_state_3;
           bool erjipaopian_state_3;
           bool duimeibaohu_state_3;
           bool zongsibaohu_state_3;
           bool yanwubaohu_state_3;
           bool sudubaohu_state_3;
           bool zhanglibaohu_state_3;
           bool sashuifa_state_3;
           bool huanjingwendu_state_3;
           bool guntongwendu_state_3;
           bool raozuwendu_state_3;
           bool chouchengwendu_state_3;
           bool beituoshuchu_state_3;
           bool zhunbeijiuxu_state_3;
           bool jitingshuchu_state_3;
           bool guozaishuchu_state_3;
           bool zhangjinkongzhi_state_3;
           bool zhangjinwancheng_state_3;
           /*belt3_state*/

           /*belt4_state*/
           bool yijipaopian_state_4;
           bool erjipaopian_state_4;
           bool duimeibaohu_state_4;
           bool zongsibaohu_state_4;
           bool yanwubaohu_state_4;
           bool sudubaohu_state_4;
           bool zhanglibaohu_state_4;
           bool sashuifa_state_4;
           bool huanjingwendu_state_4;
           bool guntongwendu_state_4;
           bool raozuwendu_state_4;
           bool chouchengwendu_state_4;
           bool beituoshuchu_state_4;
           bool zhunbeijiuxu_state_4;
           bool jitingshuchu_state_4;
           bool guozaishuchu_state_4;
           bool zhangjinkongzhi_state_4;
           bool zhangjinwancheng_state_4;
           /*belt4_state*/

           /*elec1_para*/
           double page2_elec_elec1;
           double page2_elec_elec2;
           double page2_elec_elec3;
           double page2_elec_elec4;
           double page2_elec_elec5;
           double page2_elec_elec6;
           double page2_elec_elec7;
           double page2_elec_elec8;
           /*elec1_para*/

           /*elec2_para*/
           double page2_elec_elec1_2;
           double page2_elec_elec2_2;
           double page2_elec_elec3_2;
           double page2_elec_elec4_2;
           double page2_elec_elec5_2;
           double page2_elec_elec6_2;
           double page2_elec_elec7_2;
           double page2_elec_elec8_2;
           /*elec2_para*/

           /*elec3_para*/
           double page2_elec_elec1_3;
           double page2_elec_elec2_3;
           double page2_elec_elec3_3;
           double page2_elec_elec4_3;
           double page2_elec_elec5_3;
           double page2_elec_elec6_3;
           double page2_elec_elec7_3;
           double page2_elec_elec8_3;
           /*elec3_para*/

           /*elec4_para*/
           double page2_elec_elec1_4;
           double page2_elec_elec2_4;
           double page2_elec_elec3_4;
           double page2_elec_elec4_4;
           double page2_elec_elec5_4;
           double page2_elec_elec6_4;
           double page2_elec_elec7_4;
           double page2_elec_elec8_4;
           /*elec4_para*/


           /*1# machine*/
           bool page2_state11;
           bool page2_state21;
           double page2_state31;
           bool page2_state41;
           bool page2_state51;

           bool page2_state11_2;
           bool page2_state21_2;
           double page2_state31_2;
           bool page2_state41_2;
           bool page2_state51_2;

           bool page2_state11_3;
           bool page2_state21_3;
           double page2_state31_3;
           bool page2_state41_3;
           bool page2_state51_3;

           bool page2_state11_4;
           bool page2_state21_4;
           double page2_state31_4;
           bool page2_state41_4;
           bool page2_state51_4;
           /*1# machine*/

           /*2# machine*/
           bool page2_state12;
           bool page2_state22;
           double page2_state32;
           bool page2_state42;
           bool page2_state52;

           bool page2_state12_2;
           bool page2_state22_2;
           double page2_state32_2;
           bool page2_state42_2;
           bool page2_state52_2;

           bool page2_state12_3;
           bool page2_state22_3;
           double page2_state32_3;
           bool page2_state42_3;
           bool page2_state52_3;

           bool page2_state12_4;
           bool page2_state22_4;
           double page2_state32_4;
           bool page2_state42_4;
           bool page2_state52_4;
           /*2# machine*/

           /*3# machine*/
           bool page2_state13;
           bool page2_state23;
           double page2_state33;
           bool page2_state43;
           bool page2_state53;

           bool page2_state13_2;
           bool page2_state23_2;
           double page2_state33_2;
           bool page2_state43_2;
           bool page2_state53_2;

           bool page2_state13_3;
           bool page2_state23_3;
           double page2_state33_3;
           bool page2_state43_3;
           bool page2_state53_3;

           bool page2_state13_4;
           bool page2_state23_4;
           double page2_state33_4;
           bool page2_state43_4;
           bool page2_state53_4;
           /*3# machine*/

           /*4# machine*/
           bool page2_state14;
           bool page2_state24;
           double page2_state34;
           bool page2_state44;
           bool page2_state54;

           bool page2_state14_2;
           bool page2_state24_2;
           double page2_state34_2;
           bool page2_state44_2;
           bool page2_state54_2;

           bool page2_state14_3;
           bool page2_state24_3;
           double page2_state34_3;
           bool page2_state44_3;
           bool page2_state54_3;

           bool page2_state14_4;
           bool page2_state24_4;
           double page2_state34_4;
           bool page2_state44_4;
           bool page2_state54_4;
           /*4# machine*/

           /*5# machine*/
           bool page2_state15;
           bool page2_state25;
           double page2_state35;
           bool page2_state45;
           bool page2_state55;

           bool page2_state15_2;
           bool page2_state25_2;
           double page2_state35_2;
           bool page2_state45_2;
           bool page2_state55_2;

           bool page2_state15_3;
           bool page2_state25_3;
           double page2_state35_3;
           bool page2_state45_3;
           bool page2_state55_3;

           bool page2_state15_4;
           bool page2_state25_4;
           double page2_state35_4;
           bool page2_state45_4;
           bool page2_state55_4;
           /*5# machine*/

           /*6# machine*/
           bool page2_state16;
           bool page2_state26;
           double page2_state36;
           bool page2_state46;
           bool page2_state56;

           bool page2_state16_2;
           bool page2_state26_2;
           double page2_state36_2;
           bool page2_state46_2;
           bool page2_state56_2;

           bool page2_state16_3;
           bool page2_state26_3;
           double page2_state36_3;
           bool page2_state46_3;
           bool page2_state56_3;

           bool page2_state16_4;
           bool page2_state26_4;
           double page2_state36_4;
           bool page2_state46_4;
           bool page2_state56_4;
           /*6# machine*/

       //********************************************
};

#endif // WIDGET_H
