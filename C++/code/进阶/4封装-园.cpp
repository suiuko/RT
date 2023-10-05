#include<iostream>

using namespace std;

const double PI = 3.14;

//1、封装的意义
//将属性和行为作为一个整体，用来表现生活中的事物

//封装一个圆类，求圆的周长
//class代表设计一个类，后面跟着的是类名

class Circle{
    //访问权限
    //公众权限
public:
    //属性
    int m_r; //半径

    //行为
    //获取园的周长
    double calculateZC(){
        return 2 * PI *m_r;
    }
};


int main(){

    //通过园类，创建园对象
    Circle c1;//c1就是具体的园
    //给园对象的属性进行赋值
    c1.m_r=10;

    cout << "周长:" << c1.calculateZC() << endl;
}