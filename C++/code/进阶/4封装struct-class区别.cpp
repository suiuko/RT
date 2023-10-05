#include<iostream>

using namespace std;

//class 和 struct 的区别

class C1{
    int m_A; //默认是私有权限
};

struct C2{
    int m_A; //默认是公共权限
};

int main(){

    C1 c1;
    // c1.m_A =10; //错误，访问权限为私有

    C2 c2;
    c2.m_A = 10; //正确，因为访问权限为公共
    
}