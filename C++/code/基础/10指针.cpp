#include<iostream>

using namespace std;

int main(){

    //定义指针
    int a = 10;

    //指针定义的语法： 数据类型 * 名字；
    int *p;
    //让指针记录变量地址
    p = &a;
    cout<< "指针为" << p << endl;
    
    //使用
    *p = 1000;
    cout << *p << endl;

}