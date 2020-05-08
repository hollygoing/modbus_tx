#include "widget.h"
#include "ui_widget.h"
#include "QPixmap"
#include<string>
#include<time.h>
#include<QImage>
#include<QDateTime>
using namespace std;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    nowPage=0;
    numOfPage=ui->stackedWidget->count();
    init();
}

Widget::~Widget()
{
    delete ui;
}
void Widget::SetbunkerPage(){
    ui->layout_main->setStretch(0,1);
    ui->layout_main->setStretch(1,0);
    ui->layout_main->setStretch(2,0);
    ui->layout_main->setStretch(3,35);
    ui->layout_main->setStretch(4,0);
    ui->layout_main->setStretch(5,0);
    ui->layout_main->setStretch(6,0);
    ui->layout_main->setStretch(7,0);
    ui->layout_main->setStretch(8,0);
    //ui->layout_main->setStretch(9,0);
    ui->title->setVisible(false);
    ui->animation_tel->setVisible(false);
    ui->bottom->setVisible(false);

    ui->log->setVisible(false);
    ui->port->setVisible(false);
    ui->pump->setVisible(false);
    ui->tel->setVisible(false);
    ui->frame_11->setVisible(true);
    //ui->frame_11->setStyleSheet("border:1px solid white");

/*
    string motorState="motor_state";
    if(pageNum!=6){
        motorState=motorState.append("_");
        motorState=motorState.append(to_string(pageNum-5));
    }
    string animat="page6_animat";
    if(pageNum!=6){
        animat=animat.append("_");
        animat=animat.append(to_string(pageNum-5));
    }
    string param="page6_param";
    if(pageNum!=6){
        param=param.append("_");
        param=param.append(to_string(pageNum-5));
    }
    string page="page";
    page=page.append(to_string(pageNum));
    QList<QLabel *>temp;
    int i;
    ui->stackedWidget->findChild<QFrame *>(motorState.c_str())->setStyleSheet("border:1px solid white");
    ui->stackedWidget->findChild<QFrame *>(param.c_str())->setStyleSheet("border:1px solid white");
    ui->stackedWidget->findChild<QFrame *>(animat.c_str())->setStyleSheet("border:1px solid white");
    temp=ui->stackedWidget->findChild<QWidget *>(page.c_str())->findChildren<QLabel *>();
    for(i=0;i<temp.size();i++){
        temp[i]->setAlignment(Qt::AlignCenter);
        temp[i]->setStyleSheet("border:0px");
    }
    temp=ui->stackedWidget->findChild<QFrame *>(param.c_str())->findChildren<QLabel *>();
    for(i=0;i<temp.size();i++){
        if(i%2==1){
            temp[i]->setStyleSheet("background-color:white;color:white;border:0px solid white;min-width: 14px; min-height: 14px;max-width:14px; max-height: 14px;border-radius:7px");
        }
    }
    temp=ui->stackedWidget->findChild<QFrame *>(motorState.c_str())->findChildren<QLabel *>();
    for(i=0;i<temp.size();i++){

            temp[i]->setStyleSheet("border:0px;background-color:rgb(85,170,255,90)");

    }
    ui->label_134->setStyleSheet("background-color:#5555ff;border:0px");
*/

   // ui->bunker_info_2->setStyleSheet("#bunker_info_2{}");
}
void Widget::restore(){

    //ui->layout_main->setStretch(9,0);
    ui->title->setVisible(true);
    ui->animation_tel->setVisible(true);
    ui->bottom->setVisible(true);

    ui->log->setVisible(true);
    ui->port->setVisible(true);
    ui->pump->setVisible(true);
    ui->tel->setVisible(true);
    ui->frame_11->setVisible(false);
    ui->layout_main->setStretch(0,1);
    ui->layout_main->setStretch(1,2);
    ui->layout_main->setStretch(2,4);
    ui->layout_main->setStretch(3,15);
    ui->layout_main->setStretch(4,2);
    ui->layout_main->setStretch(5,5);
    ui->layout_main->setStretch(6,1);
    ui->layout_main->setStretch(7,5);
    ui->layout_main->setStretch(8,1);
}
void Widget::init(){

    //SetbunkerPage();
    ui->frame_11->setVisible(false);
    QList<QLabel *> temp;
    //设置背景颜色
    ui->stackedWidget->setCurrentIndex(0);

    this->setStyleSheet("background-color:#5555ff;color:white");
    int i=0;
    //设置边框
    //由于widget对象没有边界的设置，所以只能单独进行边界设置
    ui->func->setStyleSheet("border:1px solid white;border-radius:2px;");
    ui->animation_tel->setStyleSheet("border:1px solid white;border-radius:2px");
    ui->bottom->setStyleSheet("border:1px solid white;border-radius:2px");
    ui->log->setStyleSheet("border:1px solid white;border-radius:2px");
    ui->port->setStyleSheet("border:1px solid white;border-radius:2px");
    ui->pump->setStyleSheet("border:1px solid white;border-radius:2px");
    ui->state->setStyleSheet("border:1px solid white;border-radius:2px");
    ui->stackedWidget->setStyleSheet("border:0px");
    ui->tel->setStyleSheet("border:1px solid white;border-radius:2px");
    //ui->title->setStyleSheet("border-left:1px solid white;border-right:1px solid white;");

    //设置菜单栏
    fun_list=ui->func->findChildren<QLabel *>();
    for(i=0;i<fun_list.size();i++){
        /*if(i==1) {
            list4[i]->setAlignment(Qt::AlignCenter);
            list4[i]->setStyleSheet("border-right:1px solid black;background-color:#a8a0a3;color:black");
            continue;
        }*/
        fun_list[i]->setAlignment(Qt::AlignCenter);
        fun_list[i]->setStyleSheet("border-right:1px solid black;background-color:#dad0d3;color:black");
    }

    //设置接口显示处样式
    QList<QLabel *> list3=ui->port->findChildren<QLabel *>();
    for(i=0;i<list3.size();i++){
        list3[i]->setAlignment(Qt::AlignCenter);
    }

    //设置相关状态
    ui->state->setStyleSheet("border:0px");
    //page1相关设置


    QList<QLabel *> list5=ui->page1_frame2->findChildren<QLabel *>();
    for(i=0;i<list5.size();i++){
        if(i==0){
            continue;
        }

        list5[i]->setAlignment(Qt::AlignCenter);
        list5[i]->setStyleSheet("background-color:rgb(85,170,255,90)");//背景颜色
    }
    //page2-5相关设置
    for(i=1;i<5;i++){
        init_belt(i);

    }

    //page6-9相关设置
    for(i=6;i<10;i++){
        init_machine(i);
    }

    //设置清水泵乳化泵样式
    QList <QLabel *> list1 =ui->pump->findChildren<QLabel *>();


    for(i=0;i<list1.size();i++){
        list1[i]->setStyleSheet("border:0px");
        list1[i]->setAlignment(Qt::AlignCenter);
        if(i==0||i==5||i==10||i==13){
            continue;
        }
        list1[i]->setStyleSheet("border:2px solid white;min-width: 30px; min-height: 30px;max-width:30px; max-height: 30px;border-radius:15px");
        list1[i]->setAlignment(Qt::AlignCenter);
    }

    //设置cs沿线电话数显示样式
    ui->tel_1->setAlignment(Qt::AlignHCenter);
    ui->tel_2->setAlignment(Qt::AlignHCenter);
    ui->tel_1->setAlignment(Qt::AlignLeft);
    ui->tel_2->setAlignment(Qt::AlignLeft);
    ui->tel_1->setStyleSheet("border:0px");
    ui->tel_2->setStyleSheet("border:0px");
    //    ui->layout_main->setMargin(0);
//    ui->layout_main->setSpacing(0);
//    ui->layout_main->setContentsMargins(0,0,0,0);
    ui->layout_func->setMargin(0);
    ui->layout_func->setSpacing(0);

    //ui->frame->setStyleSheet("border:1px solid red");
    //ui->label_2->setStyleSheet("border:1px solid red");

//设置对应图片

    //ui->page1_animate->setScaledContents(true);
    //QPixmap pixmap("C:\\Users\\houwenhao\\Desktop\\55.png");


/*
   // QPixmap fitpixmap = pixmap.scaled(with, height, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);  // 饱满填充

    QPixmap fitpixmap = pixmap.scaled(with, height, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放

 */
    int width = ui->icon->width();
    int height = ui->icon->height();

    //QPixmap tempPix = QPixmap("C:\\Users\\houwenhao\\Desktop\\icon.png");
    QPixmap tempPix = QPixmap(":/image/image/icon.png");
    printf("%d,%d",width,height);
    tempPix = tempPix.scaled(QSize(width, height), Qt::KeepAspectRatio);
    ui->icon->setPixmap(tempPix);
    ui->page1_animate->setStyleSheet("border:1px solid white");
    width = ui->page2_animat_animat->width();
    height = ui->page2_animat_animat->height();
    tempPix = QPixmap(":/image/image/lunzi.png");
    printf("%d,%d",width,height);
    tempPix = tempPix.scaled(QSize(width, height), Qt::KeepAspectRatio);
    ui->page2_animat_animat->setPixmap(tempPix);
    ui->page2_animat_animat_2->setPixmap(tempPix);
    ui->page2_animat_animat_3->setPixmap(tempPix);
    ui->page2_animat_animat_4->setPixmap(tempPix);
    //page2_animat_animat
    width = ui->page6_animat2->width();
    height = ui->page6_animat2->height();
    tempPix = QPixmap(":/image/image/lun.png");
    printf("%d,%d",width,height);
    tempPix = tempPix.scaled(QSize(width, height), Qt::KeepAspectRatio);
    ui->page6_animat2->setPixmap(tempPix);
    ui->page6_animat2_2->setPixmap(tempPix);
    ui->page6_animat2_3->setPixmap(tempPix);
    ui->page6_animat2_4->setPixmap(tempPix);
    //设置隐藏标签
    ui->label_18->setVisible(false);
    ui->label_65->setVisible(false);
    ui->label_76->setVisible(false);
    ui->label_119->setVisible(false);
    ui->label_134->setVisible(false);
    ui->label_144->setVisible(false);
    ui->label_154->setVisible(false);
    ui->label_169->setVisible(false);
    //**************************
    //初始化煤炭界面

    for(i=2;i<12;i++){
        string temp="bunker_info_";

        //printf("%s",&temp);
        temp=temp.append(to_string(i));
        string temp2="#";
        temp2=temp2.append(temp);
        temp2=temp2.append("{border:1px solid white;}");


        //ui->stackedWidget->findChild<QGroupBox *>(temp.c_str())->setAlignment(Qt::AlignCenter);

        ui->stackedWidget->findChild<QGroupBox *>(temp.c_str())->setTitle("");
        ui->stackedWidget->findChild<QGroupBox *>(temp.c_str())->setStyleSheet(temp2.c_str());
        temp="bunker_info_top12_";
        temp=temp.append(to_string(i));
        ui->stackedWidget->findChild<QLabel *>(temp.c_str())->setStyleSheet("background-color:white;color:white;border:0px solid white;min-width: 14px; min-height: 14px;max-width:14px; max-height: 14px;border-radius:7px");
    }

    ui->label_bunker_2->setStyleSheet("background-color:blue");
    QList<QLabel *> ll=ui->page10->findChildren<QLabel *>();
    for(i=0;i<ll.size();i++){
        ll[i]->setAlignment(Qt::AlignCenter);
    }
    string bunker_info_bottom="";

    int j=2;

    for(i=22;i<30;i++){
        for(j=2;j<12;j++){
           bunker_info_bottom="bunker_info_bottom";
            bunker_info_bottom=bunker_info_bottom.append(to_string(i));
           bunker_info_bottom=bunker_info_bottom.append("_");
           bunker_info_bottom=bunker_info_bottom.append(to_string(j));
           ui->page10->findChild<QLabel *>(bunker_info_bottom.c_str())->setStyleSheet("background-color:white;color:white;border:0px solid white;min-width: 14px; min-height: 14px;max-width:14px; max-height: 14px;border-radius:7px");
        }
    }

    //t=time(&t);
    //string s=ctime(&t);
    //printf("%s",&s);
    update_data();
}

