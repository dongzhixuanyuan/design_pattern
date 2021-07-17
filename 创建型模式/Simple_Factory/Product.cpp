//
// Created by liudong on 2021/5/24.
//

#include "Product.h"

void Product::show() {

}

Product &Product::operator=(const Product &b) {
    *(int *) this = *(int *)&b;
    return *this;
}


void ConcreteProduct1::show() {
    cout << "具体产品1展示" << endl;
}

void ConcreteProduct2::show() {
    cout << "具体产品2展示" << endl;
}