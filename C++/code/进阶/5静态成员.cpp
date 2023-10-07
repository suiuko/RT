#include<iostream>

using namespace std;

//静态成员变量
class Person{
    public:
    //静态对象特点：
    //1. 所有对象都共享同一份数据
    //2. 编译阶段就分配内存
    //3. 类内声明，类外初始化操作

    static int m_A;

    private:
	static int m_B; //静态成员变量也是有访问权限的

   
};
int Person::m_A = 100;
int Person::m_B = 10;

void test01(){

    Person p;
    cout << p.m_A << endl;

    Person p2;
    p2.m_A = 200; //更改后 数值会发生改变

    cout << p.m_A << endl;
}

void test02(){
    //静态成员变量 不属于某个对象上，所有对象都共享同一份数据
    //因此静态成员变量有两种访问方式

    //1、通过对象
    Person p1;
    p1.m_A = 100;
    cout << p1.m_A << endl;

    //2、通过类名
    cout << "m_A = " << Person::m_A << endl;

    //私有静态变量访问不到！
    //cout << "m_B = " << Person::m_B << endl; //私有权限访问不到
}
int main(){
    // test01();

}