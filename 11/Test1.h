//
// Created by sym on 4/16/19.
//

#ifndef INC_11_TEST1_H
#define INC_11_TEST1_H

#include <iostream>

class Test1 {

private:
    char temp[20] = "aaaaaaaaaaaaaaaa";
    void pFun(int a); //私有函数不允许外界访问，只有关系好的才能访问
    friend void sayHello1(Test1 test1);
    friend void testFriend(Test1 test1); //友元函数
    friend class Test2; //友元类
};


#endif //INC_11_TEST1_H
