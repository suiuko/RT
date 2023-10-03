#include<iostream>

using namespace std;

int main(){

    // 二维数组

    //1. 数据类型 数组名[行数][列数];
    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;
    // cout << arr[0][0] <<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << endl;
        }
    }


    //2.数据类型 数组名 [行数][列数] = {{数据 1, 数据 2},{数据 3,数据 4}};
    int arr2[2][3]={
        {1,2,3},
        {4,5,6}
    };
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}