//
// Created by sym on 4/15/19.
//

#include <iostream>
#include "BaseImpl.h"

int BaseImpl::add(int a, int b) {
    std::cout << Base::add(a, b) << std::endl;
    return a + b;
}

BaseImpl::BaseImpl(int a) : Base(a) {

    std::cout << "BaseImpl(int a) 的构造函数被调用" << std::endl;
}

BaseImpl::BaseImpl() {
    std::cout << "BaseImpl() 的构造函数被调用" << std::endl;
}

void BaseImpl::start() {
    Base::start();
    std::cout << "BaseImpl start()" << std::endl;
}

void BaseImpl::middle() {
    Base::middle();
    std::cout << "BaseImpl middle()" << std::endl;
}

void BaseImpl::end() {
    Base::end();
    std::cout << "BaseImpl end()" << std::endl;
}

void BaseImpl::call() {
    Base::call();
}
