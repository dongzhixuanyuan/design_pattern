//
// Created by liudong on 2021/5/21.
//

#include "Prototype.h"

Prototype::Prototype(char *p) {
    if (p == nullptr) {
        name = new char[1];
        name[0] = '\0';
    } else {
        name = new char[strlen(p) + 1];
        strcpy(name, p);
    }
}

Prototype::Prototype(const Prototype &rhs) {
    name = new char[strlen(rhs.name) + 1];
    strcpy(name, rhs.name);
}

Prototype &Prototype::operator=(const Prototype &rhs) {
    if (this == &rhs) return *this;
    delete[] name;
    int len = strlen(rhs.name);
    name = new char[len + 1];
    strcpy(name, rhs.name);
    return *this;

}

Prototype::~Prototype() {
    delete[] name;
}

Prototype * Prototype::clone() {
    return new Prototype(this->name);
}