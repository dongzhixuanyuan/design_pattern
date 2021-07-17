//
// Created by liudong on 2021/7/17.
//

#include "Composite.h"

void Composite::Composite::add(Composite::Component &c) {
    children.push_back(&c);
}

void Composite::Composite::remove(Composite::Component &c) {
    for (auto it = children.begin(); it != children.end(); ++it) {
        if (*it == &c) {
            children.erase(it);
        }
    }
}

Composite::Component *Composite::Composite::getChild(int i) {
    return children.at(i);
}

void Composite::Composite::operation() {
    for (auto it = children.begin(); it != children.end(); ++it) {
        (**it).operation();
    }
}

Composite::Composite::~Composite() {
    cout << "Composite析构函数" << endl;

    for (auto &item: children) {
        delete item;
    }
}
