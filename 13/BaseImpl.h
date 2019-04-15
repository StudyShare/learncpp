//
// Created by sym on 4/15/19.
//

#ifndef INC_13_BASEIMPL_H
#define INC_13_BASEIMPL_H


#include "Base.h"

class BaseImpl : public Base {

public:
    BaseImpl(int a);
    BaseImpl();
    virtual int add(int a,int b) override;

    void start() override;
    void middle() override;
    void end() override;
    void call() override;
};


#endif //INC_13_BASEIMPL_H
