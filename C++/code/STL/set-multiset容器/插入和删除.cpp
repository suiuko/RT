#include<iostream>
#include <set>

using namespace std;

void printSet(set<int>&s){
    for(set<int>::iterator it = s.begin(); it !=s.end();it++){
        cout << *it << " ";
    }
    cout <<endl;
}

void test01(){
    set<int> s1;
	//插入
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	printSet(s1);

	//删除
	s1.erase(s1.begin()); //已经排序好，默认删除最小的
	printSet(s1);

	s1.erase(30);
	printSet(s1);

	//清空
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	printSet(s1);
}

int main(){

    test01();
}