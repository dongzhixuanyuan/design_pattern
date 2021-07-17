//
// Created by liudong on 2021/5/24.
//

#ifndef DESIGNPATTERN_PRODUCT_H
#define DESIGNPATTERN_PRODUCT_H

#include <iostream>
#include <string>

using namespace std;

class Product {
public:
    virtual void show();
    Product& operator=(const Product& b);
};


class ConcreteProduct1 : public Product {
public:
    void show() override;
};

class ConcreteProduct2 : public Product {
    void show() override;
};

#endif //DESIGNPATTERN_PRODUCT_H
