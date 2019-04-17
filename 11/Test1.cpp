//
// Created by sym on 4/16/19.
//

#include "Test1.h"
#include <iostream>

void Test1::pFun(int a) {
    std::cout << "我是Test1的私有函数" << std::endl;
}

void sayHello1(Test1 test1) {

    char *ret = test1.temp;
    std::cout << ret << std::endl;
}

