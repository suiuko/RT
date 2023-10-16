#include<iostream>
#include<deque>

using namespace std;

void printDeque(const deque<int>& d) 
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";

	}
	cout << endl;
}
//两端操作
void test01()
{
	deque<int> d;
	//尾插
	d.push_back(10);
	d.push_back(20);
	//头插
	d.push_front(100);
	d.push_front(200);

	printDeque(d);

	//尾删
	d.pop_back();
	//头删
	d.pop_front();
	printDeque(d);
}

//插入
void test02()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);
    //200 100 10 20

    //insert插入
	d.insert(d.begin(), 1000);
	printDeque(d);
    //1000 200 100 10 20

	d.insert(d.begin(), 2,10000);
	printDeque(d);

	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
    // d :  10000 10000 1000 200 100 10 20
    // d2: 1 2 3
	d.insert(d.begin(), d2.begin(), d2.end());
	printDeque(d);

}

//删除
void test03()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	printDeque(d);

	d.erase(d.begin());
	printDeque(d);

    //按照区间删除
	d.erase(d.begin(), d.end());
	d.clear();
	printDeque(d);

    //迭代器删除
    deque<int>::iterator it = d.begin();
    it++;
    d.erase(it); //删除第二个元素
}

int main(){

    // test01();
    test02();
    // test03();
}