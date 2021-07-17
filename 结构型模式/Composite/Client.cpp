//
// Created by liudong on 2021/7/17.
//

#include "Client.h"
#include "Composite.h"

Composite::Client::Client() {
    Component *c0 = new Composite();
    Component *c1 = new Composite();
    Component *leaf1 = new Leaf("1");
    Component *leaf2 = new Leaf("2");
    Component *leaf3 = new Leaf("3");
    c1->add(*leaf3);
    c1->add(*leaf2);
    c0->add(*c1);
    c0->add(*leaf1);
    c0->operation();
    delete c0;
}

void Composite::Client::test() {

}

Composite::Client::~Client() {

}
