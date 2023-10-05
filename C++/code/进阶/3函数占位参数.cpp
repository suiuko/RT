#include<iostream>

using namespace std;
void func(int a, int) { //目前，占位参数用不到，后面会用到。占位参数也可以有默认参数
	cout << "this is func" << endl;
}
int main(){
    func(10,10); //占位参数必须填补

}