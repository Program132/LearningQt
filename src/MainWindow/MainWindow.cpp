#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent, const QString& title) : QMainWindow(parent) {
    setWindowTitle(title);

    btn_welcome = new Button(this);
}

MainWindow::~MainWindow() = default;