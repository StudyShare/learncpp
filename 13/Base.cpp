//
// Created by sym on 4/15/19.
//

#include "Base.h"
#include <iostream>

int Base::add(int a, int b) {
    return 0;
}

Base::Base(int a) {

    std::cout << "Base(int a) 的构造函数被调用" << std::endl;
}

Base::Base() {
    std::cout << "Base() 的构造函数被调用" << std::endl;
}

void Base::start() {

    std::cout << "base start()" << std::endl;
}

void Base::end() {
    std::cout << "base end()" << std::endl;
}

void Base::call() {
    start();
    middle();
    end();
}

void Base::middle() {
    std::cout << "base middle()" << std::endl;
}
