//
// Created by liudong on 2021/5/24.
//

#include "Client.h"

void Client::main() {
    Product p =
            SimpleFactory::makeProduct(ProductType::Product1);
    ConcreteProduct1* product1 = dynamic_cast<ConcreteProduct1 *>(&p);
    product1->show();
}