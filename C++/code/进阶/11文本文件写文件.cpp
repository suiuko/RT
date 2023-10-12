#include<iostream>
using namespace std;
#include<fstream>

void test01(){
    ofstream ofs; //创建流对象
    ofs.open("test.txt",ios::out); //指定打开方式

    ofs << "woshinibaba" << endl; //写内容

    ofs.close();

}

int main(){
    test01();
}