#include<iostream>

using namespace std;

int main(){
    //乘法口诀表
    // 列数 * 行数 = 计算结果
    //列数要小于等于行数
        for(int i=1;i<=9;i++){
            // cout << i << endl; //打印行数

            for(int j=1;j<=i;j++){
                cout << j << "*" << i << "=" << i*j << "  ";
            }
            cout << endl;
        }

}
