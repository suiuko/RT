#include<iostream>

using namespace std;

int main(){
    
    // 常量指针
    int a = 10;
    int b = 10;

    const int *p = &a;//指针指向的值不可以改，指针的指向可以改
    // *p=20; 错误
    p = &b;

    //指针常量
    int * const p2 = &a;
    *p2 = 100; //正确
    //p2 = &b 错误，指针的指向不可以改
    
    //双修饰
    const int * const p3 = &a;
    //都不能改


}