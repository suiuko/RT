#include<iostream>
#include<string>
#include<map>

using namespace std;
class Person{
    public:
    Person(string name, int age){
        this->m_Name = name;
        this-> age = age;
    }

    string m_Name;
    int age;
};

class MyCompare { //重载（）
public:
	bool operator()(const Person &p1,const Person &p2) const{
		return p1.age > p2.age;
	}
};


void test02(){
    map<Person,int, MyCompare> m;

    Person p1("刘备", 23);
	Person p2("关羽", 27);
	Person p3("张飞", 25);
	Person p4("赵云", 21);

    m.insert(make_pair(p1, p1.age));
    m.insert(make_pair(p2, p2.age));
    m.insert(make_pair(p3, p3.age));
    m.insert(make_pair(p4, p4.age));

    for(map<Person,int, MyCompare>::iterator it = m.begin(); it !=m.end() ;it++){
		Person p = it->first;
		int age = it->second;
        cout << "姓名" << p.m_Name << "年龄" << age << endl;
        // cout << "姓名" << it->first.m_Name << "年龄" << age << endl;
    }
}




int main(){

    test02();
}