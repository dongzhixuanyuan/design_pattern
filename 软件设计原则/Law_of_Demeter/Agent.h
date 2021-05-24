//
// Created by liudong on 2021/5/21.
//
#ifndef DESIGNPATTERN_AGENT_H
#define DESIGNPATTERN_AGENT_H
#include <string>
#include <iostream>
#include "Star.h"
#include "Fans.h"
#include "Company.h"

using namespace std;

class Agent {
public:
    Star star;
    Company company;
    Fans fans;
    void meeting();
    void business();

};


#endif //DESIGNPATTERN_AGENT_H
