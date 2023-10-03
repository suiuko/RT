#include<iostream>

using namespace std;

int* func()
{
    //使用new关键字，可以将数据开辟到堆区
	int* a = new int(10);
	return a;
}

int main() {

	int *p = func();

	cout << *p << endl;
	cout << *p << endl;
    
	system("pause");

	return 0;
}