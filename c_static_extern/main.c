#include <stdio.h>

extern sayHello(); //引入函数
int main() {
    printf("Hello, World!\n");

    sayHello();
    return 0;
}