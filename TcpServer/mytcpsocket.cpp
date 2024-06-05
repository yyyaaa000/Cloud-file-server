#include "mytcpsocket.h"
#include <QDebug>

MyTcpSocket::MyTcpSocket(QObject *parent) : QTcpSocket(parent){
    connect (this, SIGNAL(readyRead()),this,SLOT(recvMsg()));
}

void MyTcpSocket::recvMsg()
{
    qDebug()<<this->bytesAvailable();
    unit uiPDULen = 0;
    this->read((char*)&uiPDULen, sizeof(unit));
    unit uiMsgLen = uiPDULen-sizeof(PDU);
    PDU *pdu = mkPUD(uiMsgLen);
    this->read((char*)pdu+sizeof(unit),uiPDULen-sizeof(unit));
    char caName[32] = {'\0'};
    char caPwd[32] = {'\0'};
    strncpy(caName, pdu->caData, 32);
    strncpy(caName, pdu->caData+32, 32);
    qDebug()<<caName<<caPwd<<pdu->uiMsgType;

}
