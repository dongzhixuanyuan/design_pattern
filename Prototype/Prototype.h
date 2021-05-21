//
// Created by liudong on 2021/5/21.
//

#ifndef DESIGNPATTERN_PROTOTYPE_H
#define DESIGNPATTERN_PROTOTYPE_H
#include <cstring>

using namespace std;
class Prototype {
public:
    char * name;
    Prototype* clone();

    Prototype(char *name);

    Prototype(const Prototype &rhs);

    Prototype& operator=(const Prototype &rhs);

    ~Prototype();
};


#endif //DESIGNPATTERN_PROTOTYPE_H
