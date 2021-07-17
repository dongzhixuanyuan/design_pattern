//
// Created by liudong on 2021/5/17.
//

#include "ISendable.h"

namespace OpenClosePrinciple {
    void EmailMessage::sendMsg(string greetMsg) {
        cout << "email节日问候" << endl;
    }

    EmailMessage::EmailMessage() {
        cout << "EmailMessage Construct" << endl;
    }

    EmailMessage::~EmailMessage() {
        cout << "EmailMessage De-Construct" << endl;
    }

    void PhoneMessage::sendMsg(string greetMsg) {
        cout << "Phone节日问候" << endl;
    }

    void WeChatMessage::sendMsg(string greetMsg) {
        cout << "wechat节日问候" << endl;
    }
}