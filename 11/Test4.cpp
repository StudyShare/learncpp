//
// Created by sym on 4/18/19.
//

#include <iostream>
using namespace std;

class Test3{
public:Test3(){

}
};

class Test1:Test3
{
public:
    Test1():Test3(){

    }
    Test1(int i):Test3(){};
private:
    int iValue;
    char cValue;
};

class Test2
{
public:
    explicit Test2(int i):iValue(i){};
private:
    int iValue;
    char cValue;
};

int main(int argc, char* argv[])
{
    Test1 t1 = 1;//t1.iValue值为1,cValue值为char类型默认值
    Test2 t2 = 2;//编译不过, error: conversion from 'int' to non-scalar type 'Test2' requested
}