//
// Created by sym on 4/17/19.
//

#ifndef INC_11_TEST3_H
#define INC_11_TEST3_H

#include <string>

class Test3 {

private:
    std::string name;

public:
    Test3(const std::string &name);
    int operator=(const Test3 &test3);
};


#endif //INC_11_TEST3_H
