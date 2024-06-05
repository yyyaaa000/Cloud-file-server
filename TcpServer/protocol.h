#ifndef PROTOCOL_H
#define PROTOCOL_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef unsigned int unit; // 假设 'unit' 是 'unsigned int' 的别名

enum ENUM_MSG_TYPE{
    ENUM_MSG_TYPE_MIN = 0,
    ENUM_MSG_TYPE_REGIST_REQUEST,
    ENUM_MSG_TYPE_REGIST_RESPOND,
    ENUM_MSG_TYPE_MAX = 0x00ffffff,
};

struct PDU{
    unit uitPDULen; //总的protocol data unit长度
    unit uiMsgType; //消息类型
    char caData[64]; //数组，放文件名
    unit uiMsgLen; //实际长度
    int caMsg[]; //实际消息
};

//定义mkPDU函数用于初始化PDU
PDU *mkPUD(unit uiMsgLen);
#endif // PROTOCOL_H
