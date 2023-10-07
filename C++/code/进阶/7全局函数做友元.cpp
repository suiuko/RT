#include<iostream>
#include<string>
using namespace std;

//建筑物类
class Building{

    //告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
	friend void goodGay(Building * building);

public:
    Building(){
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }
public:
	string m_SittingRoom; //客厅

private:
	string m_BedRoom; //卧室
};

//全局函数
void goodGay(Building * building)
{
	cout << "好基友正在访问： " << building->m_SittingRoom << endl;
	cout << "好基友正在访问： " << building->m_BedRoom << endl;
}

void test01(){
    Building building;
    goodGay(&building);

}


int main(){

    test01();
}