#include "window.h"
#include "ui_window.h"
#include <QShortcut>

Window::Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Window)
{
    ui->setupUi(this);

    setStyleSheet("background-color:black");
    setAutoFillBackground(true);

    ui->urlBar->setVisible(false);
    ui->urlBar->setStyleSheet("background-color:white");

    auto shortcut = new QShortcut(QKeySequence("Ctrl+L"), this);
    connect(shortcut, SIGNAL(activated()), this, SLOT(toggleUrlBarOpen()));
}

void Window::toggleUrlBarOpen() {
    bool open = ui->urlBar->isVisible();
    ui->urlBar->setVisible(!open);
}

Window::~Window()
{
    delete ui;
}

