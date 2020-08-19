#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE

class Window : public QMainWindow
{
    Q_OBJECT

public:
    Window(QWidget *parent = nullptr);
    ~Window();

private:
    Ui::Window *ui;
    QHBoxLayout * layout;

private slots:
    void toggleUrlBarOpen();
};
#endif // WINDOW_H
