//
// Created by liudong on 2021/6/27.
//

#ifndef DESIGNPATTERN_FLYWEIGHTFACTORY_H
#define DESIGNPATTERN_FLYWEIGHTFACTORY_H
#include <map>
#include <memory>
#include "FlyweightBaseModel.h"
#include "ConcreteFlyweiModel.h"

namespace FlyweightPattern {

    class FlyWeightFactory {
    private:
        shared_ptr<map<string,FlyweightBaseModel>> sharedPtrMap;
    public:
        FlyWeightFactory();
        FlyweightBaseModel& getFlyweight(string key);
        int flyWeightCount();
    };

}




#endif //DESIGNPATTERN_FLYWEIGHTFACTORY_H
