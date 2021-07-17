//
// Created by liudong on 2021/7/17.
//

#ifndef DESIGNPATTERN_COMPONENT_H
#define DESIGNPATTERN_COMPONENT_H
#include <iostream>

using namespace std;

namespace Composite {
    class Component {
    public:
//        透明组合模式，将属于树枝节点的接口放置在抽象基类中，安全组合模式，将属于树枝节点的接口不再放在抽象基类中，而是放在树枝节点类型中。
        virtual void add(Component &c) {

        }

        virtual void remove(Component &c) {

        }

        virtual Component* getChild(int i) {
            return nullptr;
        }

        virtual void operation() {

        }

        virtual ~Component(){
            cout << "Component::析构函数" << endl;
        };

    };
}


#endif //DESIGNPATTERN_COMPONENT_H
