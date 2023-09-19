#include<iostream>

using namespace std;

int main(){

    //冒泡排序

    int arr[9] = {4,2,8,0,5,7,1,3,9};

    //排序前
    cout << "排序前" << endl;
    for(int i=0;i<9;i++){
        cout<< arr[i];
    }
    cout << endl;

    for(int i =0;i<9-1;i++){ // 外侧的轮数，总共的轮数 = 元素-1
        for (int j =0; j<9-1-i;j++){ // 内层循环对比
            //如果第一个数字，比第二个数字大，交换两个数字

            if(arr[j]>arr[j+1]){

                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;             
            }
        }
    }

    //排序后结果
    cout << "排序后" << endl;
    for(int i =0; i < 9;i++){
        cout<< arr[i];
    }
    cout << endl;
}