void Widget::keyPressEvent(QKeyEvent *ev){
    //按k切换下一个界面
     if(ev->key()==Qt::Key_K){
        fun_list[nowPage]->setStyleSheet("background-color:#dad0d3;color:black");
        nowPage=nowPage+1;
        if(nowPage==numOfPage){
            nowPage=0;
        }
        fun_list[nowPage]->setStyleSheet("background-color:#a8a0a3;color:white");
         ui->stackedWidget->setCurrentIndex(nowPage);
    }
    //按键Y切换上一个界面
    if(ev->key()==Qt::Key_Y){
        fun_list[nowPage]->setStyleSheet("background-color:#dad0d3;color:black");
        nowPage=nowPage-1;
        if(nowPage==-1){
            nowPage=numOfPage-1;
        }
        fun_list[nowPage]->setStyleSheet("background-color:#a8a0a3;color:white");
        ui->stackedWidget->setCurrentIndex(nowPage);

    }
    if(nowPage==9||nowPage==10){
        SetbunkerPage();
    }
    else{
        //init();

        restore();
        ui->stackedWidget->setCurrentIndex(nowPage-1);
        ui->stackedWidget->setCurrentIndex(nowPage+1);
        ui->stackedWidget->setCurrentIndex(nowPage);
    }
}
void Widget::init_belt(int PageNum){
    string elec="page2_elec";
    if(PageNum!=1){
        elec=elec.append("_");
        elec=elec.append(to_string(PageNum));
    }
    string param="page2_param";
    if(PageNum!=1){
        param=param.append("_");
        param=param.append(to_string(PageNum));
    }
    string state="page2_state";
    if(PageNum!=1){
        state=state.append("_");
        state=state.append(to_string(PageNum));
    }
    string param2="page2_param2";
    if(PageNum!=1){
        param2=param2.append("_");
        param2=param2.append(to_string(PageNum));
    }
    string animat="page2_animat";
    if(PageNum!=1){
        animat=animat.append("_");
        animat=animat.append(to_string(PageNum));
    }
    string page="page";

        page=page.append(to_string(PageNum+1));

    QList<QLabel *>temp;
    int i=0;

    ui->stackedWidget->findChild<QFrame *>(elec.c_str())->setStyleSheet("border:1px solid white");
    ui->stackedWidget->findChild<QFrame *>(param.c_str())->setStyleSheet("border:1px solid white");
    ui->stackedWidget->findChild<QFrame *>(state.c_str())->setStyleSheet("border:1px solid white");
    ui->stackedWidget->findChild<QFrame *>(param2.c_str())->setStyleSheet("border:1px solid white");
    ui->stackedWidget->findChild<QFrame *>(animat.c_str())->setStyleSheet("border:1px solid white");

    /*
    ui->page2_elec->setStyleSheet("border:1px solid white");
    ui->page2_param->setStyleSheet("border:1px solid white");
    ui->page2_state->setStyleSheet("border:1px solid white");
    ui->page2_param2->setStyleSheet("border:1px solid white");
    ui->page2_animat->setStyleSheet("border:1px solid white");
*/
    temp=ui->stackedWidget->findChild<QWidget *>(page.c_str())->findChildren<QLabel *>();

    //temp=ui->page2->findChildren<QLabel *>();
    for(i=0;i<temp.size();i++){
        temp[i]->setStyleSheet("border:0px");
    }
    temp=ui->stackedWidget->findChild<QWidget *>(animat.c_str())->findChildren<QLabel *>();
     //temp=ui->page2_animat->findChildren<QLabel *>();
     for(i=0;i<temp.size();i++){
         temp[i]->setAlignment(Qt::AlignCenter);
         //temp[i]->setStyleSheet("border:1px solid white");
     }
     temp=ui->stackedWidget->findChild<QWidget *>(param.c_str())->findChildren<QLabel *>();

     //temp=ui->page2_param->findChildren<QLabel *>();
     for(i=0;i<temp.size();i++){
         if(i%2==1){
          temp[i]->setStyleSheet("background-color:white;color:white;border:0px solid white;min-width: 14px; min-height: 14px;max-width:14px; max-height: 14px;border-radius:7px");
         temp[i]->setAlignment(Qt::AlignCenter);
         continue;
         }
         temp[i]->setAlignment(Qt::AlignCenter);
         //temp[i]->setStyleSheet("border:1px solid white");
     }
     temp=ui->stackedWidget->findChild<QWidget *>(param2.c_str())->findChildren<QLabel *>();
     //temp=ui->page2_param2->findChildren<QLabel *>();
     for(i=0;i<temp.size();i++){
         if(i%2==1){
          temp[i]->setStyleSheet("background-color:white;color:white;border:0px solid white;min-width: 14px; min-height: 14px;max-width:14px; max-height: 14px;border-radius:7px");
         temp[i]->setAlignment(Qt::AlignCenter);
         continue;
         }
         temp[i]->setAlignment(Qt::AlignCenter);
         //temp[i]->setStyleSheet("border:1px solid white");
     }
     temp=ui->stackedWidget->findChild<QWidget *>(state.c_str())->findChildren<QLabel *>();
    //temp=ui->page2_state->findChildren<QLabel *>();
    for(i=0;i<temp.size();i++){
        temp[i]->setStyleSheet("border:0px;background-color:rgb(85,170,255,90)");
    }

}
//设置转载及破碎机等
void Widget::init_machine(int pageNum){
    string motorState="motor_state";
    if(pageNum!=6){
        motorState=motorState.append("_");
        motorState=motorState.append(to_string(pageNum-5));
    }
    string animat="page6_animat";
    if(pageNum!=6){
        animat=animat.append("_");
        animat=animat.append(to_string(pageNum-5));
    }
    string param="page6_param";
    if(pageNum!=6){
        param=param.append("_");
        param=param.append(to_string(pageNum-5));
    }
    string page="page";
    page=page.append(to_string(pageNum));
    QList<QLabel *>temp;
    int i;
    ui->stackedWidget->findChild<QFrame *>(motorState.c_str())->setStyleSheet("border:1px solid white");
    ui->stackedWidget->findChild<QFrame *>(param.c_str())->setStyleSheet("border:1px solid white");
    ui->stackedWidget->findChild<QFrame *>(animat.c_str())->setStyleSheet("border:1px solid white");
    temp=ui->stackedWidget->findChild<QWidget *>(page.c_str())->findChildren<QLabel *>();
    for(i=0;i<temp.size();i++){
        temp[i]->setAlignment(Qt::AlignCenter);
        temp[i]->setStyleSheet("border:0px");
    }
    temp=ui->stackedWidget->findChild<QFrame *>(param.c_str())->findChildren<QLabel *>();
    for(i=0;i<temp.size();i++){
        if(i%2==1){
            temp[i]->setStyleSheet("background-color:white;color:white;border:0px solid white;min-width: 14px; min-height: 14px;max-width:14px; max-height: 14px;border-radius:7px");
        }
    }
    temp=ui->stackedWidget->findChild<QFrame *>(motorState.c_str())->findChildren<QLabel *>();
    for(i=0;i<temp.size();i++){

            temp[i]->setStyleSheet("border:0px;background-color:rgb(85,170,255,90)");

    }
    ui->label_134->setStyleSheet("background-color:#5555ff;border:0px");
}

bool Widget::getWangkou() const
{
    return wangkou;
}

void Widget::setWangkou(bool value)
{
    wangkou = value;
}

bool Widget::getChuankou2() const
{
    return chuankou2;
}

void Widget::setChuankou2(bool value)
{
    chuankou2 = value;
}

bool Widget::getChuankou1() const
{
    return chuankou1;
}

void Widget::setChuankou1(bool value)
{
    chuankou1 = value;
}

bool Widget::getKEY() const
{
    return KEY;
}

void Widget::setKEY(bool value)
{
    KEY = value;
}

bool Widget::getSP() const
{
    return SP;
}

void Widget::setSP(bool value)
{
    SP = value;
}

bool Widget::getIN() const
{
    return IN;
}

void Widget::setIN(bool value)
{
    IN = value;
}

bool Widget::getIO2() const
{
    return IO2;
}

void Widget::setIO2(bool value)
{
    IO2 = value;
}

bool Widget::getCS2() const
{
    return CS2;
}

void Widget::setCS2(bool value)
{
    CS2 = value;
}

bool Widget::getCS1() const
{
    return CS1;
}

void Widget::setCS1(bool value)
{
    CS1 = value;
}

bool Widget::getIO1() const
{
    return IO1;
}

void Widget::setIO1(bool value)
{
    IO1 = value;
}
void Widget::setRedColor(string name){

    findChild<QLabel *>(name.c_str())->setStyleSheet("color:red");

}
void Widget::setGreenColor(string name){
    findChild<QLabel *>(name.c_str())->setStyleSheet("color:green");
}
void Widget::setWhiteColor(string name){
    findChild<QLabel *>(name.c_str())->setStyleSheet("color:white");
}
//更新主界面参数信息
void Widget::updateMainPageParams(){
    if(CS1==false){
        setRedColor("CS1");
    }
    else{
        setGreenColor("CS1");
    }
    if(CS2==false){
        setRedColor("CS2");
    }
    else{
        setGreenColor("CS2");
    }
    //........继续设置剩余参数
}
void Widget::setContent(string name,string content){
    findChild<QLabel *>(name.c_str())->setText(content.c_str());
}
void Widget::update_data(){
    //updateMainPageParams();
    QDateTime  time = QDateTime::currentDateTime();
    QString current_date = time.toString("yyyy-MM-dd hh:mm:ss");
        ui->time->setText(current_date);
        ui->time->setAlignment(Qt::AlignCenter);
}

//***************************************
double Widget::getMotor_state518() const
{
    return motor_state518;
}

void Widget::setMotor_state518(double value)
{
    motor_state518 = value;
}

double Widget::getMotor_state517() const
{
    return motor_state517;
}

void Widget::setMotor_state517(double value)
{
    motor_state517 = value;
}

double Widget::getMotor_state516() const
{
    return motor_state516;
}

void Widget::setMotor_state516(double value)
{
    motor_state516 = value;
}

double Widget::getMotor_state418() const
{
    return motor_state418;
}

void Widget::setMotor_state418(double value)
{
    motor_state418 = value;
}

double Widget::getMotor_state417() const
{
    return motor_state417;
}

void Widget::setMotor_state417(double value)
{
    motor_state417 = value;
}

double Widget::getMotor_state416() const
{
    return motor_state416;
}

void Widget::setMotor_state416(double value)
{
    motor_state416 = value;
}

double Widget::getMotor_state36() const
{
    return motor_state36;
}

void Widget::setMotor_state36(double value)
{
    motor_state36 = value;
}

bool Widget::getMotor_state16() const
{
    return motor_state16;
}

void Widget::setMotor_state16(bool value)
{
    motor_state16 = value;
}

double Widget::getMotor_state515() const
{
    return motor_state515;
}

void Widget::setMotor_state515(double value)
{
    motor_state515 = value;
}

double Widget::getMotor_state514() const
{
    return motor_state514;
}

void Widget::setMotor_state514(double value)
{
    motor_state514 = value;
}

double Widget::getMotor_state513() const
{
    return motor_state513;
}

void Widget::setMotor_state513(double value)
{
    motor_state513 = value;
}

double Widget::getMotor_state415() const
{
    return motor_state415;
}

void Widget::setMotor_state415(double value)
{
    motor_state415 = value;
}

double Widget::getMotor_state414() const
{
    return motor_state414;
}

void Widget::setMotor_state414(double value)
{
    motor_state414 = value;
}

double Widget::getMotor_state413() const
{
    return motor_state413;
}

void Widget::setMotor_state413(double value)
{
    motor_state413 = value;
}

double Widget::getMotor_state35() const
{
    return motor_state35;
}

