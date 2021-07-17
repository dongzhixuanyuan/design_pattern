//
// Created by liudong on 2021/6/27.
//

#ifndef DESIGNPATTERN_CONCRETEFLYWEIMODEL_H
#define DESIGNPATTERN_CONCRETEFLYWEIMODEL_H
#include "FlyweightBaseModel.h"
#include "FlyWeightFactory.h"

namespace FlyweightPattern {
class ConcreteFlyweiModel: public FlyweightBaseModel {
    public:
        string mKey;

        ConcreteFlyweiModel(){
            cout << "ConcreteFlyweiModel:默认构造函数" << endl;
        }
        ConcreteFlyweiModel(string key):mKey(key){
            cout << "ConcreteFlyweiModel:构造函数" << endl;
        }
        ConcreteFlyweiModel(const ConcreteFlyweiModel&);
        ~ConcreteFlyweiModel();
        void doSomeOperation(UnSharedFlyweightState& unSharedFlyweightState) override ;
    };
}




#endif //DESIGNPATTERN_CONCRETEFLYWEIMODEL_H
