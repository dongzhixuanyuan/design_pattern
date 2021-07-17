//
// Created by liudong on 2021/5/17.
//

#include "Son.h"

/*这段代码违背了里氏原则，因为它复写了父类方法，并做出了意想不到的改动*/
void LiskovSubstitution::Son::fun(int a, int b) {
//    Father::fun(a, b);
    cout << "son: " << a - b << endl;
}
