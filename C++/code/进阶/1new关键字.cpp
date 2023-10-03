#include<iostream>

using namespace std;
//1.new 的基本语法
int* func()
{
	int* a = new int(10);
	return a;
}

void test01(){

    int *p = func();
    cout << *p << endl;
    //堆区的数据由程序员管理开辟，程序员管理释放
    //如果释放，使用 delete
    delete p;
}


//2.在堆区利用new开辟数组
void test02(){
    //创建 10 整型数据的数组，在堆区
    int * arr = new int [10]; //10代表数组中有 10 个元素
    for(int i =0;i<10;i++){
        arr[i] = i+100;
    }
    for(int i=0;i<10;i++){
        cout << arr[i] << endl;
    }

    //释放堆区数组
    //释放数组的时候  需要加[]才可以
    delete[] arr;

}

int main(){

    test01(); //一个数字
    test02(); // 开辟数组

}