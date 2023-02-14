#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent, const QString& title) : QMainWindow(parent) {
    setWindowTitle(title);

    //btn_welcome = new Button(this);

    mainWidget_btns = new QWidget(this);
    vLayout_btns = new QVBoxLayout(this);

    mainWidget_btns->setLayout(vLayout_btns);

    for (int i = 0; i < 5; i++) {
        auto* btn = new Button(mainWidget_btns);
        list_Buttons.append(btn);
        vLayout_btns->addWidget(btn);
    }

    setCentralWidget(mainWidget_btns);
}

MainWindow::~MainWindow() = default;