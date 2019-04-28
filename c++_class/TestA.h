//
// Created by sym on 4/24/19.
//

#ifndef C_CLASS_TESTA_H
#define C_CLASS_TESTA_H


class TestA {
private:
    int b;

public:
    TestA();
    TestA(int p);
    const static int a=100;
    void fun();
    TestA operator< (const TestA & testA);
    int getB();
};


#endif //C_CLASS_TESTA_H
