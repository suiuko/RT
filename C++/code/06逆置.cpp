#include<iostream>

using namespace std;

int main(){


    //元素逆置
    int arr[5] = {4,3,2,5,1};
    //逆置前
    cout << "逆置前" << endl;

    for(int i = 0;i <5 ;i++){
        cout << arr[i];
    }
    cout << endl;
    
    // shi
    int start = 0;//起始元素下标
    int end = sizeof(arr) / sizeof(arr[0]) -1; //末尾元素下标

    return 0;
}