#include<iostream>
#include<string>

using namespace std;

//类对象作为类成员

//手机类
class Phone{
    public:
        Phone(string pName){
            m_PName = pName;
            cout << "Phone构造" << endl;
        }

        ~Phone()
	    {
		cout << "Phone析构" << endl;
	    }


    //手机品牌名称
    string m_PName;
};

//人类
class Person{
    public:
    //Phone m_phone = pName; 隐式转换法
    Person(string name, string pName):m_Name(name),m_Phone(pName){
        // m_Name = name;
        cout << "Person构造" << endl;
    }
    ~Person()
	{
		cout << "Person析构" << endl;
	}
    
    //姓名
    string m_Name;
    //手机
    Phone m_Phone;
};

void test01(){
    Person p("san","iphone");

    cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
}

int main(){ 
    test01();
    return 0;
}