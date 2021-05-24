#include <iostream>

#include "open_close_principle/ISendable.h"
#include "open_close_principle/MessageService.h"
#include "Simple_Factory/Client.h"
using namespace std;
using namespace OpenClosePrinciple;

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
    shared_ptr<ISendable> emailHelper(new EmailMessage());
    MessageService *service = new MessageService(emailHelper);
    service->greeting("fff");
    delete service;

    shared_ptr<ISendable> phoneHelper(new PhoneMessage());
    MessageService *phoneService = new MessageService(phoneHelper);
    phoneService->greeting("fff");

    return 0;
}


