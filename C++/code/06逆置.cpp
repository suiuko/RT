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
    
    // 实现逆置
 
    // 1. 记录起始下标位置
    // 2. 记录结束下标位置
    // 3. 其实下标与结束下标的元素互换
    // 4. 起始位置++   结束位置--
    // 5. 循环执行 1 操作，直到起始位置>=结束位置


    int start = 0;//起始元素下标
    int end = sizeof(arr) / sizeof(arr[0]) -1; //末尾元素下标

    while(start < end){
         //实现互换
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        //下标更新
        start++;
        end--;
        
    }  
        //3. 打印你之后的数组
        cout << "数组元素逆置后：" << endl;
        for(int i =0; i< 5; i++){
            cout << arr[i];
        }
        cout << endl;

    return 0;
}