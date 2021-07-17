//
// Created by liudong on 2021/7/17.
//

#ifndef DESIGNPATTERN_LEAF_H
#define DESIGNPATTERN_LEAF_H
#include <string>
#include <iostream>
#include "Component.h"
using namespace  std;
namespace Composite {

    class Leaf: public Component  {
    public:
        string m_name;
        Leaf(string name):m_name(name) {

        }
        void add(Component &c) override;
        void remove(Component &c) override;
        Component* getChild(int i) override;
        void operation() override;
        ~Leaf();
    };
}




#endif //DESIGNPATTERN_LEAF_H
