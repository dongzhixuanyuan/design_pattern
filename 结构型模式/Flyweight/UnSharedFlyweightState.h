//
// Created by liudong on 2021/6/27.
//

#ifndef DESIGNPATTERN_UNSHAREDFLYWEIGHTSTATE_H
#define DESIGNPATTERN_UNSHAREDFLYWEIGHTSTATE_H
#include <string>

using namespace std;
//不可共享的内部状态
class UnSharedFlyweightState {
private:
    string  mName;
    int mNumber;
public:
    UnSharedFlyweightState(string name,int number):mName(name),mNumber(number){

    }
    string getName() {
        return mName;
    }
    int getNumber() {
        return mNumber;
    }
};


#endif //DESIGNPATTERN_UNSHAREDFLYWEIGHTSTATE_H
