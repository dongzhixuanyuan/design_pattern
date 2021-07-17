//
// Created by liudong on 2021/6/27.
//

#include "ConcreteFlyweiModel.h"

void FlyweightPattern::ConcreteFlyweiModel::doSomeOperation(UnSharedFlyweightState& unSharedFlyweightState)  {
    cout << "ConcreteFlyweiModel:doSomeOperation" << "被调用了" << endl;
    cout << "非享元信息是,名字:" << unSharedFlyweightState.getName() << "号码:" << unSharedFlyweightState.getNumber() << endl;
}

FlyweightPattern::ConcreteFlyweiModel::ConcreteFlyweiModel(const FlyweightPattern::ConcreteFlyweiModel &rhl) {
    this->mKey = rhl.mKey;
}

FlyweightPattern::ConcreteFlyweiModel::~ConcreteFlyweiModel() {
    cout << "ConcreteFlyweiModel:析构函数" << "被调用了" << endl;

}

