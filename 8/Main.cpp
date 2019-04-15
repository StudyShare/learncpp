//
// Created by sym on 4/12/19.
//
#include "ClassA.h"
#include <iostream>
#include "ClassB.h";

//证明了派生类的引用可以调用基类的函数

using namespace std;

void sayHello(ClassA &classA);
int main(){

    ClassB classB;
    sayHello(classB);
}

void sayHello(ClassA &classA){
    classA.sayHaha();
}
