#include<iostream>

using namespace std;

int main(){

    //嵌套循环

    for(int i=0; i<10;i++){
        cout << "*";
        for(int x=0;x<10;x++){
            cout << "*";
        }
        cout << endl;
    }
}