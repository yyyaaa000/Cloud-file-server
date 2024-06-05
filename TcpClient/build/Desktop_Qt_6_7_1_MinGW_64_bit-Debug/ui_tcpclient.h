/********************************************************************************
** Form generated from reading UI file 'tcpclient.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENT_H
#define UI_TCPCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpClient
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *name_lab;
    QLineEdit *lineEdit;
    QLabel *pwd_lab;
    QLineEdit *lineEdit_2;
    QPushButton *login_pb;
    QHBoxLayout *horizontalLayout;
    QPushButton *regist_pb;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel_pb;

    void setupUi(QWidget *TcpClient)
    {
        if (TcpClient->objectName().isEmpty())
            TcpClient->setObjectName("TcpClient");
        TcpClient->resize(309, 226);
        widget = new QWidget(TcpClient);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 301, 221));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        name_lab = new QLabel(widget);
        name_lab->setObjectName("name_lab");

        gridLayout->addWidget(name_lab, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        pwd_lab = new QLabel(widget);
        pwd_lab->setObjectName("pwd_lab");

        gridLayout->addWidget(pwd_lab, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        login_pb = new QPushButton(widget);
        login_pb->setObjectName("login_pb");

        gridLayout->addWidget(login_pb, 2, 0, 1, 2);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        regist_pb = new QPushButton(widget);
        regist_pb->setObjectName("regist_pb");

        horizontalLayout->addWidget(regist_pb);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancel_pb = new QPushButton(widget);
        cancel_pb->setObjectName("cancel_pb");

        horizontalLayout->addWidget(cancel_pb);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TcpClient);

        QMetaObject::connectSlotsByName(TcpClient);
    } // setupUi

    void retranslateUi(QWidget *TcpClient)
    {
        TcpClient->setWindowTitle(QCoreApplication::translate("TcpClient", "TcpClient", nullptr));
        name_lab->setText(QCoreApplication::translate("TcpClient", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        pwd_lab->setText(QCoreApplication::translate("TcpClient", "\345\257\206\347\240\201\357\274\232", nullptr));
        login_pb->setText(QCoreApplication::translate("TcpClient", "\347\231\273\345\275\225", nullptr));
        regist_pb->setText(QCoreApplication::translate("TcpClient", "\346\263\250\345\206\214", nullptr));
        cancel_pb->setText(QCoreApplication::translate("TcpClient", "\346\263\250\351\224\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TcpClient: public Ui_TcpClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENT_H
