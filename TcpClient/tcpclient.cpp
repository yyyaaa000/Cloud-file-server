#include "tcpclient.h"
#include "ui_tcpclient.h"
#include <QArrayData>
#include <QDebug>
#include <QMessageBox>
#include <QHostAddress>
#include "protocol.h"

TcpClient::TcpClient(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TcpClient)
{
    ui->setupUi(this);

    resize(500,250);

    loadConfig();
    connect(&m_tcpSocket, SIGNAL(connected()),this, SLOT(showConnect()));
    m_tcpSocket.connectToHost(QHostAddress(m_strIP), m_usPort);
}

TcpClient::~TcpClient()
{
    delete ui;
}

void TcpClient::loadConfig()
{
    QFile file(":/client.config");
    if (file.open(QIODevice::ReadOnly)){
        QByteArray baData = file.readAll();
        QString strData = baData.toStdString().c_str();

        file.close();
        strData.replace("\r\n", " ");

        QStringList strList = strData.split(" ");
        m_strIP = strList.at(0);
        m_usPort = strList.at(1).toUShort();
    }else{
        QMessageBox::critical(this, "open config", "open config failed");
    };
}

void TcpClient::showConnect()
{
    QMessageBox::information(this, "connect server", "connect successful");
}

#if 0
void TcpClient::on_send_pb_clicked()
{
    QString strMsg = ui->lineEdit->text();
    if (!strMsg.isEmpty()){
        PDU *pdu = mkPUD(strMsg.size());
        pdu->uiMsgType = 8888;
        memcpy(pdu->caMsg, strMsg.toStdString().c_str(), strMsg.size());
        m_tcpSocket.write((char*)pdu, pdu->uitPDULen); //socket是网络通信的端点，可以看作是两台计算机之间通信的虚拟插座。每个套接字都绑定一个IP地址和端口号，用于标识网络中的通信端点
        free(pdu);
        pdu = NULL;
    }else{
        QMessageBox::warning(this,"消息发送","发送到消息不能为空");
    }
}
#endif

void TcpClient::on_login_pb_clicked()
{

}


void TcpClient::on_regist_pb_clicked()
{
    QString strName = ui->name_lab->text();
    QString strPwd = ui->pwd_lab->text();
    if(!strName.isEmpty() && strPwd.isEmpty()){
        PDU *pdu = mkPUD(0);
        pdu->uiMsgType = ENUM_MSG_TYPE_REGIST_REQUEST;
        strncpy(pdu->caData, strName.toStdString().c_str(),32);
        strncpy(pdu->caData+32, strPwd.toStdString().c_str(),32);
        m_tcpSocket.write((char*)pdu, pdu->uitPDULen); //socket是网络通信的端点，可以看作是两台计算机之间通信的虚拟插座。每个套接字都绑定一个IP地址和端口号，用于标识网络中的通信端点
        free(pdu);
        pdu = NULL;
    }else{
        QMessageBox::critical(this,"注册","注册失败");
    }
}


void TcpClient::on_cancel_pb_clicked()
{

}

