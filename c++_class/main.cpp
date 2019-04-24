#include <iostream>
#include "TestD.h"

//测试菱形继承的问题
int main() {
    std::cout << "Hello, World!" << std::endl;
    //使用虚继承之前
    TestD d;
//    std::cout << d.TestC::TestA::a << " the address is "<<&d.TestC::TestA::a <<std::endl;
//    std::cout<< d.TestB::TestA::a << " the address is " <<&d.TestB::TestA::a<<std::endl;

    d.TestC::fun();
    d.TestB::fun();
    d.fun(); //如果不使用Virtual继承会因为多继承的二意性问题不知道调用那个基类的这个函数
    return 0;
}