#include <iostream>

#include "软件设计原则/open_close_principle/ISendable.h"
#include "软件设计原则/open_close_principle/MessageService.h"
#include "结构型模式/Flyweight/FlyweightNameSpace.h"
#include "结构型模式/Flyweight/FlyWeightFactory.h"
#include "结构型模式/Composite/Client.h"
//#include "软件设计原则/Simple_Factory/Client.h"
using namespace std;
using namespace OpenClosePrinciple;
using namespace FlyweightPattern;
using namespace Composite;

class Parent {
public:
    int value = 0;
    virtual void print(){
        cout << value << endl;
    }
};

class Child: public Parent {
public:
    void print() override {
        Parent::print();
        cout << "child" << endl;
    }
};



int main() {
//    shared_ptr<ISendable> emailHelper(new EmailMessage());
//    MessageService *service = new MessageService(emailHelper);
//    service->greeting("fff");
//    delete service;
//
//    shared_ptr<ISendable> phoneHelper(new PhoneMessage());
//    MessageService *phoneService = new MessageService(phoneHelper);
//    phoneService->greeting("fff");

//    FlyweightPattern::FlyWeightFactory* factory = new FlyWeightFactory();
//    auto param(UnSharedFlyweightState("test",89));
//    factory->getFlyweight("xxx").doSomeOperation(param);
//    factory->getFlyweight("xxx").doSomeOperation(param);
//    FlyweightBaseModel flyweight = factory->getFlyweight("xxx");
////    ConcreteFlyweiModel*  concreteModel =  dynamic_cast<ConcreteFlyweiModel*>(&flyweight); //类型转换作用于类的话，只能转换指针，不能直接把对象给转了。
////    cout << concreteModel->mKey << endl;
//    factory->getFlyweight("yyy").doSomeOperation(param);
//    cout << factory->flyWeightCount() << endl;
//    delete factory;
//    cout << "exit" << endl;
    Composite::Client* c = new Client();
    delete c;
    return 0;
}