void Widget::setMotor_state35(double value)
{
    motor_state35 = value;
}

bool Widget::getMotor_state15() const
{
    return motor_state15;
}

void Widget::setMotor_state15(bool value)
{
    motor_state15 = value;
}

double Widget::getMotor_state512() const
{
    return motor_state512;
}

void Widget::setMotor_state512(double value)
{
    motor_state512 = value;
}

double Widget::getMotor_state511() const
{
    return motor_state511;
}

void Widget::setMotor_state511(double value)
{
    motor_state511 = value;
}

double Widget::getMotor_state510() const
{
    return motor_state510;
}

void Widget::setMotor_state510(double value)
{
    motor_state510 = value;
}

double Widget::getMotor_state412() const
{
    return motor_state412;
}

void Widget::setMotor_state412(double value)
{
    motor_state412 = value;
}

double Widget::getMotor_state411() const
{
    return motor_state411;
}

void Widget::setMotor_state411(double value)
{
    motor_state411 = value;
}

double Widget::getMotor_state410() const
{
    return motor_state410;
}

void Widget::setMotor_state410(double value)
{
    motor_state410 = value;
}

double Widget::getMotor_state34() const
{
    return motor_state34;
}

void Widget::setMotor_state34(double value)
{
    motor_state34 = value;
}

bool Widget::getMotor_state14() const
{
    return motor_state14;
}

void Widget::setMotor_state14(bool value)
{
    motor_state14 = value;
}

double Widget::getMotor_state59() const
{
    return motor_state59;
}

void Widget::setMotor_state59(double value)
{
    motor_state59 = value;
}

double Widget::getMotor_state58() const
{
    return motor_state58;
}

void Widget::setMotor_state58(double value)
{
    motor_state58 = value;
}

double Widget::getMotor_state57() const
{
    return motor_state57;
}

void Widget::setMotor_state57(double value)
{
    motor_state57 = value;
}

double Widget::getMotor_state49() const
{
    return motor_state49;
}

void Widget::setMotor_state49(double value)
{
    motor_state49 = value;
}

double Widget::getMotor_state48() const
{
    return motor_state48;
}

void Widget::setMotor_state48(double value)
{
    motor_state48 = value;
}

double Widget::getMotor_state47() const
{
    return motor_state47;
}

void Widget::setMotor_state47(double value)
{
    motor_state47 = value;
}

double Widget::getMotor_state33() const
{
    return motor_state33;
}

void Widget::setMotor_state33(double value)
{
    motor_state33 = value;
}

bool Widget::getMotor_state13() const
{
    return motor_state13;
}

void Widget::setMotor_state13(bool value)
{
    motor_state13 = value;
}

double Widget::getMotor_state56() const
{
    return motor_state56;
}

void Widget::setMotor_state56(double value)
{
    motor_state56 = value;
}

double Widget::getMotor_state55() const
{
    return motor_state55;
}

void Widget::setMotor_state55(double value)
{
    motor_state55 = value;
}

double Widget::getMotor_state54() const
{
    return motor_state54;
}

void Widget::setMotor_state54(double value)
{
    motor_state54 = value;
}

double Widget::getMotor_state46() const
{
    return motor_state46;
}

void Widget::setMotor_state46(double value)
{
    motor_state46 = value;
}

double Widget::getMotor_state45() const
{
    return motor_state45;
}

void Widget::setMotor_state45(double value)
{
    motor_state45 = value;
}

double Widget::getMotor_state44() const
{
    return motor_state44;
}

void Widget::setMotor_state44(double value)
{
    motor_state44 = value;
}

double Widget::getMotor_state32() const
{
    return motor_state32;
}

void Widget::setMotor_state32(double value)
{
    motor_state32 = value;
}

bool Widget::getMotor_state12() const
{
    return motor_state12;
}

void Widget::setMotor_state12(bool value)
{
    motor_state12 = value;
}

double Widget::getMotor_state53() const
{
    return motor_state53;
}

void Widget::setMotor_state53(double value)
{
    motor_state53 = value;
}

double Widget::getMotor_state52() const
{
    return motor_state52;
}

void Widget::setMotor_state52(double value)
{
    motor_state52 = value;
}

double Widget::getMotor_state51() const
{
    return motor_state51;
}

void Widget::setMotor_state51(double value)
{
    motor_state51 = value;
}

double Widget::getMotor_state43() const
{
    return motor_state43;
}

void Widget::setMotor_state43(double value)
{
    motor_state43 = value;
}

double Widget::getMotor_state42() const
{
    return motor_state42;
}

void Widget::setMotor_state42(double value)
{
    motor_state42 = value;
}

double Widget::getMotor_state41() const
{
    return motor_state41;
}

void Widget::setMotor_state41(double value)
{
    motor_state41 = value;
}

double Widget::getMotor_state31() const
{
    return motor_state31;
}

void Widget::setMotor_state31(double value)
{
    motor_state31 = value;
}

bool Widget::getMotor_state11() const
{
    return motor_state11;
}

void Widget::setMotor_state11(bool value)
{
    motor_state11 = value;
}

bool Widget::getPage6_param34() const
{
    return page6_param34;
}

void Widget::setPage6_param34(bool value)
{
    page6_param34 = value;
}

bool Widget::getPage6_param32() const
{
    return page6_param32;
}

void Widget::setPage6_param32(bool value)
{
    page6_param32 = value;
}

bool Widget::getPage6_param24() const
{
    return page6_param24;
}

void Widget::setPage6_param24(bool value)
{
    page6_param24 = value;
}

bool Widget::getPage6_param22() const
{
    return page6_param22;
}

void Widget::setPage6_param22(bool value)
{
    page6_param22 = value;
}

bool Widget::getPage6_param14() const
{
    return page6_param14;
}

void Widget::setPage6_param14(bool value)
{
    page6_param14 = value;
}

double Widget::getMotor_state518_2() const
{
    return motor_state518;
}

void Widget::setMotor_state518_2(double value)
{
    motor_state518 = value;
}

double Widget::getMotor_state517_2() const
{
    return motor_state517;
}

void Widget::setMotor_state517_2(double value)
{
    motor_state517 = value;
}

double Widget::getMotor_state516_2() const
{
    return motor_state516;
}

void Widget::setMotor_state516_2(double value)
{
    motor_state516 = value;
}

double Widget::getMotor_state418_2() const
{
    return motor_state418;
}

void Widget::setMotor_state418_2(double value)
{
    motor_state418 = value;
}

double Widget::getMotor_state417_2() const
{
    return motor_state417;
}

void Widget::setMotor_state417_2(double value)
{
    motor_state417 = value;
}

double Widget::getMotor_state416_2() const
{
    return motor_state416;
}

void Widget::setMotor_state416_2(double value)
{
    motor_state416 = value;
}

double Widget::getMotor_state36_2() const
{
    return motor_state36;
}

void Widget::setMotor_state36_2(double value)
{
    motor_state36 = value;
}

bool Widget::getMotor_state16_2() const
{
    return motor_state16;
}

void Widget::setMotor_state16_2(bool value)
{
    motor_state16 = value;
}

double Widget::getMotor_state515_2() const
{
    return motor_state515;
}

void Widget::setMotor_state515_2(double value)
{
    motor_state515 = value;
}

double Widget::getMotor_state514_2() const
{
    return motor_state514;
}

void Widget::setMotor_state514_2(double value)
{
    motor_state514 = value;
}

double Widget::getMotor_state513_2() const
{
    return motor_state513;
}

void Widget::setMotor_state513_2(double value)
{
    motor_state513 = value;
}

double Widget::getMotor_state415_2() const
{
    return motor_state415;
}

void Widget::setMotor_state415_2(double value)
{
    motor_state415 = value;
}

double Widget::getMotor_state414_2() const
{
    return motor_state414;
}

void Widget::setMotor_state414_2(double value)
{
    motor_state414 = value;
}

double Widget::getMotor_state413_2() const
{
    return motor_state413;
}

void Widget::setMotor_state413_2(double value)
{
    motor_state413 = value;
}

double Widget::getMotor_state35_2() const
{
    return motor_state35;
}

void Widget::setMotor_state35_2(double value)
{
    motor_state35 = value;
}

bool Widget::getMotor_state15_2() const
{
    return motor_state15;
}

void Widget::setMotor_state15_2(bool value)
{
    motor_state15 = value;
}

double Widget::getMotor_state512_2() const
{
    return motor_state512;
}

void Widget::setMotor_state512_2(double value)
{
    motor_state512 = value;
}

double Widget::getMotor_state511_2() const
{
    return motor_state511;
}

void Widget::setMotor_state511_2(double value)
{
    motor_state511 = value;
}

double Widget::getMotor_state510_2() const
{
    return motor_state510;
}

void Widget::setMotor_state510_2(double value)
{
    motor_state510 = value;
}

double Widget::getMotor_state412_2() const
{
    return motor_state412;
}

void Widget::setMotor_state412_2(double value)
{
    motor_state412 = value;
}

double Widget::getMotor_state411_2() const
{
    return motor_state411;
}

void Widget::setMotor_state411_2(double value)
{
    motor_state411 = value;
}

double Widget::getMotor_state410_2() const
{
    return motor_state410;
}

void Widget::setMotor_state410_2(double value)
{
    motor_state410 = value;
}

double Widget::getMotor_state34_2() const
{
    return motor_state34;
}

void Widget::setMotor_state34_2(double value)
{
    motor_state34 = value;
}

bool Widget::getMotor_state14_2() const
{
    return motor_state14;
}

void Widget::setMotor_state14_2(bool value)
{
    motor_state14 = value;
}

double Widget::getMotor_state59_2() const
{
    return motor_state59;
}

void Widget::setMotor_state59_2(double value)
{
    motor_state59 = value;
}

double Widget::getMotor_state58_2() const
{
    return motor_state58;
}

void Widget::setMotor_state58_2(double value)
{
    motor_state58 = value;
}

double Widget::getMotor_state57_2() const
{
    return motor_state57;
}

void Widget::setMotor_state57_2(double value)
{
    motor_state57 = value;
}

double Widget::getMotor_state49_2() const
{
    return motor_state49;
}

void Widget::setMotor_state49_2(double value)
{
    motor_state49 = value;
}

double Widget::getMotor_state48_2() const
{
    return motor_state48;
}

void Widget::setMotor_state48_2(double value)
{
    motor_state48 = value;
}

double Widget::getMotor_state47_2() const
{
    return motor_state47;
}

void Widget::setMotor_state47_2(double value)
{
    motor_state47 = value;
}

double Widget::getMotor_state33_2() const
{
    return motor_state33;
}

void Widget::setMotor_state33_2(double value)
{
    motor_state33 = value;
}

bool Widget::getMotor_state13_2() const
{
    return motor_state13;
}

void Widget::setMotor_state13_2(bool value)
{
    motor_state13 = value;
}

double Widget::getMotor_state56_2() const
{
    return motor_state56;
}

void Widget::setMotor_state56_2(double value)
{
    motor_state56 = value;
}

double Widget::getMotor_state55_2() const
{
    return motor_state55;
}

void Widget::setMotor_state55_2(double value)
{
    motor_state55 = value;
}

double Widget::getMotor_state54_2() const
{
    return motor_state54;
}

void Widget::setMotor_state54_2(double value)
{
    motor_state54 = value;
}

double Widget::getMotor_state46_2() const
{
    return motor_state46;
}

void Widget::setMotor_state46_2(double value)
{
    motor_state46 = value;
}

double Widget::getMotor_state45_2() const
{
    return motor_state45;
}

void Widget::setMotor_state45_2(double value)
{
    motor_state45 = value;
}

double Widget::getMotor_state44_2() const
{
    return motor_state44;
}

void Widget::setMotor_state44_2(double value)
{
    motor_state44 = value;
}

double Widget::getMotor_state32_2() const
{
    return motor_state32;
}

void Widget::setMotor_state32_2(double value)
{
    motor_state32 = value;
}

bool Widget::getMotor_state12_2() const
{
    return motor_state12;
}

