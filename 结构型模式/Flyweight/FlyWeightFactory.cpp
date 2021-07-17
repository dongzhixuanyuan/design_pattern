//
// Created by liudong on 2021/6/27.
//

#include "FlyWeightFactory.h"

FlyweightPattern::FlyWeightFactory::FlyWeightFactory() {
    sharedPtrMap = std::make_shared<map<string, FlyweightBaseModel>>();
    int count = sharedPtrMap.use_count();
    cout << "FlyWeightFactory:count " << count << endl;

}

FlyweightPattern::FlyweightBaseModel &FlyweightPattern::FlyWeightFactory::getFlyweight(string key) {
    auto iterator = sharedPtrMap.get()->find(key);
    if (iterator != sharedPtrMap.get()->end()) {
        return iterator->second;
    } else {
//        o在栈上创建，但是当emplace到map中的时候，会调用其拷贝构造函数复制一个对象。but为啥ConcreteFlyweiModel的拷贝构造函数没调用呢？
//        感觉是被编译器优化了，当编译器检测到这个新创建的对象将被放到容器中时，就直接在堆上创建了。
        auto o = ConcreteFlyweiModel(key);
        sharedPtrMap.get()->emplace(key, o);
        return sharedPtrMap.get()->at(key);
    }
}

int FlyweightPattern::FlyWeightFactory::flyWeightCount() {
    return sharedPtrMap.get()->size();
}
