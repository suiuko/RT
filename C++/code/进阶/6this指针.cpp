#include<iostream>

using namespace std;

class Person{
    public:
    Person(int age){
        // m_age = age;
        // this指针指向被调用的成员函数所属的对象
        this->age = age;
    }
    // void PersonAddAge(Person &p){
    //     this->age +=p.age;
    // }
    Person& PersonAddAge(Person &p){
        this->age += p.age;

        //this指向p2的指针，而*this指向的是p2这个对象本体
        return *this;
    }
    // int m_age; 这个编译器会区分
    int age;  //但是这个不会
};
//1. 解决名称冲突
void test01(){

    Person p1(18);
    // cout << "p1 age : " << p1.m_age << endl; //之前学的是用m_age来区分传入的age
    cout << "p1 age : " << p1.age << endl;
}

//2. 返回对象本身用 *this

void test02(){
    Person p1(10);

    Person p2(10);
    // p2.PersonAddAge(p1);

    //链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1);
    cout << "p2年龄为" << p2.age << endl;
}
int main(){

    // test01();
    test02();
}