void Widget::setMotor_state12_2(bool value)
{
    motor_state12 = value;
}

double Widget::getMotor_state53_2() const
{
    return motor_state53;
}

void Widget::setMotor_state53_2(double value)
{
    motor_state53 = value;
}

double Widget::getMotor_state52_2() const
{
    return motor_state52;
}

void Widget::setMotor_state52_2(double value)
{
    motor_state52 = value;
}

double Widget::getMotor_state51_2() const
{
    return motor_state51;
}

void Widget::setMotor_state51_2(double value)
{
    motor_state51 = value;
}

double Widget::getMotor_state43_2() const
{
    return motor_state43;
}

void Widget::setMotor_state43_2(double value)
{
    motor_state43 = value;
}

double Widget::getMotor_state42_2() const
{
    return motor_state42;
}

void Widget::setMotor_state42_2(double value)
{
    motor_state42 = value;
}

double Widget::getMotor_state41_2() const
{
    return motor_state41;
}

void Widget::setMotor_state41_2(double value)
{
    motor_state41 = value;
}

double Widget::getMotor_state31_2() const
{
    return motor_state31;
}

void Widget::setMotor_state31_2(double value)
{
    motor_state31 = value;
}

bool Widget::getMotor_state11_2() const
{
    return motor_state11;
}

void Widget::setMotor_state11_2(bool value)
{
    motor_state11 = value;
}

bool Widget::getPage6_param34_2() const
{
    return page6_param34;
}

void Widget::setPage6_param34_2(bool value)
{
    page6_param34 = value;
}

bool Widget::getPage6_param32_2() const
{
    return page6_param32;
}

void Widget::setPage6_param32_2(bool value)
{
    page6_param32 = value;
}

bool Widget::getPage6_param24_2() const
{
    return page6_param24;
}

void Widget::setPage6_param24_2(bool value)
{
    page6_param24 = value;
}

bool Widget::getPage6_param22_2() const
{
    return page6_param22;
}

void Widget::setPage6_param22_2(bool value)
{
    page6_param22 = value;
}

bool Widget::getPage6_param14_2() const
{
    return page6_param14;
}

void Widget::setPage6_param14_2(bool value)
{
    page6_param14 = value;
}

double Widget::getMotor_state518_3() const
{
    return motor_state518;
}

void Widget::setMotor_state518_3(double value)
{
    motor_state518 = value;
}

double Widget::getMotor_state517_3() const
{
    return motor_state517;
}

void Widget::setMotor_state517_3(double value)
{
    motor_state517 = value;
}

double Widget::getMotor_state516_3() const
{
    return motor_state516;
}

void Widget::setMotor_state516_3(double value)
{
    motor_state516 = value;
}

double Widget::getMotor_state418_3() const
{
    return motor_state418;
}

void Widget::setMotor_state418_3(double value)
{
    motor_state418 = value;
}

double Widget::getMotor_state417_3() const
{
    return motor_state417;
}

void Widget::setMotor_state417_3(double value)
{
    motor_state417 = value;
}

double Widget::getMotor_state416_3() const
{
    return motor_state416;
}

void Widget::setMotor_state416_3(double value)
{
    motor_state416 = value;
}

double Widget::getMotor_state36_3() const
{
    return motor_state36;
}

void Widget::setMotor_state36_3(double value)
{
    motor_state36 = value;
}

bool Widget::getMotor_state16_3() const
{
    return motor_state16;
}

void Widget::setMotor_state16_3(bool value)
{
    motor_state16 = value;
}

double Widget::getMotor_state515_3() const
{
    return motor_state515;
}

void Widget::setMotor_state515_3(double value)
{
    motor_state515 = value;
}

double Widget::getMotor_state514_3() const
{
    return motor_state514;
}

void Widget::setMotor_state514_3(double value)
{
    motor_state514 = value;
}

double Widget::getMotor_state513_3() const
{
    return motor_state513;
}

void Widget::setMotor_state513_3(double value)
{
    motor_state513 = value;
}

double Widget::getMotor_state415_3() const
{
    return motor_state415;
}

void Widget::setMotor_state415_3(double value)
{
    motor_state415 = value;
}

double Widget::getMotor_state414_3() const
{
    return motor_state414;
}

void Widget::setMotor_state414_3(double value)
{
    motor_state414 = value;
}

double Widget::getMotor_state413_3() const
{
    return motor_state413;
}

void Widget::setMotor_state413_3(double value)
{
    motor_state413 = value;
}

double Widget::getMotor_state35_3() const
{
    return motor_state35;
}

void Widget::setMotor_state35_3(double value)
{
    motor_state35 = value;
}

bool Widget::getMotor_state15_3() const
{
    return motor_state15;
}

void Widget::setMotor_state15_3(bool value)
{
    motor_state15 = value;
}

double Widget::getMotor_state512_3() const
{
    return motor_state512;
}

void Widget::setMotor_state512_3(double value)
{
    motor_state512 = value;
}

double Widget::getMotor_state511_3() const
{
    return motor_state511;
}

void Widget::setMotor_state511_3(double value)
{
    motor_state511 = value;
}

double Widget::getMotor_state510_3() const
{
    return motor_state510;
}

void Widget::setMotor_state510_3(double value)
{
    motor_state510 = value;
}

double Widget::getMotor_state412_3() const
{
    return motor_state412;
}

void Widget::setMotor_state412_3(double value)
{
    motor_state412 = value;
}

double Widget::getMotor_state411_3() const
{
    return motor_state411;
}

void Widget::setMotor_state411_3(double value)
{
    motor_state411 = value;
}

double Widget::getMotor_state410_3() const
{
    return motor_state410;
}

void Widget::setMotor_state410_3(double value)
{
    motor_state410 = value;
}

double Widget::getMotor_state34_3() const
{
    return motor_state34;
}

void Widget::setMotor_state34_3(double value)
{
    motor_state34 = value;
}

bool Widget::getMotor_state14_3() const
{
    return motor_state14;
}

void Widget::setMotor_state14_3(bool value)
{
    motor_state14 = value;
}

double Widget::getMotor_state59_3() const
{
    return motor_state59;
}

void Widget::setMotor_state59_3(double value)
{
    motor_state59 = value;
}

double Widget::getMotor_state58_3() const
{
    return motor_state58;
}

void Widget::setMotor_state58_3(double value)
{
    motor_state58 = value;
}

double Widget::getMotor_state57_3() const
{
    return motor_state57;
}

void Widget::setMotor_state57_3(double value)
{
    motor_state57 = value;
}

double Widget::getMotor_state49_3() const
{
    return motor_state49;
}

void Widget::setMotor_state49_3(double value)
{
    motor_state49 = value;
}

double Widget::getMotor_state48_3() const
{
    return motor_state48;
}

void Widget::setMotor_state48_3(double value)
{
    motor_state48 = value;
}

double Widget::getMotor_state47_3() const
{
    return motor_state47;
}

void Widget::setMotor_state47_3(double value)
{
    motor_state47 = value;
}

double Widget::getMotor_state33_3() const
{
    return motor_state33;
}

void Widget::setMotor_state33_3(double value)
{
    motor_state33 = value;
}

bool Widget::getMotor_state13_3() const
{
    return motor_state13;
}

void Widget::setMotor_state13_3(bool value)
{
    motor_state13 = value;
}

double Widget::getMotor_state56_3() const
{
    return motor_state56;
}

void Widget::setMotor_state56_3(double value)
{
    motor_state56 = value;
}

double Widget::getMotor_state55_3() const
{
    return motor_state55;
}

void Widget::setMotor_state55_3(double value)
{
    motor_state55 = value;
}

double Widget::getMotor_state54_3() const
{
    return motor_state54;
}

void Widget::setMotor_state54_3(double value)
{
    motor_state54 = value;
}

double Widget::getMotor_state46_3() const
{
    return motor_state46;
}

void Widget::setMotor_state46_3(double value)
{
    motor_state46 = value;
}

double Widget::getMotor_state45_3() const
{
    return motor_state45;
}

void Widget::setMotor_state45_3(double value)
{
    motor_state45 = value;
}

double Widget::getMotor_state44_3() const
{
    return motor_state44;
}

void Widget::setMotor_state44_3(double value)
{
    motor_state44 = value;
}

double Widget::getMotor_state32_3() const
{
    return motor_state32;
}

void Widget::setMotor_state32_3(double value)
{
    motor_state32 = value;
}

bool Widget::getMotor_state12_3() const
{
    return motor_state12;
}

void Widget::setMotor_state12_3(bool value)
{
    motor_state12 = value;
}

double Widget::getMotor_state53_3() const
{
    return motor_state53;
}

void Widget::setMotor_state53_3(double value)
{
    motor_state53 = value;
}

double Widget::getMotor_state52_3() const
{
    return motor_state52;
}

void Widget::setMotor_state52_3(double value)
{
    motor_state52 = value;
}

double Widget::getMotor_state51_3() const
{
    return motor_state51;
}

void Widget::setMotor_state51_3(double value)
{
    motor_state51 = value;
}

double Widget::getMotor_state43_3() const
{
    return motor_state43;
}

void Widget::setMotor_state43_3(double value)
{
    motor_state43 = value;
}

double Widget::getMotor_state42_3() const
{
    return motor_state42;
}

void Widget::setMotor_state42_3(double value)
{
    motor_state42 = value;
}

double Widget::getMotor_state41_3() const
{
    return motor_state41;
}

void Widget::setMotor_state41_3(double value)
{
    motor_state41 = value;
}

double Widget::getMotor_state31_3() const
{
    return motor_state31;
}

void Widget::setMotor_state31_3(double value)
{
    motor_state31 = value;
}

bool Widget::getMotor_state11_3() const
{
    return motor_state11;
}

void Widget::setMotor_state11_3(bool value)
{
    motor_state11 = value;
}

bool Widget::getPage6_param34_3() const
{
    return page6_param34;
}

void Widget::setPage6_param34_3(bool value)
{
    page6_param34 = value;
}

bool Widget::getPage6_param32_3() const
{
    return page6_param32;
}

void Widget::setPage6_param32_3(bool value)
{
    page6_param32 = value;
}

bool Widget::getPage6_param24_3() const
{
    return page6_param24;
}

void Widget::setPage6_param24_3(bool value)
{
    page6_param24 = value;
}

bool Widget::getPage6_param22_3() const
{
    return page6_param22;
}

void Widget::setPage6_param22_3(bool value)
{
    page6_param22 = value;
}

bool Widget::getPage6_param14_3() const
{
    return page6_param14;
}

void Widget::setPage6_param14_3(bool value)
{
    page6_param14 = value;
}
double Widget::getMotor_state518_4() const
{
    return motor_state518;
}

void Widget::setMotor_state518_4(double value)
{
    motor_state518 = value;
}

double Widget::getMotor_state517_4() const
{
    return motor_state517;
}

void Widget::setMotor_state517_4(double value)
{
    motor_state517 = value;
}

double Widget::getMotor_state516_4() const
{
    return motor_state516;
}

void Widget::setMotor_state516_4(double value)
{
    motor_state516 = value;
}

double Widget::getMotor_state418_4() const
{
    return motor_state418;
}

void Widget::setMotor_state418_4(double value)
{
    motor_state418 = value;
}

double Widget::getMotor_state417_4() const
{
    return motor_state417;
}

void Widget::setMotor_state417_4(double value)
{
    motor_state417 = value;
}

double Widget::getMotor_state416_4() const
{
    return motor_state416;
}

void Widget::setMotor_state416_4(double value)
{
    motor_state416 = value;
}

double Widget::getMotor_state36_4() const
{
    return motor_state36;
}

void Widget::setMotor_state36_4(double value)
{
    motor_state36 = value;
}

bool Widget::getMotor_state16_4() const
{
    return motor_state16;
}

void Widget::setMotor_state16_4(bool value)
{
    motor_state16 = value;
}

double Widget::getMotor_state515_4() const
{
    return motor_state515;
}

void Widget::setMotor_state515_4(double value)
{
    motor_state515 = value;
}

