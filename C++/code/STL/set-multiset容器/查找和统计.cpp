#include<iostream>
#include<set>

using namespace std;

void test01(){
    //查找
    set<int>s1;
    //插入数据
    s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

    //查找
    set<int>::iterator pos = s1.find(40);
    if (pos != s1.end())
	{
		cout << "找到了元素 ： " << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}
}

//统计
void test02(){
    set<int>s1;
    //插入数据
    s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
    
    //统计 30 的个数
    int num = s1.count(30);
    cout << "num = " << num << endl;
}
int main(){
    test01();
    test02();
}