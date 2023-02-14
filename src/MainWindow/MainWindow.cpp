#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent, const QString& title) : QMainWindow(parent) {
    setWindowTitle(title);

    //btn_welcome = new Button(this);

    mainWidget_btns = new QWidget(this);

    hLayout_btns = new QHBoxLayout(this);
    vLayout_btns = new QVBoxLayout(this);

    auto * test = new Button(this);
    test->setText("GROS BOUTTUUTT");

    hLayout_btns->addLayout(vLayout_btns);
    hLayout_btns->addWidget(test);

    mainWidget_btns->setLayout(hLayout_btns);

    for (int i = 0; i < 5; i++) {
        auto* btn = new Button(mainWidget_btns);
        list_Buttons.append(btn);
        vLayout_btns->addWidget(btn);

        if (i == 3) {
            btn->setText("Un new btn");
            vLayout_btns->addSpacing(20); // Ajout un "espace" de 20 en y.
        }


    }

    setCentralWidget(mainWidget_btns);
}

MainWindow::~MainWindow() = default;