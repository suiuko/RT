#include<iostream>

using namespace std;

int main(){

    //二维数组名称用途

    // 1. 可以看占用内存大小
    int arr[2][3]={
        {1,2,3},
        {4,5,6}
    };
    cout << "二维数组占用内存空间为：" << sizeof(arr) << endl;
    cout << "二维数组第一行占用内存空间为：" << sizeof(arr[0]) << endl;
    cout << "二维数组第一个元素占用内存空间为：" << sizeof(arr[0][0]) << endl;

    cout << "行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
    //2. 可以看首地址
    cout << arr << endl;
    // cout << (int)arr << endl;

}