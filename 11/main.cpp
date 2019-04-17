#include <iostream>
#include "Test2.h"

/*
 * learn 友元函数
 * */
int main() {
    std::cout << "Hello, World!" << std::endl;

    char temp[20] = "adeededeededede";
    char *cp = "哈哈哈哈";
    printf("%p\n",cp);
    printf("%s\n",temp);
    printf("%p\n",temp);
    std::cout << temp << std::endl;

    std::cout << "******************"<<std::endl;
    Test2 test2;
    test2.sayHello();
    return 0;
}