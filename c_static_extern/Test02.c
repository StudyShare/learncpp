//
// Created by sym on 4/24/19.
//

#include <stdio.h>

//extern的作用就是引入其它文件的函数和变量
extern a;
extern getSayHello();
void sayHello(){
    printf("%d\n",a);
    getSayHello();
}