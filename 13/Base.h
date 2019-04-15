//
// Created by sym on 4/15/19.
//

#ifndef INC_13_BASE_H
#define INC_13_BASE_H


class Base {

private:
    int a;

public:
    Base(int a);
    Base();
    virtual int add(int a,int b);
    virtual void start();
    virtual void middle();
    virtual void end();
    virtual void call();
};


#endif //INC_13_BASE_H
