#include<iostream>

using namespace std;

//构造函数的调用规则
//1. 创建一个类，编译器会给每个类都添加至少 3 个函数
// 默认构造（空实现）
// 析构函数（空实现）
// 拷贝构造（值拷贝）

class Person{
    public:
    Person(){
        cout << "无参构造函数!" << endl;
    }
    //有参构造函数
	Person(int age) {
		m_Age = age;
		cout << "有参构造函数!" << endl;
	}

    Person(const Person& p) {
		m_Age = p.m_Age;
		cout << "拷贝构造函数!" << endl;
	}

    //析构函数
	~Person() {
		cout << "析构函数!" << endl;
	}
    int m_Age;
};

void test01(){
    Person p;
    p.m_Age = 18;

    Person p2(p);//如果不写拷贝构造，编译器会自动添加拷贝构造，并且做浅拷贝操作
    cout << p2.m_Age <<endl;
}

//如果我们写了有参构造函数，编译器就不再提供默认构造，依然提供拷贝构造。
void test02(){
    //如果用户提供有参构造，编译器不会提供默认构造，会提供拷贝构造
	Person p1; //此时如果用户自己没有提供默认构造，会出错
	Person p2(10); //用户提供的有参
	Person p3(p2); //此时如果用户没有提供拷贝构造，编译器会提供

	//如果用户提供拷贝构造，编译器不会提供其他构造函数
	Person p4; //此时如果用户自己没有提供默认构造，会出错
	Person p5(10); //此时如果用户自己没有提供有参，会出错
	Person p6(p5); //用户自己提供拷贝构造
}

int main(){
    test01();

}