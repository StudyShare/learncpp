//
// Created by sym on 4/17/19.
//

#include "Test3.h"
#include <string>
#include <iostream>

int Test3::operator=(const Test3 &test3) {

    if (test3.name == name) {
        return 10;
    }
    return 0;
}

Test3::Test3(const std::string &name) {

    std::cout << "the address of &name " << &name << std::endl;
    Test3::name = name;
    std::cout << "the address of Test::name is " << &this->name << std::endl;
}
