#include<iostream>

using namespace std;

class Person{

    public: 
    //公共权限
    string m_Name; //姓名

    protected:
    //保护权限
    string m_Car;//汽车

    private:
    int m_Password; //银行密码

    public:
    void func(){
        m_Name = "zhangsan";
        m_Car = "zixingche";
        m_Password =1234;
    }
};
int main(){
    Person p1; //实例化具体对象

    p1.m_Name = "lisi";
    // p1.m_Car = "benchi"; //访问不到
    //p.m_Password = 123; //私有权限类外访问不到
}