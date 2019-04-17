#include <iostream>
#include "Test2.h"
#include "Test3.h"

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

    std::cout<<"******** 操作符重载 ********"<<std::endl;
    const std::string str1 = "李磊";
    const std::string str2="李磊1";
    Test3 a(str1);
    Test3 b(str2);
    int ret = (a = b);
    std::cout<< ret <<std::endl;

    if(str1 == str2){
        std::cout<<"equal"<<std::endl;
    }else{
        std::cout<<"no"<<std::endl;
    }

    return 0;
}