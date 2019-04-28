#include <stdio.h>

void testFunAddress(int a);

int main() {
    printf("%s\n", "hello jni");
    testFunAddress(3);
    void (*funP)(int); //函数指针声明
    void testFunAddress(int); //函数指针地址
    funP = testFunAddress;//赋值
    funP(10); //调用
    (*funP)(100);//兼容

    return 0;
}

void testFunAddress(int a) {

    printf("%d\n", a);
    return;
}