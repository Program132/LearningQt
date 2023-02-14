#include "Button.h"

Button::Button(QWidget *parent) : QPushButton(parent) {
    setText("Toto");
}

Button::~Button() {
    qDebug() << this->text() << "got deleted" << Qt::endl;
}
