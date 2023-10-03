#include<iostream>

using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;

int main(){

    //全局区

    //全局变量、静态变量、常量

    //创建普通局部变量


    int a =10;
    int b =10;
    cout << "局部变量a地址为： " << &a << endl;
	cout << "局部变量b地址为： " << &b << endl;

    cout << "全局变量g_a地址为： " <<  &g_a << endl;
	cout << "全局变量g_b地址为： " <<  &g_b << endl;
    //局部变量和全局变量存放的地方不一样
    

    //静态变量
	static int s_a = 10;
	static int s_b = 10;
    cout << "静态变量s_a地址为： " << &s_a << endl;
	cout << "静态变量s_b地址为： " << &s_b << endl;

    //字符串常量
    cout << "字符串常量地址为： " << (int)&"hello world" << endl;
	cout << "字符串常量地址为： " << (int)&"hello world1" << endl;

    // const修饰的变量
    // c-const ; g - global  l-local
    const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "局部常量c_l_a地址为： " << (int)&c_l_a << endl;
	cout << "局部常量c_l_b地址为： " << (int)&c_l_b << endl;
}