#include <iostream>
#include "TestD.h"

struct student{
    int age;
    char name;
    float score;
};

union stu{
    int age;
    char name;
    float score;
};

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

    int size = sizeof(struct student);
    std::cout<<size<<std::endl;

    size = sizeof(union stu);

    std::cout<<size<<std::endl;

    size=sizeof(char);
    std::cout<<"the size of char "<<size<<std::endl;

    size=sizeof(int);
    std::cout<<"the size of int "<<size<<std::endl;

    size=sizeof(float);
    std::cout<<"the size of float "<<size<<std::endl;

    union stu test;
    test.age=26;
    test.name='s';
    test.score=100;

    std::cout<< sizeof(test)<<std::endl;
    std::cout<< "the address of test.age is "<<&test.age<<std::endl;
    std::cout<< "the address of test.name is "<<&test.name<<std::endl;
    std::cout<< "the address of test.score is "<<&test.score<<std::endl;

    //总结：当如果有几种类型要选择的时候可以使用union,union是会内容覆盖的

    return 0;
}