//
// Created by liudong on 2021/5/24.
//

#include "SimpleFactory.h"

Product SimpleFactory::makeProduct(ProductType type) {
    switch (type) {
        case ProductType::Product1:
            return ConcreteProduct1();
        case ProductType::Product2:
            return ConcreteProduct2();
        default:
            throw "SimpleFactory::makeProduct::参数无效";
    }
}