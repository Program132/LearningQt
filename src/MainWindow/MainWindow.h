#ifndef QTLEARNING_MAINWINDOW_H
#define QTLEARNING_MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QString>

#include "../Button/Button.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
     explicit MainWindow(QWidget *parent = nullptr, const QString& title = "Qt Application");
    ~MainWindow() override;

private: // Elements pour la fenetre
    //Button *btn_welcome;

    QList<Button*> list_Buttons;

    QWidget* mainWidget_btns;
    QVBoxLayout* vLayout_btns;

};

#endif // QTLEARNING_MAINWINDOW_H