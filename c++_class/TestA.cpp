//
// Created by sym on 4/24/19.
//

#include "TestA.h"
#include <iostream>

void TestA::fun() {
    std::cout << "TestA::fun sayHello" << std::endl;
}

TestA TestA::operator<(const TestA &testA) {
    return testA.b < b ? testA : *this;
}

TestA::TestA(int p) {

    this->b = p;
}

int TestA::getB() {
    return b;
}

TestA::TestA() {

}
