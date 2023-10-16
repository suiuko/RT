#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//vector 容器中存放自定义数据类型

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
    vector<Person>v;
    Person p1("aaa", 10);
    Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);
    v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

    for(vector<Person>::iterator it = v.begin();it!=v.end();it++){
        cout << "name" << (*it).m_Name << " age" << (*it).m_Age << endl; 
        //*it是什么就看<>里面是什么，解出来的就是什么
        //当然it是指针，可以直接使用->来获取数据
        cout << "name" << it->m_Name << " age" << it->m_Age << endl; 

    }
}

void test02(){
    vector<Person*>v;
    Person p1("aaa", 10);
    Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	Person p5("eee", 50);

    v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);   
    for(vector<Person*>::iterator it = v.begin();it!=v.end();it++){
        cout << "name" << (*it)->m_Name << " age" << (*it)->m_Age << endl; 
    }
}
int main(){
    test01();
    test02();
}