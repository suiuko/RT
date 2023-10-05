#include<iostream>

using namespace std;

// void showValue(int& v) {
// 	v=1000; //不小心修改了，这时，a 也变为 1000 了。
// 	cout << v << endl;
// }

//引用使用的场景，通常用来修饰形参
void showValue(const int& v) {
	//v += 10; //报错，不能修改！
	cout << v << endl;
}

int main(){

    //常量引用
    //使用场景： 用来修饰形参，防止误操作。

    //加上const之后，编译器将代码修改， int temp = 10; const int &ref = temp;
    const int &ref = 10; //引用必须引一块合法的内存空间，这里其实引用的是一个临时的空间。
    // ref = 20;  //错误，不能修改

    //函数中利用常量引用防止误操作修改实参
	int a = 10;
	showValue(a);

    cout << "main a:" << a << endl;
}