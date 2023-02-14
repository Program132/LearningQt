#include <QApplication>

#include "src/MainWindow/MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    MainWindow w(nullptr, "Une superbe application");


    w.show();
    return QApplication::exec();
}