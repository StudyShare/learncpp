//c++　引用练习
#include <iostream>
#include <string>

using namespace std;
string version1(const string &a, const string &b);
string & version2(const string &a, const string &b);
const string & version3(string &a, const string &b);
string version4(string a,string b);

int main() {
    std::cout << "Hello, World!" << std::endl;
    string value = version1("hello","world");
    cout << "value address :: "<<&value <<endl;
    cout << value <<endl;

//    string & value2 = version2("hello2","world2");
//    cout << "value2 address :: "<<&value2 <<endl;
//    cout << value2 <<endl;

    string a = "hello3";
    string b = "world3";
    const string & value3 = version3(a,b);
    cout << "value3 address :: "<<&value3 <<endl;
    cout << value3 <<endl;
    cout << "the value of a is  "<<a <<endl;

    cout << " ************ "<<endl;
    a = "hello4";
    b = "world4";
    cout << "the address of a is "<< &a <<endl;
    cout << "the address of b is "<< &b <<endl;
    string value4 = version4(a,b);
    cout << "the address of value4 is "<<&value4<<endl;
    return 0;
}

string version1(const string &a, const string &b){

    string temp;
    temp = a + b +a;
    //return 以后temp的内容会暂存到临时存储区域，然后将值copy到value中
    std::cout<< "temp address :: " <<& temp <<std::endl;
    return temp;
}

string & version2(const string &a, const string &b){

    string temp;
    temp = a + b +a;
    std::cout<< "temp address :: " <<& temp <<std::endl;
    //模块内的临时变量temp在函数执行完后被回收掉,返回的string &会指向null
    return temp;
}

const string & version3(string &a, const string &b){

    a = a + b +a;
    std::cout<< "temp address :: " <<& a<<std::endl;
    //这样写好处是省去了copy到临时空间的过程，坏处是a的原有的值会被修改掉
    return a;
}

string version4(string a,string b){

    cout << "param a address is "<< &a <<endl; //证明了行参是实参的副本
    cout << "param b address is "<< &b <<endl;

    a = a + b +a;
    return a;
}

