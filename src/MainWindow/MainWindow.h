#ifndef QTLEARNING_MAINWINDOW_H
#define QTLEARNING_MAINWINDOW_H

#include <QMainWindow>
#include <QString>

#include "../Button/Button.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0, const QString& title = "Qt Application");
    ~MainWindow() override;

    // Elements pour la fenetre

private:
    Button *btn_welcome;
};

#endif // QTLEARNING_MAINWINDOW_H