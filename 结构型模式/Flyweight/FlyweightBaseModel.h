//
// Created by liudong on 2021/6/27.
//

#ifndef DESIGNPATTERN_FLYWEIGHTBASEMODEL_H
#define DESIGNPATTERN_FLYWEIGHTBASEMODEL_H
#include <string>
#include <iostream>
#include "UnSharedFlyweightState.h"

using namespace std;

namespace FlyweightPattern {
    //享元对象的基类
    class FlyweightBaseModel {
    public:
        virtual void doSomeOperation(UnSharedFlyweightState& unSharedFlyweightState);
    };
}




#endif //DESIGNPATTERN_FLYWEIGHTBASEMODEL_H
