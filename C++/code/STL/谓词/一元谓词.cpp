#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

//1.一元谓词
struct GreaterFive{
	bool operator()(int val) {
		return val > 5;
	}
};

void test01() {

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive()); //匿名的函数对象
  //正常情况需要创建根据类来创建一个对象，刚进去，但是如果不想给对象起名，可以还用匿名对象
	if (it == v.end()) {
		cout << "没找到!" << endl;
	}
	else {
		cout << "找到:" << *it << endl;
	}

}

int main(){
    test01();
}