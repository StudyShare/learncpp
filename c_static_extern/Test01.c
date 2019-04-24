//
// Created by sym on 4/24/19.
//
#include <stdio.h>

int a = 1024;

//static 在c语言中是隐藏的意思文件内可见
static sayHello(){
    printf("%s\n","Test01 sayHello");
}

void getSayHello(){
    sayHello();
}