//
// Created by liudong on 2021/5/17.
//

#ifndef DESIGNPATTERN_FATHER_H
#define DESIGNPATTERN_FATHER_H
#include <iostream>
#include <string>
#include <map>

using namespace std;

namespace LiskovSubstitution {
    class Father {
    public:
        virtual void fun(int a,int b);
    };

}


#endif //DESIGNPATTERN_FATHER_H
