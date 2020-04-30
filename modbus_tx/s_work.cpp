#include <iostream>
#include "mainwindow.h"
#include "include/yaml-cpp/yaml.h"
#include "utils.h"
#include <QString>

void MainWindow::s_work(){

    unsigned short *p = nullptr;
    unsigned short address = 0;
    int count_number= 0;

    YAML::Node config = Utils::getConf("Work/Detail/Basic"); //读取部分

    unsigned short avaliable[4]; //整型数据可以直接读，读一位填一位然后发送整个数组即可
    for(int no = 0; no < 4; no++){
        avaliable[no] = config["Avaliable"][no].as<unsigned short>();
    }
    mmrtu->Request16(1,address,4,avaliable);//格式 ID 下位机地址 发送的数据个数 发送的数据所在的数组
    address = address + 4 * 2;

    unsigned short headGroundInput[4 * 3]; //字符类型数据需要进行转换
    for(int no = 0; no < 4; no++){
        int number_pos = 0;
        if(config["HeadGroundInput"][no].as<std::string>() == "0"){
            headGroundInput[number_pos] = 0;
        }else{
            p = type_change(config["HeadGroundInput"][no].as<std::string>());
            headGroundInput[number_pos] = p[0];
            headGroundInput[number_pos + 1] = p[1];
            headGroundInput[number_pos + 2] = p[2];
            number_pos = number_pos + 2;
        }
        number_pos++;
        count_number =number_pos;
    }
    mmrtu->Request16(1,address,count_number,headGroundInput);
    address = address + 4 * 3 * 2;

    unsigned short tailGroundInput[4 * 3];
    for(int no = 0; no < 4; no++){
        int number_pos = 0;
        if(config["TailGroundInput"][no].as<std::string>() == "0"){
            tailGroundInput[number_pos] = 0;
        }else{
            p = type_change(config["TailGroundInput"][no].as<std::string>());
            tailGroundInput[number_pos] = p[0];
            tailGroundInput[number_pos + 1] = p[1];
            tailGroundInput[number_pos + 2] = p[2];
            number_pos = number_pos + 2;
        }
        number_pos++;
        count_number =number_pos;
    }
    mmrtu->Request16(1,address,count_number,tailGroundInput);
    address = address + 4 * 3 * 2;

    unsigned short remoteStartStopInput[4 * 3];
    for(int no = 0; no < 4; no++){
        int number_pos = 0;
        if(config["RemoteStartStopInput"][no].as<std::string>() == "0"){
            remoteStartStopInput[number_pos] = 0;
        }else{
            p = type_change(config["RemoteStartStopInput"][no].as<std::string>());
            remoteStartStopInput[number_pos] = p[0];
            remoteStartStopInput[number_pos + 1] = p[1];
            remoteStartStopInput[number_pos + 2] = p[2];
            number_pos = number_pos + 2;
        }
        number_pos++;
        count_number =number_pos;
    }
    mmrtu->Request16(1,address,count_number,remoteStartStopInput);
    address = address + 4 * 3 * 2;

    unsigned short completeOutput[4 * 10 * 3];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 10; j++){
            int number_pos = 0;
            if(config["CompleteOutput"][i][j].as<std::string>() == "0"){
                completeOutput[number_pos] = 0;
            }else{
                p = type_change(config["CompleteOutput"][i][j].as<std::string>());
                completeOutput[number_pos] = p[0];
                completeOutput[number_pos + 1] = p[1];
                completeOutput[number_pos + 2] = p[2];
                number_pos = number_pos + 2;
            }
            number_pos++;
            count_number =number_pos;
        }
    }
    mmrtu->Request16(1,address,count_number,completeOutput);
    address = address + 4 * 10 * 3 * 2;

    unsigned short readyInput[4 * 10 * 3];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 10; j++){
            int number_pos = 0;
            if(config["ReadyInput"][i][j].as<std::string>() == "0"){
                readyInput[number_pos] = 0;
            }else{
                p = type_change(config["ReadyInput"][i][j].as<std::string>());
                readyInput[number_pos] = p[0];
                readyInput[number_pos + 1] = p[1];
                readyInput[number_pos + 2] = p[2];
                number_pos = number_pos + 2;
            }
            number_pos++;
            count_number =number_pos;
        }
    }
    mmrtu->Request16(1,address,count_number,readyInput);
    address = address + 4 * 10 * 3 * 2;

    unsigned short relateLine[4];
    for(int no = 0; no < 4; no++){
        relateLine[no] = config["RelateLine"][no].as<unsigned short>();
    }
    mmrtu->Request16(1,address,4,relateLine);
    address = address + 4 * 2;

    unsigned short relationshipWithStop[4];
    for(int no = 0; no < 4; no++){
        relationshipWithStop[no] = config["RelationshipWithStop"][no].as<unsigned short>();
    }
    mmrtu->Request16(1,address,4,relationshipWithStop);
    address = address + 4 * 2;

    unsigned short startWarnNum[4];
    for(int no = 0; no < 4; no++){
        startWarnNum[no] = config["StartWarnNum"][no].as<unsigned short>();
    }
    mmrtu->Request16(1,address,4,startWarnNum);
    address = address + 4 * 2;

    unsigned short remoteStopInput[4 * 8 * 3];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 8; j++){
            int number_pos = 0;
            if(config["RemoteStopInput"][i][j].as<std::string>() == "0"){
                remoteStopInput[number_pos] = 0;
            }else{
                p = type_change(config["RemoteStopInput"][i][j].as<std::string>());
                remoteStopInput[number_pos] = p[0];
                remoteStopInput[number_pos + 1] = p[1];
                remoteStopInput[number_pos + 2] = p[2];
                number_pos = number_pos + 2;
            }
            number_pos++;
            count_number =number_pos;
        }
    }
    mmrtu->Request16(1,address,count_number,remoteStopInput);
    address = address + 4 * 8 * 3 * 2;

    unsigned short remoteStopOutput[4 * 8 * 3];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 8; j++){
            int number_pos = 0;
            if(config["RemoteStopOutput"][i][j].as<std::string>() == "0"){
                remoteStopOutput[number_pos] = 0;
            }else{
                p = type_change(config["RemoteStopOutput"][i][j].as<std::string>());
                remoteStopOutput[number_pos] = p[0];
                remoteStopOutput[number_pos + 1] = p[1];
                remoteStopOutput[number_pos + 2] = p[2];
                number_pos = number_pos + 2;
            }
            number_pos++;
            count_number =number_pos;
        }
    }
    mmrtu->Request16(1,address,count_number,remoteStopOutput);
    address = address + 4 * 8 * 3 * 2;

    unsigned short headGroundOutput[4 * 3];
    for(int no = 0; no < 4; no++){
        int number_pos = 0;
        if(config["HeadGroundOutput"][no].as<std::string>() == "0"){
            headGroundOutput[number_pos] = 0;
        }else{
            p = type_change(config["HeadGroundOutput"][no].as<std::string>());
            headGroundOutput[number_pos] = p[0];
            headGroundOutput[number_pos + 1] = p[1];
            headGroundOutput[number_pos + 2] = p[2];
            number_pos = number_pos + 2;
        }
        number_pos++;
        count_number =number_pos;
    }
    mmrtu->Request16(1,address,count_number,headGroundOutput);
    address = address + 4 * 3 * 2;

    unsigned short tailGroundOutput[4 * 3];
    for(int no = 0; no < 4; no++){
        int number_pos = 0;
        if(config["TailGroundOutput"][no].as<std::string>() == "0"){
            tailGroundOutput[number_pos] = 0;
        }else{
            p = type_change(config["TailGroundOutput"][no].as<std::string>());
            tailGroundOutput[number_pos] = p[0];
            tailGroundOutput[number_pos + 1] = p[1];
            tailGroundOutput[number_pos + 2] = p[2];
            number_pos = number_pos + 2;
        }
        number_pos++;
        count_number =number_pos;
    }
    mmrtu->Request16(1,address,count_number,tailGroundOutput);
    address = address + 4 * 3 * 2;

    unsigned short chainDevice[4];
    for(int no = 0; no < 4; no++){
        chainDevice[no] = config["ChainDevice"][no].as<unsigned short>();
    }
    mmrtu->Request16(1,address,4,chainDevice);
    address = address + 4 * 2;

    unsigned short remoteStopNum[4];
    for(int no = 0; no < 4; no++){
        remoteStopNum[no] = config["RemoteStopNum"][no].as<unsigned short>();
    }
    mmrtu->Request16(1,address,4,remoteStopNum);
    address = address + 4 * 2;

    unsigned short startWarnTime[4];
    for(int no = 0; no < 4; no++){
        startWarnTime[no] = config["StartWarnTime"][no].as<unsigned short>();
    }
    mmrtu->Request16(1,address,4,startWarnTime);
    address = address + 4 * 2;
}