double Widget::getMotor_state514_4() const
{
    return motor_state514;
}

void Widget::setMotor_state514_4(double value)
{
    motor_state514 = value;
}

double Widget::getMotor_state513_4() const
{
    return motor_state513;
}

void Widget::setMotor_state513_4(double value)
{
    motor_state513 = value;
}

double Widget::getMotor_state415_4() const
{
    return motor_state415;
}

void Widget::setMotor_state415_4(double value)
{
    motor_state415 = value;
}

double Widget::getMotor_state414_4() const
{
    return motor_state414;
}

void Widget::setMotor_state414_4(double value)
{
    motor_state414 = value;
}

double Widget::getMotor_state413_4() const
{
    return motor_state413;
}

void Widget::setMotor_state413_4(double value)
{
    motor_state413 = value;
}

double Widget::getMotor_state35_4() const
{
    return motor_state35;
}

void Widget::setMotor_state35_4(double value)
{
    motor_state35 = value;
}

bool Widget::getMotor_state15_4() const
{
    return motor_state15;
}

void Widget::setMotor_state15_4(bool value)
{
    motor_state15 = value;
}

double Widget::getMotor_state512_4() const
{
    return motor_state512;
}

void Widget::setMotor_state512_4(double value)
{
    motor_state512 = value;
}

double Widget::getMotor_state511_4() const
{
    return motor_state511;
}

void Widget::setMotor_state511_4(double value)
{
    motor_state511 = value;
}

double Widget::getMotor_state510_4() const
{
    return motor_state510;
}

void Widget::setMotor_state510_4(double value)
{
    motor_state510 = value;
}

double Widget::getMotor_state412_4() const
{
    return motor_state412;
}

void Widget::setMotor_state412_4(double value)
{
    motor_state412 = value;
}

double Widget::getMotor_state411_4() const
{
    return motor_state411;
}

void Widget::setMotor_state411_4(double value)
{
    motor_state411 = value;
}

double Widget::getMotor_state410_4() const
{
    return motor_state410;
}

void Widget::setMotor_state410_4(double value)
{
    motor_state410 = value;
}

double Widget::getMotor_state34_4() const
{
    return motor_state34;
}

void Widget::setMotor_state34_4(double value)
{
    motor_state34 = value;
}

bool Widget::getMotor_state14_4() const
{
    return motor_state14;
}

void Widget::setMotor_state14_4(bool value)
{
    motor_state14 = value;
}

double Widget::getMotor_state59_4() const
{
    return motor_state59;
}

void Widget::setMotor_state59_4(double value)
{
    motor_state59 = value;
}

double Widget::getMotor_state58_4() const
{
    return motor_state58;
}

void Widget::setMotor_state58_4(double value)
{
    motor_state58 = value;
}

double Widget::getMotor_state57_4() const
{
    return motor_state57;
}

void Widget::setMotor_state57_4(double value)
{
    motor_state57 = value;
}

double Widget::getMotor_state49_4() const
{
    return motor_state49;
}

void Widget::setMotor_state49_4(double value)
{
    motor_state49 = value;
}

double Widget::getMotor_state48_4() const
{
    return motor_state48;
}

void Widget::setMotor_state48_4(double value)
{
    motor_state48 = value;
}

double Widget::getMotor_state47_4() const
{
    return motor_state47;
}

void Widget::setMotor_state47_4(double value)
{
    motor_state47 = value;
}

double Widget::getMotor_state33_4() const
{
    return motor_state33;
}

void Widget::setMotor_state33_4(double value)
{
    motor_state33 = value;
}

bool Widget::getMotor_state13_4() const
{
    return motor_state13;
}

void Widget::setMotor_state13_4(bool value)
{
    motor_state13 = value;
}

double Widget::getMotor_state56_4() const
{
    return motor_state56;
}

void Widget::setMotor_state56_4(double value)
{
    motor_state56 = value;
}

double Widget::getMotor_state55_4() const
{
    return motor_state55;
}

void Widget::setMotor_state55_4(double value)
{
    motor_state55 = value;
}

double Widget::getMotor_state54_4() const
{
    return motor_state54;
}

void Widget::setMotor_state54_4(double value)
{
    motor_state54 = value;
}

double Widget::getMotor_state46_4() const
{
    return motor_state46;
}

void Widget::setMotor_state46_4(double value)
{
    motor_state46 = value;
}

double Widget::getMotor_state45_4() const
{
    return motor_state45;
}

void Widget::setMotor_state45_4(double value)
{
    motor_state45 = value;
}

double Widget::getMotor_state44_4() const
{
    return motor_state44;
}

void Widget::setMotor_state44_4(double value)
{
    motor_state44 = value;
}

double Widget::getMotor_state32_4() const
{
    return motor_state32;
}

void Widget::setMotor_state32_4(double value)
{
    motor_state32 = value;
}

bool Widget::getMotor_state12_4() const
{
    return motor_state12;
}

void Widget::setMotor_state12_4(bool value)
{
    motor_state12 = value;
}

double Widget::getMotor_state53_4() const
{
    return motor_state53;
}

void Widget::setMotor_state53_4(double value)
{
    motor_state53 = value;
}

double Widget::getMotor_state52_4() const
{
    return motor_state52;
}

void Widget::setMotor_state52_4(double value)
{
    motor_state52 = value;
}

double Widget::getMotor_state51_4() const
{
    return motor_state51;
}

void Widget::setMotor_state51_4(double value)
{
    motor_state51 = value;
}

double Widget::getMotor_state43_4() const
{
    return motor_state43;
}

void Widget::setMotor_state43_4(double value)
{
    motor_state43 = value;
}

double Widget::getMotor_state42_4() const
{
    return motor_state42;
}

void Widget::setMotor_state42_4(double value)
{
    motor_state42 = value;
}

double Widget::getMotor_state41_4() const
{
    return motor_state41;
}

void Widget::setMotor_state41_4(double value)
{
    motor_state41 = value;
}

double Widget::getMotor_state31_4() const
{
    return motor_state31;
}

void Widget::setMotor_state31_4(double value)
{
    motor_state31 = value;
}

bool Widget::getMotor_state11_4() const
{
    return motor_state11;
}

void Widget::setMotor_state11_4(bool value)
{
    motor_state11 = value;
}

bool Widget::getPage6_param34_4() const
{
    return page6_param34;
}

void Widget::setPage6_param34_4(bool value)
{
    page6_param34 = value;
}

bool Widget::getPage6_param32_4() const
{
    return page6_param32;
}

void Widget::setPage6_param32_4(bool value)
{
    page6_param32 = value;
}

bool Widget::getPage6_param24_4() const
{
    return page6_param24;
}

void Widget::setPage6_param24_4(bool value)
{
    page6_param24 = value;
}

bool Widget::getPage6_param22_4() const
{
    return page6_param22;
}

void Widget::setPage6_param22_4(bool value)
{
    page6_param22 = value;
}

bool Widget::getPage6_param14_4() const
{
    return page6_param14;
}

void Widget::setPage6_param14_4(bool value)
{
    page6_param14 = value;
}

//**************************************
//****************陈溢铭***********************

bool Widget::getPage2_state56() const
{
    return page2_state56;
}

void Widget::setPage2_state56(bool value)
{
    page2_state56 = value;
}

bool Widget::getPage2_state46() const
{
    return page2_state46;
}

void Widget::setPage2_state46(bool value)
{
    page2_state46 = value;
}

double Widget::getPage2_state36() const
{
    return page2_state36;
}

void Widget::setPage2_state36(double value)
{
    page2_state36 = value;
}

bool Widget::getPage2_state26() const
{
    return page2_state26;
}

void Widget::setPage2_state26(bool value)
{
    page2_state26 = value;
}

bool Widget::getPage2_state16() const
{
    return page2_state16;
}

void Widget::setPage2_state16(bool value)
{
    page2_state16 = value;
}

bool Widget::getPage2_state55() const
{
    return page2_state55;
}

void Widget::setPage2_state55(bool value)
{
    page2_state55 = value;
}

bool Widget::getPage2_state45() const
{
    return page2_state45;
}

void Widget::setPage2_state45(bool value)
{
    page2_state45 = value;
}

double Widget::getPage2_state35() const
{
    return page2_state35;
}

void Widget::setPage2_state35(double value)
{
    page2_state35 = value;
}

bool Widget::getPage2_state25() const
{
    return page2_state25;
}

void Widget::setPage2_state25(bool value)
{
    page2_state25 = value;
}

bool Widget::getPage2_state15() const
{
    return page2_state15;
}

void Widget::setPage2_state15(bool value)
{
    page2_state15 = value;
}

bool Widget::getPage2_state54() const
{
    return page2_state54;
}

void Widget::setPage2_state54(bool value)
{
    page2_state54 = value;
}

bool Widget::getPage2_state44() const
{
    return page2_state44;
}

void Widget::setPage2_state44(bool value)
{
    page2_state44 = value;
}

double Widget::getPage2_state34() const
{
    return page2_state34;
}

void Widget::setPage2_state34(double value)
{
    page2_state34 = value;
}

bool Widget::getPage2_state24() const
{
    return page2_state24;
}

void Widget::setPage2_state24(bool value)
{
    page2_state24 = value;
}

bool Widget::getPage2_state14() const
{
    return page2_state14;
}

void Widget::setPage2_state14(bool value)
{
    page2_state14 = value;
}

bool Widget::getPage2_state53() const
{
    return page2_state53;
}

void Widget::setPage2_state53(bool value)
{
    page2_state53 = value;
}

bool Widget::getPage2_state43() const
{
    return page2_state43;
}

void Widget::setPage2_state43(bool value)
{
    page2_state43 = value;
}

double Widget::getPage2_state33() const
{
    return page2_state33;
}

void Widget::setPage2_state33(double value)
{
    page2_state33 = value;
}

bool Widget::getPage2_state23() const
{
    return page2_state23;
}

void Widget::setPage2_state23(bool value)
{
    page2_state23 = value;
}

bool Widget::getPage2_state13() const
{
    return page2_state13;
}

void Widget::setPage2_state13(bool value)
{
    page2_state13 = value;
}

bool Widget::getPage2_state51() const
{
    return page2_state51;
}

void Widget::setPage2_state51(bool value)
{
    page2_state51 = value;
}

bool Widget::getPage2_state41() const
{
    return page2_state41;
}

void Widget::setPage2_state41(bool value)
{
    page2_state41 = value;
}

double Widget::getPage2_state31() const
{
    return page2_state31;
}

void Widget::setPage2_state31(double value)
{
    page2_state31 = value;
}

bool Widget::getPage2_state21() const
{
    return page2_state21;
}

void Widget::setPage2_state21(bool value)
{
    page2_state21 = value;
}

bool Widget::getPage2_state11() const
{
    return page2_state11;
}

void Widget::setPage2_state11(bool value)
{
    page2_state11 = value;
}

double Widget::getPage2_elec_elec8() const
{
    return page2_elec_elec8;
}

void Widget::setPage2_elec_elec8(double value)
{
    page2_elec_elec8 = value;
}

double Widget::getPage2_elec_elec7() const
{
    return page2_elec_elec7;
}

void Widget::setPage2_elec_elec7(double value)
{
    page2_elec_elec7 = value;
}

double Widget::getPage2_elec_elec6() const
{
    return page2_elec_elec6;
}

void Widget::setPage2_elec_elec6(double value)
{
    page2_elec_elec6 = value;
}

double Widget::getPage2_elec_elec5() const
{
    return page2_elec_elec5;
}

void Widget::setPage2_elec_elec5(double value)
{
    page2_elec_elec5 = value;
}

double Widget::getPage2_elec_elec4() const
{
    return page2_elec_elec4;
}

void Widget::setPage2_elec_elec4(double value)
{
    page2_elec_elec4 = value;
}

double Widget::getPage2_elec_elec3() const
{
    return page2_elec_elec3;
}

void Widget::setPage2_elec_elec3(double value)
{
    page2_elec_elec3 = value;
}

double Widget::getPage2_elec_elec2() const
{
    return page2_elec_elec2;
}

