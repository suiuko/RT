#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    // cout << "hello" << endl;
    // std::cout << "hello" << std::endl;

    //判断类型
    int i = 10;
    float f = static_cast<float>(i);
    std::cout << i << endl;
    std::cout << sizeof(i) << endl;

    system("pause");

    return 0;
}