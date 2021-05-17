//
// Created by liudong on 2021/5/17.
//

#ifndef DESIGNPATTERN_ISENDABLE_H
#define DESIGNPATTERN_ISENDABLE_H

#include <string>
#include <iostream>

using namespace std;
namespace OpenClosePrinciple {
    class ISendable {
    public:
        virtual void sendMsg(string greetMsg) = 0;
    };

    class EmailMessage : public ISendable {
    public:
        EmailMessage();

        ~EmailMessage();

        void sendMsg(string greetMsg) override;
    };

    class PhoneMessage : public ISendable {
        void sendMsg(string greetMsg) override;
    };

    class WeChatMessage : public ISendable {
        void sendMsg(string greetMsg) override;
    };
}


#endif //DESIGNPATTERN_ISENDABLE_H