void Widget::setPage2_elec_elec2(double value)
{
    page2_elec_elec2 = value;
}

double Widget::getPage2_elec_elec1() const
{
    return page2_elec_elec1;
}

void Widget::setPage2_elec_elec1(double value)
{
    page2_elec_elec1 = value;
}

bool Widget::getZhangjinwancheng_state() const
{
    return zhangjinwancheng_state;
}

void Widget::setZhangjinwancheng_state(bool value)
{
    zhangjinwancheng_state = value;
}

bool Widget::getZhangjinkongzhi_state() const
{
    return zhangjinkongzhi_state;
}

void Widget::setZhangjinkongzhi_state(bool value)
{
    zhangjinkongzhi_state = value;
}

bool Widget::getGuozaishuchu_state() const
{
    return guozaishuchu_state;
}

void Widget::setGuozaishuchu_state(bool value)
{
    guozaishuchu_state = value;
}

bool Widget::getJitingshuchu_state() const
{
    return jitingshuchu_state;
}

void Widget::setJitingshuchu_state(bool value)
{
    jitingshuchu_state = value;
}

bool Widget::getZhunbeijiuxu_state() const
{
    return zhunbeijiuxu_state;
}

void Widget::setZhunbeijiuxu_state(bool value)
{
    zhunbeijiuxu_state = value;
}

bool Widget::getBeituoshuchu_state() const
{
    return beituoshuchu_state;
}

void Widget::setBeituoshuchu_state(bool value)
{
    beituoshuchu_state = value;
}

bool Widget::getChouchengwendu_state() const
{
    return chouchengwendu_state;
}

void Widget::setChouchengwendu_state(bool value)
{
    chouchengwendu_state = value;
}

bool Widget::getRaozuwendu_state() const
{
    return raozuwendu_state;
}

void Widget::setRaozuwendu_state(bool value)
{
    raozuwendu_state = value;
}

bool Widget::getGuntongwendu_state() const
{
    return guntongwendu_state;
}

void Widget::setGuntongwendu_state(bool value)
{
    guntongwendu_state = value;
}

bool Widget::getHuanjingwendu_state() const
{
    return huanjingwendu_state;
}

void Widget::setHuanjingwendu_state(bool value)
{
    huanjingwendu_state = value;
}

bool Widget::getSashuifa_state() const
{
    return sashuifa_state;
}

void Widget::setSashuifa_state(bool value)
{
    sashuifa_state = value;
}

bool Widget::getZhanglibaohu_state() const
{
    return zhanglibaohu_state;
}

void Widget::setZhanglibaohu_state(bool value)
{
    zhanglibaohu_state = value;
}

bool Widget::getSudubaohu_state() const
{
    return sudubaohu_state;
}

void Widget::setSudubaohu_state(bool value)
{
    sudubaohu_state = value;
}

bool Widget::getYanwubaohu_state() const
{
    return yanwubaohu_state;
}

void Widget::setYanwubaohu_state(bool value)
{
    yanwubaohu_state = value;
}

bool Widget::getZongsibaohu_state() const
{
    return zongsibaohu_state;
}

void Widget::setZongsibaohu_state(bool value)
{
    zongsibaohu_state = value;
}

bool Widget::getDuimeibaohu_state() const
{
    return duimeibaohu_state;
}

void Widget::setDuimeibaohu_state(bool value)
{
    duimeibaohu_state = value;
}

bool Widget::getErjipaopian_state() const
{
    return erjipaopian_state;
}

void Widget::setErjipaopian_state(bool value)
{
    erjipaopian_state = value;
}

bool Widget::getYijipaopian_state() const
{
    return yijipaopian_state;
}

void Widget::setYijipaopian_state(bool value)
{
    yijipaopian_state = value;
}
bool Widget::getPage2_state56_4() const
{
    return page2_state56_4;
}

void Widget::setPage2_state56_4(bool value)
{
    page2_state56_4 = value;
}

bool Widget::getPage2_state46_4() const
{
    return page2_state46_4;
}

void Widget::setPage2_state46_4(bool value)
{
    page2_state46_4 = value;
}

double Widget::getPage2_state36_4() const
{
    return page2_state36_4;
}

void Widget::setPage2_state36_4(double value)
{
    page2_state36_4 = value;
}

bool Widget::getPage2_state26_4() const
{
    return page2_state26_4;
}

void Widget::setPage2_state26_4(bool value)
{
    page2_state26_4 = value;
}

bool Widget::getPage2_state16_4() const
{
    return page2_state16_4;
}

void Widget::setPage2_state16_4(bool value)
{
    page2_state16_4 = value;
}

bool Widget::getPage2_state56_3() const
{
    return page2_state56_3;
}

void Widget::setPage2_state56_3(bool value)
{
    page2_state56_3 = value;
}

bool Widget::getPage2_state46_3() const
{
    return page2_state46_3;
}

void Widget::setPage2_state46_3(bool value)
{
    page2_state46_3 = value;
}

double Widget::getPage2_state36_3() const
{
    return page2_state36_3;
}

void Widget::setPage2_state36_3(double value)
{
    page2_state36_3 = value;
}

bool Widget::getPage2_state26_3() const
{
    return page2_state26_3;
}

void Widget::setPage2_state26_3(bool value)
{
    page2_state26_3 = value;
}

bool Widget::getPage2_state16_3() const
{
    return page2_state16_3;
}

void Widget::setPage2_state16_3(bool value)
{
    page2_state16_3 = value;
}

bool Widget::getPage2_state56_2() const
{
    return page2_state56_2;
}

void Widget::setPage2_state56_2(bool value)
{
    page2_state56_2 = value;
}

bool Widget::getPage2_state46_2() const
{
    return page2_state46_2;
}

void Widget::setPage2_state46_2(bool value)
{
    page2_state46_2 = value;
}

double Widget::getPage2_state36_2() const
{
    return page2_state36_2;
}

void Widget::setPage2_state36_2(double value)
{
    page2_state36_2 = value;
}

bool Widget::getPage2_state26_2() const
{
    return page2_state26_2;
}

void Widget::setPage2_state26_2(bool value)
{
    page2_state26_2 = value;
}

bool Widget::getPage2_state16_2() const
{
    return page2_state16_2;
}

void Widget::setPage2_state16_2(bool value)
{
    page2_state16_2 = value;
}

bool Widget::getPage2_state55_4() const
{
    return page2_state55_4;
}

void Widget::setPage2_state55_4(bool value)
{
    page2_state55_4 = value;
}

bool Widget::getPage2_state45_4() const
{
    return page2_state45_4;
}

void Widget::setPage2_state45_4(bool value)
{
    page2_state45_4 = value;
}

double Widget::getPage2_state35_4() const
{
    return page2_state35_4;
}

void Widget::setPage2_state35_4(double value)
{
    page2_state35_4 = value;
}

bool Widget::getPage2_state25_4() const
{
    return page2_state25_4;
}

void Widget::setPage2_state25_4(bool value)
{
    page2_state25_4 = value;
}

bool Widget::getPage2_state15_4() const
{
    return page2_state15_4;
}

void Widget::setPage2_state15_4(bool value)
{
    page2_state15_4 = value;
}

bool Widget::getPage2_state55_3() const
{
    return page2_state55_3;
}

void Widget::setPage2_state55_3(bool value)
{
    page2_state55_3 = value;
}

bool Widget::getPage2_state45_3() const
{
    return page2_state45_3;
}

void Widget::setPage2_state45_3(bool value)
{
    page2_state45_3 = value;
}

double Widget::getPage2_state35_3() const
{
    return page2_state35_3;
}

void Widget::setPage2_state35_3(double value)
{
    page2_state35_3 = value;
}

bool Widget::getPage2_state25_3() const
{
    return page2_state25_3;
}

void Widget::setPage2_state25_3(bool value)
{
    page2_state25_3 = value;
}

bool Widget::getPage2_state15_3() const
{
    return page2_state15_3;
}

void Widget::setPage2_state15_3(bool value)
{
    page2_state15_3 = value;
}

bool Widget::getPage2_state55_2() const
{
    return page2_state55_2;
}

void Widget::setPage2_state55_2(bool value)
{
    page2_state55_2 = value;
}

bool Widget::getPage2_state45_2() const
{
    return page2_state45_2;
}

void Widget::setPage2_state45_2(bool value)
{
    page2_state45_2 = value;
}

double Widget::getPage2_state35_2() const
{
    return page2_state35_2;
}

void Widget::setPage2_state35_2(double value)
{
    page2_state35_2 = value;
}

bool Widget::getPage2_state25_2() const
{
    return page2_state25_2;
}

void Widget::setPage2_state25_2(bool value)
{
    page2_state25_2 = value;
}

bool Widget::getPage2_state15_2() const
{
    return page2_state15_2;
}

void Widget::setPage2_state15_2(bool value)
{
    page2_state15_2 = value;
}

bool Widget::getPage2_state54_4() const
{
    return page2_state54_4;
}

void Widget::setPage2_state54_4(bool value)
{
    page2_state54_4 = value;
}

bool Widget::getPage2_state44_4() const
{
    return page2_state44_4;
}

void Widget::setPage2_state44_4(bool value)
{
    page2_state44_4 = value;
}

double Widget::getPage2_state34_4() const
{
    return page2_state34_4;
}

void Widget::setPage2_state34_4(double value)
{
    page2_state34_4 = value;
}

bool Widget::getPage2_state24_4() const
{
    return page2_state24_4;
}

void Widget::setPage2_state24_4(bool value)
{
    page2_state24_4 = value;
}

bool Widget::getPage2_state14_4() const
{
    return page2_state14_4;
}

void Widget::setPage2_state14_4(bool value)
{
    page2_state14_4 = value;
}

bool Widget::getPage2_state54_3() const
{
    return page2_state54_3;
}

void Widget::setPage2_state54_3(bool value)
{
    page2_state54_3 = value;
}

bool Widget::getPage2_state44_3() const
{
    return page2_state44_3;
}

void Widget::setPage2_state44_3(bool value)
{
    page2_state44_3 = value;
}

double Widget::getPage2_state34_3() const
{
    return page2_state34_3;
}

void Widget::setPage2_state34_3(double value)
{
    page2_state34_3 = value;
}

bool Widget::getPage2_state24_3() const
{
    return page2_state24_3;
}

void Widget::setPage2_state24_3(bool value)
{
    page2_state24_3 = value;
}

bool Widget::getPage2_state14_3() const
{
    return page2_state14_3;
}

void Widget::setPage2_state14_3(bool value)
{
    page2_state14_3 = value;
}

bool Widget::getPage2_state54_2() const
{
    return page2_state54_2;
}

void Widget::setPage2_state54_2(bool value)
{
    page2_state54_2 = value;
}

bool Widget::getPage2_state44_2() const
{
    return page2_state44_2;
}

void Widget::setPage2_state44_2(bool value)
{
    page2_state44_2 = value;
}

double Widget::getPage2_state34_2() const
{
    return page2_state34_2;
}

void Widget::setPage2_state34_2(double value)
{
    page2_state34_2 = value;
}

bool Widget::getPage2_state24_2() const
{
    return page2_state24_2;
}

void Widget::setPage2_state24_2(bool value)
{
    page2_state24_2 = value;
}

bool Widget::getPage2_state14_2() const
{
    return page2_state14_2;
}

void Widget::setPage2_state14_2(bool value)
{
    page2_state14_2 = value;
}

bool Widget::getPage2_state53_4() const
{
    return page2_state53_4;
}

void Widget::setPage2_state53_4(bool value)
{
    page2_state53_4 = value;
}

bool Widget::getPage2_state43_4() const
{
    return page2_state43_4;
}

void Widget::setPage2_state43_4(bool value)
{
    page2_state43_4 = value;
}

double Widget::getPage2_state33_4() const
{
    return page2_state33_4;
}

void Widget::setPage2_state33_4(double value)
{
    page2_state33_4 = value;
}

bool Widget::getPage2_state23_4() const
{
    return page2_state23_4;
}

