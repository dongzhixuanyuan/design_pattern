//
// Created by liudong on 2021/5/17.
//

#ifndef DESIGNPATTERN_MESSAGESERVICE_H
#define DESIGNPATTERN_MESSAGESERVICE_H
#include <memory>
#include "ISendable.h"

namespace OpenClosePrinciple {
    class MessageService {
    public:
        shared_ptr<ISendable> sendHelper;

        MessageService(const shared_ptr<ISendable> sendHelper);

        void greeting(string greetMsg);

    };

}



#endif //DESIGNPATTERN_MESSAGESERVICE_H
