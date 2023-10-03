#include<iostream>

using namespace std;

//函数的分文件编写
// 实现两个数字进行交换的函数

//函数的声明
void swap(int a, int b);

//函数定义

void swap(int a ,int b){
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main(){
    int a =10,b=20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(a,b);

}