void Widget::setPage2_state23_4(bool value)
{
    page2_state23_4 = value;
}

bool Widget::getPage2_state13_4() const
{
    return page2_state13_4;
}

void Widget::setPage2_state13_4(bool value)
{
    page2_state13_4 = value;
}

bool Widget::getPage2_state53_3() const
{
    return page2_state53_3;
}

void Widget::setPage2_state53_3(bool value)
{
    page2_state53_3 = value;
}

bool Widget::getPage2_state43_3() const
{
    return page2_state43_3;
}

void Widget::setPage2_state43_3(bool value)
{
    page2_state43_3 = value;
}

double Widget::getPage2_state33_3() const
{
    return page2_state33_3;
}

void Widget::setPage2_state33_3(double value)
{
    page2_state33_3 = value;
}

bool Widget::getPage2_state23_3() const
{
    return page2_state23_3;
}

void Widget::setPage2_state23_3(bool value)
{
    page2_state23_3 = value;
}

bool Widget::getPage2_state13_3() const
{
    return page2_state13_3;
}

void Widget::setPage2_state13_3(bool value)
{
    page2_state13_3 = value;
}

bool Widget::getPage2_state53_2() const
{
    return page2_state53_2;
}

void Widget::setPage2_state53_2(bool value)
{
    page2_state53_2 = value;
}

bool Widget::getPage2_state43_2() const
{
    return page2_state43_2;
}

void Widget::setPage2_state43_2(bool value)
{
    page2_state43_2 = value;
}

double Widget::getPage2_state33_2() const
{
    return page2_state33_2;
}

void Widget::setPage2_state33_2(double value)
{
    page2_state33_2 = value;
}

bool Widget::getPage2_state23_2() const
{
    return page2_state23_2;
}

void Widget::setPage2_state23_2(bool value)
{
    page2_state23_2 = value;
}

bool Widget::getPage2_state13_2() const
{
    return page2_state13_2;
}

void Widget::setPage2_state13_2(bool value)
{
    page2_state13_2 = value;
}

bool Widget::getPage2_state52_4() const
{
    return page2_state52_4;
}

void Widget::setPage2_state52_4(bool value)
{
    page2_state52_4 = value;
}

bool Widget::getPage2_state42_4() const
{
    return page2_state42_4;
}

void Widget::setPage2_state42_4(bool value)
{
    page2_state42_4 = value;
}

double Widget::getPage2_state32_4() const
{
    return page2_state32_4;
}

void Widget::setPage2_state32_4(double value)
{
    page2_state32_4 = value;
}

bool Widget::getPage2_state22_4() const
{
    return page2_state22_4;
}

void Widget::setPage2_state22_4(bool value)
{
    page2_state22_4 = value;
}

bool Widget::getPage2_state12_4() const
{
    return page2_state12_4;
}

void Widget::setPage2_state12_4(bool value)
{
    page2_state12_4 = value;
}

bool Widget::getPage2_state52_3() const
{
    return page2_state52_3;
}

void Widget::setPage2_state52_3(bool value)
{
    page2_state52_3 = value;
}

bool Widget::getPage2_state42_3() const
{
    return page2_state42_3;
}

void Widget::setPage2_state42_3(bool value)
{
    page2_state42_3 = value;
}

double Widget::getPage2_state32_3() const
{
    return page2_state32_3;
}

void Widget::setPage2_state32_3(double value)
{
    page2_state32_3 = value;
}

bool Widget::getPage2_state22_3() const
{
    return page2_state22_3;
}

void Widget::setPage2_state22_3(bool value)
{
    page2_state22_3 = value;
}

bool Widget::getPage2_state12_3() const
{
    return page2_state12_3;
}

void Widget::setPage2_state12_3(bool value)
{
    page2_state12_3 = value;
}

bool Widget::getPage2_state52_2() const
{
    return page2_state52_2;
}

void Widget::setPage2_state52_2(bool value)
{
    page2_state52_2 = value;
}

bool Widget::getPage2_state42_2() const
{
    return page2_state42_2;
}

void Widget::setPage2_state42_2(bool value)
{
    page2_state42_2 = value;
}

double Widget::getPage2_state32_2() const
{
    return page2_state32_2;
}

void Widget::setPage2_state32_2(double value)
{
    page2_state32_2 = value;
}

bool Widget::getPage2_state22_2() const
{
    return page2_state22_2;
}

void Widget::setPage2_state22_2(bool value)
{
    page2_state22_2 = value;
}

bool Widget::getPage2_state12_2() const
{
    return page2_state12_2;
}

void Widget::setPage2_state12_2(bool value)
{
    page2_state12_2 = value;
}

bool Widget::getPage2_state52() const
{
    return page2_state52;
}

void Widget::setPage2_state52(bool value)
{
    page2_state52 = value;
}

bool Widget::getPage2_state42() const
{
    return page2_state42;
}

void Widget::setPage2_state42(bool value)
{
    page2_state42 = value;
}

double Widget::getPage2_state32() const
{
    return page2_state32;
}

void Widget::setPage2_state32(double value)
{
    page2_state32 = value;
}

bool Widget::getPage2_state22() const
{
    return page2_state22;
}

void Widget::setPage2_state22(bool value)
{
    page2_state22 = value;
}

bool Widget::getPage2_state12() const
{
    return page2_state12;
}

void Widget::setPage2_state12(bool value)
{
    page2_state12 = value;
}

bool Widget::getPage2_state51_4() const
{
    return page2_state51_4;
}

void Widget::setPage2_state51_4(bool value)
{
    page2_state51_4 = value;
}

bool Widget::getPage2_state41_4() const
{
    return page2_state41_4;
}

void Widget::setPage2_state41_4(bool value)
{
    page2_state41_4 = value;
}

double Widget::getPage2_state31_4() const
{
    return page2_state31_4;
}

void Widget::setPage2_state31_4(double value)
{
    page2_state31_4 = value;
}

bool Widget::getPage2_state21_4() const
{
    return page2_state21_4;
}

void Widget::setPage2_state21_4(bool value)
{
    page2_state21_4 = value;
}

bool Widget::getPage2_state11_4() const
{
    return page2_state11_4;
}

void Widget::setPage2_state11_4(bool value)
{
    page2_state11_4 = value;
}

bool Widget::getPage2_state51_3() const
{
    return page2_state51_3;
}

void Widget::setPage2_state51_3(bool value)
{
    page2_state51_3 = value;
}

bool Widget::getPage2_state41_3() const
{
    return page2_state41_3;
}

void Widget::setPage2_state41_3(bool value)
{
    page2_state41_3 = value;
}

double Widget::getPage2_state31_3() const
{
    return page2_state31_3;
}

void Widget::setPage2_state31_3(double value)
{
    page2_state31_3 = value;
}

bool Widget::getPage2_state21_3() const
{
    return page2_state21_3;
}

void Widget::setPage2_state21_3(bool value)
{
    page2_state21_3 = value;
}

bool Widget::getPage2_state11_3() const
{
    return page2_state11_3;
}

void Widget::setPage2_state11_3(bool value)
{
    page2_state11_3 = value;
}

bool Widget::getPage2_state51_2() const
{
    return page2_state51_2;
}

void Widget::setPage2_state51_2(bool value)
{
    page2_state51_2 = value;
}

bool Widget::getPage2_state41_2() const
{
    return page2_state41_2;
}

void Widget::setPage2_state41_2(bool value)
{
    page2_state41_2 = value;
}

double Widget::getPage2_state31_2() const
{
    return page2_state31_2;
}

void Widget::setPage2_state31_2(double value)
{
    page2_state31_2 = value;
}

bool Widget::getPage2_state21_2() const
{
    return page2_state21_2;
}

void Widget::setPage2_state21_2(bool value)
{
    page2_state21_2 = value;
}

bool Widget::getPage2_state11_2() const
{
    return page2_state11_2;
}

void Widget::setPage2_state11_2(bool value)
{
    page2_state11_2 = value;
}

bool Widget::getZhangjinwancheng_state_4() const
{
    return zhangjinwancheng_state_4;
}

void Widget::setZhangjinwancheng_state_4(bool value)
{
    zhangjinwancheng_state_4 = value;
}

bool Widget::getZhangjinkongzhi_state_4() const
{
    return zhangjinkongzhi_state_4;
}

void Widget::setZhangjinkongzhi_state_4(bool value)
{
    zhangjinkongzhi_state_4 = value;
}

bool Widget::getGuozaishuchu_state_4() const
{
    return guozaishuchu_state_4;
}

void Widget::setGuozaishuchu_state_4(bool value)
{
    guozaishuchu_state_4 = value;
}

bool Widget::getJitingshuchu_state_4() const
{
    return jitingshuchu_state_4;
}

void Widget::setJitingshuchu_state_4(bool value)
{
    jitingshuchu_state_4 = value;
}

bool Widget::getZhunbeijiuxu_state_4() const
{
    return zhunbeijiuxu_state_4;
}

void Widget::setZhunbeijiuxu_state_4(bool value)
{
    zhunbeijiuxu_state_4 = value;
}

bool Widget::getBeituoshuchu_state_4() const
{
    return beituoshuchu_state_4;
}

void Widget::setBeituoshuchu_state_4(bool value)
{
    beituoshuchu_state_4 = value;
}

bool Widget::getChouchengwendu_state_4() const
{
    return chouchengwendu_state_4;
}

void Widget::setChouchengwendu_state_4(bool value)
{
    chouchengwendu_state_4 = value;
}

bool Widget::getRaozuwendu_state_4() const
{
    return raozuwendu_state_4;
}

void Widget::setRaozuwendu_state_4(bool value)
{
    raozuwendu_state_4 = value;
}

bool Widget::getGuntongwendu_state_4() const
{
    return guntongwendu_state_4;
}

void Widget::setGuntongwendu_state_4(bool value)
{
    guntongwendu_state_4 = value;
}

bool Widget::getHuanjingwendu_state_4() const
{
    return huanjingwendu_state_4;
}

void Widget::setHuanjingwendu_state_4(bool value)
{
    huanjingwendu_state_4 = value;
}

bool Widget::getSashuifa_state_4() const
{
    return sashuifa_state_4;
}

void Widget::setSashuifa_state_4(bool value)
{
    sashuifa_state_4 = value;
}

bool Widget::getZhanglibaohu_state_4() const
{
    return zhanglibaohu_state_4;
}

void Widget::setZhanglibaohu_state_4(bool value)
{
    zhanglibaohu_state_4 = value;
}

bool Widget::getSudubaohu_state_4() const
{
    return sudubaohu_state_4;
}

void Widget::setSudubaohu_state_4(bool value)
{
    sudubaohu_state_4 = value;
}

bool Widget::getYanwubaohu_state_4() const
{
    return yanwubaohu_state_4;
}

void Widget::setYanwubaohu_state_4(bool value)
{
    yanwubaohu_state_4 = value;
}

bool Widget::getZongsibaohu_state_4() const
{
    return zongsibaohu_state_4;
}

void Widget::setZongsibaohu_state_4(bool value)
{
    zongsibaohu_state_4 = value;
}

bool Widget::getDuimeibaohu_state_4() const
{
    return duimeibaohu_state_4;
}

void Widget::setDuimeibaohu_state_4(bool value)
{
    duimeibaohu_state_4 = value;
}

bool Widget::getErjipaopian_state_4() const
{
    return erjipaopian_state_4;
}

void Widget::setErjipaopian_state_4(bool value)
{
    erjipaopian_state_4 = value;
}

bool Widget::getYijipaopian_state_4() const
{
    return yijipaopian_state_4;
}

void Widget::setYijipaopian_state_4(bool value)
{
    yijipaopian_state_4 = value;
}

bool Widget::getZhangjinwancheng_state_3() const
{
    return zhangjinwancheng_state_3;
}

void Widget::setZhangjinwancheng_state_3(bool value)
{
    zhangjinwancheng_state_3 = value;
}

bool Widget::getZhangjinkongzhi_state_3() const
{
    return zhangjinkongzhi_state_3;
}

