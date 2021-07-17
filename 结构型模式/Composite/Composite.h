//
// Created by liudong on 2021/7/17.
//

#ifndef DESIGNPATTERN_COMPOSITE_H
#define DESIGNPATTERN_COMPOSITE_H
#include "Component.h"
#include <vector>
#include <algorithm>

using namespace std;
namespace Composite {

    class Composite : public Component {
    public:
        vector<Component*> children;
        void add(Component &c) override;
        void remove(Component &c) override;
        Component * getChild(int i) override;
        void operation() override;
        ~Composite();
    };
}


#endif //DESIGNPATTERN_COMPOSITE_H
