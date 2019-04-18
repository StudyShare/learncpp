//
// Created by sym on 4/16/19.
//

#ifndef INC_11_TEST1_H
#define INC_11_TEST1_H

#include <iostream>

static int static_a = 1001;

class Test1 {

private:
    char temp[20] = "aaaaaaaaaaaaaaaa";
    void pFun(int a); //私有函数不允许外界访问，只有关系好的才能访问
    friend void sayHello1(Test1 test1);
    friend void testFriend(Test1 test1); //友元函数
    friend class Test2; //友元类
public:
    int c;
    const static int static_b = 100001;
    static void testStatic();
};


#endif //INC_11_TEST1_H
