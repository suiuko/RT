#include<iostream>

using namespace std;

//交换两个整型函数
void swapInt(int &a,int &b){
    int temp = a;
    a= b;
    b = temp;
}

//交换两个浮点型函数

void swapDouble(double &a,double &b){
    double temp = a;
    a = b;
    b = temp;
}

// 利用模板提供通过交换函数
template <typename T> //模板声明
void mySwap(T&a, T&b){ 
    T temp = a;
    a = b;
    b = temp;
}


void test1(){

    int a =10;
    int b =8;
    swapInt(a,b);
    cout << a << endl;
    cout << b << endl;

    double c =1.1;
    double d = 2.2;
    swapDouble(c,d);
    cout << c << endl;
    cout << d << endl;

    //利用模板实现交换
    //1. 自动类型推导
    mySwap(a,b);

    //2.显示指定类型
    mySwap<int>(a,b);

}

int main(){

    test1();
}