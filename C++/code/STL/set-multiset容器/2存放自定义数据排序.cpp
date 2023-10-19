#include<iostream>
#include<set>
#include<string>

using namespace std;

//set 容器排序，存放自定义数据类型

class Person{
    public:
    Person(string name, int age){
        this->m_Name = name;
        this->m_Age = age;
    }

    string m_Name;
    int m_Age;
};


void test01(){
    set<Person>s;

    //创建 Person 对象
    Person p1("刘备", 23);
	Person p2("关羽", 27);
	Person p3("张飞", 25);
	Person p4("赵云", 21);

    s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

    for(set<Person>::iterator it =s.begin(); it !=s.end() ;it++){
        cout << "姓名" << it->m_Name << "年龄" << it->m_Age << endl;
    }

}

int main(){
    test01();
}