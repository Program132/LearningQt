#ifndef QTLEARNING_BUTTON_H
#define QTLEARNING_BUTTON_H

#include <QPushButton>

class Button : public QPushButton {

public:
     explicit Button(QWidget *parent = nullptr);
    ~Button() override ;
};


#endif //QTLEARNING_BUTTON_H
