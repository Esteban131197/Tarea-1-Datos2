#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class QTcpSocket;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_Conectar_clicked();

    void on_Quitar_clicked();

private:
    Ui::Widget *ui;
    QTcpSocket *mSocket;
};
#endif // WIDGET_H
