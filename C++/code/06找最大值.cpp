#include<iostream>

using namespace std;

int main(){

   

    int arr[5] = {300,350,200,400,250};
    // 找最大值
    int max = 0;
    for(int i = 0; i<5;i++){
        //更新最大值
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout << max << endl;
    
}