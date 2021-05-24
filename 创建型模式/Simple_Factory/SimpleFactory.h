//
// Created by liudong on 2021/5/24.
//

#ifndef DESIGNPATTERN_SIMPLEFACTORY_H
#define DESIGNPATTERN_SIMPLEFACTORY_H
#include "Product.h"
enum ProductType {
    Product1,Product2
};


class SimpleFactory {
public:
    static Product makeProduct(ProductType type);
};


#endif //DESIGNPATTERN_SIMPLEFACTORY_H
