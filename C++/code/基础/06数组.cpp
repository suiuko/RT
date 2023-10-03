#include<iostream>

using namespace std;

int main(){

    //数组

    // 1. 数据类型 数组名[数组长度];
    int arr[5];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    cout << arr[0] << endl;

    //2. 数据类型 数组名[数组长度] = {1,2}
    int arr2[5] = {1,2,3,4,5};

    for(int i =0;i<5;i++){
        cout << arr2[i] << endl;
    }

    // 3. 数据类型 数组名[]={值1,值2 }
    int arr3[]={9,8,7,6,5,4,3,2,1};
    for(int i =0;i<9;i++){
        cout<< arr3[i]<<endl;
    }
}