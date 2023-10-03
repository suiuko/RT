#include<iostream>

using namespace std;

//函数定义
int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int main(){
    int num1,num2;
    cin >> num1 >> num2;
    int sum = 0;
    sum = add(num1,num2);
    cout << sum << endl;
    system("pause");
    return 0;

}