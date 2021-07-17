//
// Created by liudong on 2021/5/17.
//

#ifndef DESIGNPATTERN_SON_H
#define DESIGNPATTERN_SON_H
#include "Father.h"
namespace  LiskovSubstitution {
    class Son: public Father {
    public:
        void fun(int a, int b) override;
    };
}



#endif //DESIGNPATTERN_SON_H
