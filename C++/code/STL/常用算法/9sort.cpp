#include <algorithm>
#include <vector>
#include<iostream>
using namespace std;

void myPrint(int val)
{
	cout << val << " ";
}

void test01() {
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//sort默认从小到大排序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

    //第二种方法
    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout << endl;

	//从大到小排序
	sort(v.begin(), v.end(), greater<int>()); //看一下关系反函数
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

    
}

int main() {

	test01();

	system("pause");

	return 0;
}