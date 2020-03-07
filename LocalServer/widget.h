#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class LocalServer;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_Iniciar_clicked();

    void on_Enviar_clicked();

    void on_Quitar_clicked();

    void on_servidor_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::Widget *ui;
    LocalServer *mLocalServer;
};
#endif // WIDGET_H
