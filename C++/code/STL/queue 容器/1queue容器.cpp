#include<queue>
#include<iostream>
#include<string>

using namespace std;

class Person{
    public:
    Person(string name,int age){
        this->m_Age = age;
        this->m_Name = name;
    }
    string m_Name;
    int m_Age;
};

void test01(){

    //创建队列
    queue<Person> q;
    //创建队列
    Person p1("唐僧",30);
    Person p2("孙悟空",330);
    Person p3("你爸爸",230);
    Person p4("哦哦哦",130);

    //入队
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    //判断只要队列不为空，查看队头，查看队尾，出队
    while(!q.empty()){
        //查看队头
        cout << "队头元素-- 姓名： " << q.front().m_Name 
              << " 年龄： "<< q.front().m_Age << endl;
        
		cout << "队尾元素-- 姓名： " << q.back().m_Name  
              << " 年龄： " << q.back().m_Age << endl;
        cout << endl;
        q.pop(); //弹出队头元素

    }
    cout << "队列大小为：" << q.size() << endl;
}

int main(){
    test01();
}