#include "protocol.h"

PDU *mkPUD(unit uiMsgLen) {
    unit uiPDULen = sizeof(PDU) + uiMsgLen;
    PDU *pdu = (PDU*)malloc(uiPDULen);
    if (NULL == pdu) {
        // 如果内存分配失败，退出程序
        exit(EXIT_FAILURE);
    }
    memset(pdu, 0, uiPDULen); // 将分配的内存初始化为0
    pdu->uitPDULen = uiPDULen;
    pdu->uiMsgLen = uiMsgLen;
    return pdu; // 返回初始化后的 PDU
}
