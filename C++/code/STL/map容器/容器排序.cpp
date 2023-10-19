#include<iostream>
#include<string>
#include<map>

using namespace std;
// class Person{
//     public:
//     Person(string name, int age){
//         this->m_Name = name;
//         this-> age = age;
//     }

//     string m_Name;
//     int age;
// };

// class MyCompare { //重载（）
// public:
// 	bool operator()(const Person &p1,const Person &p2) {
// 		return p1.age > p2.age;
// 	}
// };

class MyCompare {
public:
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};

// void test02(){
//     map<string,int, MyCompare> m;

//     Person p1("刘备", 23);
// 	Person p2("关羽", 27);
// 	Person p3("张飞", 25);
// 	Person p4("赵云", 21);

//     m.insert(make_pair(p1.m_Name, p1.age));
//     m.insert(make_pair(p2.m_Name, p2.age));
//     m.insert(make_pair(p3.m_Name, p3.age));
//     m.insert(make_pair(p4.m_Name, p4.age));
//     // m.insert(make_pair(p2, MyCompare()));
//     // m.insert(make_pair(p3, MyCompare()));
//     // m.insert(make_pair(p4, MyCompare()));
//     for(map<string,int, MyCompare>::iterator it = m.begin(); it !=m.end() ;it++){
//         cout << "姓名" << it->first << "年龄" << it->first << endl;
//     }
// }

void test01() 
{
	//默认从小到大排序
	//利用仿函数实现从大到小排序
	map<int, int, MyCompare> m; //在这修改排序的顺序，需要用仿函数重载（）

	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));

	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key:" << it->first << " value:" << it->second << endl;
	}
}


int main(){

    test01();
    // test02();
}