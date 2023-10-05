#include<iostream>

using namespace std;

//对象的初始化和清理
//1. 构造函数初始化
class Person{
public:
    // 1.1 构造函数
    //没有返回值，不用写void
    //函数名与类名相同
    //构造函数可以有参数，可以发生重载
    //创建对象的时候，构造函数会自动调用，而且只调用一次

    Person(){
        cout << "Person的构造函数调用" << endl;
    }

    //2.析构函数
    //没有返回值，不写 void
    //函数明和类名相同，但是前面加～
    //析构函数不可以有参数，不可以发生重载
    //对象在销毁钱，会自动调用析构函数，而且只会调用一次

    ~Person(){
        cout<< "Person的析构函数调用" << endl;
    }
};

//构造和析构都是必须有的实现，如果我们自己不提供，编译器会提供一个空实现的构造和析构
void test01(){
    Person p;  //在栈上的数据，test01执行完毕后，释放这个对象

}

int main(){
    test01();

    Person p1; //如果在此创建，只有在main 马上结束的时候 才会出现析构。
}