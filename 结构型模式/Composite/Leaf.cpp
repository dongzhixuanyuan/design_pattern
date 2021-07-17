//
// Created by liudong on 2021/7/17.
//

#include "Leaf.h"

void Composite::Leaf::add(Composite::Component &c) {
}

void Composite::Leaf::remove(Composite::Component &c) {
}

Composite::Component* Composite::Leaf::getChild(int i) {
    return nullptr;
}

void Composite::Leaf::operation() {
    cout << "树叶:" << m_name << "被访问" << endl;
}

Composite::Leaf::~Leaf() {
  cout << "Leaf析构函数" << endl;
}
