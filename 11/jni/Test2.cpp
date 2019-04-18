//
// Created by sym on 4/16/19.
//

#include "Test2.h"
#include "Test1.h"
#include <iostream>


void Test2::sayHello() {

    // test1.temp; 在没有成为友原函数之前是不能访问Test1的私有成员变量的
    Test1 test1;
    sayHello1(test1);
    std::cout<<"***************"<<std::endl;
    testFriend(test1);
    std::cout<<"&&&&&&&&&&&&&&&"<<std::endl;
    std::cout<<test1.temp<<std::endl;
}

void testFriend(Test1 test1){
    std::cout<< test1.temp <<std::endl;
}
