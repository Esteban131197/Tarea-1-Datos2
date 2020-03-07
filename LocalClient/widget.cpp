#include "widget.h"
#include "ui_widget.h"
#include <QTcpSocket>
#include <QTextStream>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mSocket = new QTcpSocket(this);

    connect(mSocket, &QTcpSocket::readyRead, [&](){
        QTextStream T(mSocket);
        ui->listWidget->addItem(T.readAll());
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_Conectar_clicked()
{
    mSocket -> connectToHost(ui->Servidor->text(), ui->Puerto->value());
}

void Widget::on_Quitar_clicked()
{
    close();
}