void Widget::setZhangjinkongzhi_state_3(bool value)
{
    zhangjinkongzhi_state_3 = value;
}

bool Widget::getGuozaishuchu_state_3() const
{
    return guozaishuchu_state_3;
}

void Widget::setGuozaishuchu_state_3(bool value)
{
    guozaishuchu_state_3 = value;
}

bool Widget::getJitingshuchu_state_3() const
{
    return jitingshuchu_state_3;
}

void Widget::setJitingshuchu_state_3(bool value)
{
    jitingshuchu_state_3 = value;
}

bool Widget::getZhunbeijiuxu_state_3() const
{
    return zhunbeijiuxu_state_3;
}

void Widget::setZhunbeijiuxu_state_3(bool value)
{
    zhunbeijiuxu_state_3 = value;
}

bool Widget::getBeituoshuchu_state_3() const
{
    return beituoshuchu_state_3;
}

void Widget::setBeituoshuchu_state_3(bool value)
{
    beituoshuchu_state_3 = value;
}

bool Widget::getChouchengwendu_state_3() const
{
    return chouchengwendu_state_3;
}

void Widget::setChouchengwendu_state_3(bool value)
{
    chouchengwendu_state_3 = value;
}

bool Widget::getRaozuwendu_state_3() const
{
    return raozuwendu_state_3;
}

void Widget::setRaozuwendu_state_3(bool value)
{
    raozuwendu_state_3 = value;
}

bool Widget::getGuntongwendu_state_3() const
{
    return guntongwendu_state_3;
}

void Widget::setGuntongwendu_state_3(bool value)
{
    guntongwendu_state_3 = value;
}

bool Widget::getHuanjingwendu_state_3() const
{
    return huanjingwendu_state_3;
}

void Widget::setHuanjingwendu_state_3(bool value)
{
    huanjingwendu_state_3 = value;
}

bool Widget::getSashuifa_state_3() const
{
    return sashuifa_state_3;
}

void Widget::setSashuifa_state_3(bool value)
{
    sashuifa_state_3 = value;
}

bool Widget::getZhanglibaohu_state_3() const
{
    return zhanglibaohu_state_3;
}

void Widget::setZhanglibaohu_state_3(bool value)
{
    zhanglibaohu_state_3 = value;
}

bool Widget::getSudubaohu_state_3() const
{
    return sudubaohu_state_3;
}

void Widget::setSudubaohu_state_3(bool value)
{
    sudubaohu_state_3 = value;
}

bool Widget::getYanwubaohu_state_3() const
{
    return yanwubaohu_state_3;
}

void Widget::setYanwubaohu_state_3(bool value)
{
    yanwubaohu_state_3 = value;
}

bool Widget::getZongsibaohu_state_3() const
{
    return zongsibaohu_state_3;
}

void Widget::setZongsibaohu_state_3(bool value)
{
    zongsibaohu_state_3 = value;
}

bool Widget::getDuimeibaohu_state_3() const
{
    return duimeibaohu_state_3;
}

void Widget::setDuimeibaohu_state_3(bool value)
{
    duimeibaohu_state_3 = value;
}

bool Widget::getErjipaopian_state_3() const
{
    return erjipaopian_state_3;
}

void Widget::setErjipaopian_state_3(bool value)
{
    erjipaopian_state_3 = value;
}

bool Widget::getYijipaopian_state_3() const
{
    return yijipaopian_state_3;
}

void Widget::setYijipaopian_state_3(bool value)
{
    yijipaopian_state_3 = value;
}

double Widget::getPage2_elec_elec8_4() const
{
    return page2_elec_elec8_4;
}

void Widget::setPage2_elec_elec8_4(double value)
{
    page2_elec_elec8_4 = value;
}

double Widget::getPage2_elec_elec7_4() const
{
    return page2_elec_elec7_4;
}

void Widget::setPage2_elec_elec7_4(double value)
{
    page2_elec_elec7_4 = value;
}

double Widget::getPage2_elec_elec6_4() const
{
    return page2_elec_elec6_4;
}

void Widget::setPage2_elec_elec6_4(double value)
{
    page2_elec_elec6_4 = value;
}

double Widget::getPage2_elec_elec5_4() const
{
    return page2_elec_elec5_4;
}

void Widget::setPage2_elec_elec5_4(double value)
{
    page2_elec_elec5_4 = value;
}

double Widget::getPage2_elec_elec4_4() const
{
    return page2_elec_elec4_4;
}

void Widget::setPage2_elec_elec4_4(double value)
{
    page2_elec_elec4_4 = value;
}

double Widget::getPage2_elec_elec2_4() const
{
    return page2_elec_elec2_4;
}

void Widget::setPage2_elec_elec2_4(double value)
{
    page2_elec_elec2_4 = value;
}

double Widget::getPage2_elec_elec1_4() const
{
    return page2_elec_elec1_4;
}

void Widget::setPage2_elec_elec1_4(double value)
{
    page2_elec_elec1_4 = value;
}

double Widget::getPage2_elec_elec8_3() const
{
    return page2_elec_elec8_3;
}

void Widget::setPage2_elec_elec8_3(double value)
{
    page2_elec_elec8_3 = value;
}

double Widget::getPage2_elec_elec7_3() const
{
    return page2_elec_elec7_3;
}

void Widget::setPage2_elec_elec7_3(double value)
{
    page2_elec_elec7_3 = value;
}

double Widget::getPage2_elec_elec6_3() const
{
    return page2_elec_elec6_3;
}

void Widget::setPage2_elec_elec6_3(double value)
{
    page2_elec_elec6_3 = value;
}

double Widget::getPage2_elec_elec5_3() const
{
    return page2_elec_elec5_3;
}

void Widget::setPage2_elec_elec5_3(double value)
{
    page2_elec_elec5_3 = value;
}

double Widget::getPage2_elec_elec4_3() const
{
    return page2_elec_elec4_3;
}

void Widget::setPage2_elec_elec4_3(double value)
{
    page2_elec_elec4_3 = value;
}

double Widget::getPage2_elec_elec3_3() const
{
    return page2_elec_elec3_3;
}

void Widget::setPage2_elec_elec3_3(double value)
{
    page2_elec_elec3_3 = value;
}

double Widget::getPage2_elec_elec2_3() const
{
    return page2_elec_elec2_3;
}

void Widget::setPage2_elec_elec2_3(double value)
{
    page2_elec_elec2_3 = value;
}

double Widget::getPage2_elec_elec1_3() const
{
    return page2_elec_elec1_3;
}

void Widget::setPage2_elec_elec1_3(double value)
{
    page2_elec_elec1_3 = value;
}

double Widget::getPage2_elec_elec8_2() const
{
    return page2_elec_elec8_2;
}

void Widget::setPage2_elec_elec8_2(double value)
{
    page2_elec_elec8_2 = value;
}

double Widget::getPage2_elec_elec7_2() const
{
    return page2_elec_elec7_2;
}

void Widget::setPage2_elec_elec7_2(double value)
{
    page2_elec_elec7_2 = value;
}

double Widget::getPage2_elec_elec6_2() const
{
    return page2_elec_elec6_2;
}

void Widget::setPage2_elec_elec6_2(double value)
{
    page2_elec_elec6_2 = value;
}

double Widget::getPage2_elec_elec5_2() const
{
    return page2_elec_elec5_2;
}

void Widget::setPage2_elec_elec5_2(double value)
{
    page2_elec_elec5_2 = value;
}

double Widget::getPage2_elec_elec4_2() const
{
    return page2_elec_elec4_2;
}

void Widget::setPage2_elec_elec4_2(double value)
{
    page2_elec_elec4_2 = value;
}

double Widget::getPage2_elec_elec3_2() const
{
    return page2_elec_elec3_2;
}

void Widget::setPage2_elec_elec3_2(double value)
{
    page2_elec_elec3_2 = value;
}

double Widget::getPage2_elec_elec2_2() const
{
    return page2_elec_elec2_2;
}

void Widget::setPage2_elec_elec2_2(double value)
{
    page2_elec_elec2_2 = value;
}

double Widget::getPage2_elec_elec1_2() const
{
    return page2_elec_elec1_2;
}

void Widget::setPage2_elec_elec1_2(double value)
{
    page2_elec_elec1_2 = value;
}

bool Widget::getZhangjinwancheng_state_2() const
{
    return zhangjinwancheng_state_2;
}

void Widget::setZhangjinwancheng_state_2(bool value)
{
    zhangjinwancheng_state_2 = value;
}

bool Widget::getZhangjinkongzhi_state_2() const
{
    return zhangjinkongzhi_state_2;
}

void Widget::setZhangjinkongzhi_state_2(bool value)
{
    zhangjinkongzhi_state_2 = value;
}

bool Widget::getGuozaishuchu_state_2() const
{
    return guozaishuchu_state_2;
}

void Widget::setGuozaishuchu_state_2(bool value)
{
    guozaishuchu_state_2 = value;
}

bool Widget::getJitingshuchu_state_2() const
{
    return jitingshuchu_state_2;
}

void Widget::setJitingshuchu_state_2(bool value)
{
    jitingshuchu_state_2 = value;
}

bool Widget::getZhunbeijiuxu_state_2() const
{
    return zhunbeijiuxu_state_2;
}

void Widget::setZhunbeijiuxu_state_2(bool value)
{
    zhunbeijiuxu_state_2 = value;
}

bool Widget::getBeituoshuchu_state_2() const
{
    return beituoshuchu_state_2;
}

void Widget::setBeituoshuchu_state_2(bool value)
{
    beituoshuchu_state_2 = value;
}

bool Widget::getChouchengwendu_state_2() const
{
    return chouchengwendu_state_2;
}

void Widget::setChouchengwendu_state_2(bool value)
{
    chouchengwendu_state_2 = value;
}

bool Widget::getRaozuwendu_state_2() const
{
    return raozuwendu_state_2;
}

void Widget::setRaozuwendu_state_2(bool value)
{
    raozuwendu_state_2 = value;
}

bool Widget::getGuntongwendu_state_2() const
{
    return guntongwendu_state_2;
}

void Widget::setGuntongwendu_state_2(bool value)
{
    guntongwendu_state_2 = value;
}

bool Widget::getHuanjingwendu_state_2() const
{
    return huanjingwendu_state_2;
}

void Widget::setHuanjingwendu_state_2(bool value)
{
    huanjingwendu_state_2 = value;
}

bool Widget::getSashuifa_state_2() const
{
    return sashuifa_state_2;
}

void Widget::setSashuifa_state_2(bool value)
{
    sashuifa_state_2 = value;
}

bool Widget::getZhanglibaohu_state_2() const
{
    return zhanglibaohu_state_2;
}

void Widget::setZhanglibaohu_state_2(bool value)
{
    zhanglibaohu_state_2 = value;
}

bool Widget::getSudubaohu_state_2() const
{
    return sudubaohu_state_2;
}

void Widget::setSudubaohu_state_2(bool value)
{
    sudubaohu_state_2 = value;
}

bool Widget::getYanwubaohu_state_2() const
{
    return yanwubaohu_state_2;
}

void Widget::setYanwubaohu_state_2(bool value)
{
    yanwubaohu_state_2 = value;
}

bool Widget::getZongsibaohu_state_2() const
{
    return zongsibaohu_state_2;
}

void Widget::setZongsibaohu_state_2(bool value)
{
    zongsibaohu_state_2 = value;
}

bool Widget::getDuimeibaohu_state_2() const
{
    return duimeibaohu_state_2;
}

void Widget::setDuimeibaohu_state_2(bool value)
{
    duimeibaohu_state_2 = value;
}

bool Widget::getErjipaopian_state_2() const
{
    return erjipaopian_state_2;
}

void Widget::setErjipaopian_state_2(bool value)
{
    erjipaopian_state_2 = value;
}

bool Widget::getYijipaopian_state_2() const
{
    return yijipaopian_state_2;
}

void Widget::setYijipaopian_state_2(bool value)
{
    yijipaopian_state_2 = value;
}

//**************************************
