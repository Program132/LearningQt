#include "Button.h"

Button::Button(QWidget *parent) : QPushButton(parent) {
    setText("Toto");

    setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
    // Permet d'afficher les bouttons au "maximum" de leur possibilité, en fonction de leur taille etc.
}

Button::~Button() {
    //qDebug() << this->text() << "got deleted" << Qt::endl;
}
