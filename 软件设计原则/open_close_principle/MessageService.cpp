//
// Created by liudong on 2021/5/17.
//

#include "MessageService.h"

OpenClosePrinciple::MessageService::MessageService(const shared_ptr<ISendable> sendHelper) : sendHelper(sendHelper) {

}

void OpenClosePrinciple::MessageService::greeting(string greetMsg) {
    sendHelper->sendMsg(greetMsg);
}
