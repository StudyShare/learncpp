#include <iostream>
#include "BaseImpl.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Base base1;
    BaseImpl baseImpl;
    Base &base2 = baseImpl;
    Base &base3 = base1;
    int ret = base2.add(3, 4);
    std::cout << ret << std::endl;
    BaseImpl baseImpl1(2);

    //模拟接口
    Base *base0 = new BaseImpl;
    base0->call();
    delete base0;

    return 0;
}