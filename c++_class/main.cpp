#include <iostream>
#include "TestD.h"
#include "TestE.h"

#define CLEAR_BIT0(addr)    (addr & 0xFFFFFFFE)

typedef struct student {
    int age;
    char name;
    float score;
} st;

union stu {
    int age;
    char name;
    float score;
} u;

struct person {
    struct student item[1024];
    int size;
};

template<typename T1, typename T2, typename T3>
T3 max(T1 a, T2 b) {

    return a > b ? a : b;
};

template<typename T1, typename T2>
T2 min(T1 a, T1 b) {

    return a < b;
}

//获取函数地址
template<typename dst_type, typename src_type>
static dst_type union_cast(src_type src) {

    union {
        src_type s;
        dst_type d;
    } u;
    u.s = src;
    return u.d;
}

//typedef unsigned int uint32_t;

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
    std::cout << size << std::endl;

    size = sizeof(union stu);

    std::cout << size << std::endl;

    size = sizeof(char);
    std::cout << "the size of char " << size << std::endl;

    size = sizeof(int);
    std::cout << "the size of int " << size << std::endl;

    size = sizeof(float);
    std::cout << "the size of float " << size << std::endl;

    union stu test;
    test.age = 26;
    test.name = 's';
    test.score = 100;

    std::cout << sizeof(test) << std::endl;
    std::cout << "the address of test.age is " << &test.age << std::endl;
    std::cout << "the address of test.name is " << &test.name << std::endl;
    std::cout << "the address of test.score is " << &test.score << std::endl;

    //总结：当如果有几种类型要选择的时候可以使用union,union是会内容覆盖的

    //static 在c++中的用法
    Android::app_usage();

    uint32_t a = 1000;
    int size_01 = sizeof(a);
    printf("%d\n", size_01);

    uint64_t b = 1000;
    int size_b = sizeof(b);
    printf("%d\n", size_b);

    uint8_t c = 1000;
    int size_c = sizeof(c);
    printf("%d\n", size_c);

    std::cout << "***************" << std::endl;
    struct student xiao = {29};
    std::cout << xiao.age << std::endl;
    std::cout << xiao.name << std::endl;
    std::cout << xiao.score << std::endl;

    std::cout << "**************" << std::endl;
    struct person p = {10};
    std::cout << p.size << std::endl;

    uint32_t temp = 100;
    printf("%p\n", &temp);


//    CLEAR_BIT0(&temp);
    st student_01;
    student_01.name = 'h';
    std::cout << student_01.name << std::endl;

    //union 定义别名可以省略typedef
    u.name = 'u';
    std::cout << u.name << std::endl;

    std::cout << "***************" << std::endl;

    void *address = union_cast<void *>(&TestA::fun);
    std::cout << address << std::endl;

    uint64_t ret = max<uint32_t, uint32_t, uint64_t>(10, 9);
    std::cout << ret << std::endl;

    uint64_t ret1 = min<uint32_t, uint64_t>(10, 9);
    std::cout << ret1 << std::endl;


    TestA testA01(10);
    TestA testA02(9);
    TestA testA_ret = min<TestA, TestA>(testA01, testA02);
    std::cout << testA_ret.getB() << std::endl;

//    std::cout<<&TestA::fun()<<std::endl;
    return 0;
}