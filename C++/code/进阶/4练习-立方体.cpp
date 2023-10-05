#include<iostream>

using namespace std;

//立方体类设计
//1.创建立方体类
//2.设计属性
//3.设计行为，获取立方体面积和体积
//4.分别利用全局函数和成员函数，判断两个立方体是否相等

class Cube{

    public:
    //设置长
    void setL(int l){
        m_L = l;
    }
    //获取长
    int getL(){
        return m_L;
    }

    //设置宽
    void setW(int w){
        m_W = w;
    }
    //获取宽
    int getW(){
        return m_W;
    }

    //设置高
    void setH(int h){
        m_H = h;
    }
    //获取高
    int getH(){
        return m_H;
    }

    //获取面积
    int calculateS(){
        return 2*(m_L*m_W+m_W*m_H+m_L*m_H);
    }
    //获取立方体的体积
    int calculateV(){
        return m_L*m_H*m_W;
    }

    //利用成员函数来判断两个立方体是否相等
    bool isSameByClass(Cube &c2){
        if(m_H == c2.getH() && m_L == c2.getL() && m_W == c2.getW()){
            return true;
        }else{
            return false;
        }
    }
    private:
    int m_L; //长
    int m_W; //宽
    int m_H; //高
};

//利用全局函数来判断 两个立方体是否相等

bool isSame(Cube &c1, Cube &c2){
    if(c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    //创建对象
    Cube c1;
    c1.setH(10);
    c1.setL(10);
    c1.setW(10);

    cout << "c1面积:" << c1.calculateS() << endl;
    cout << "C1体积:" << c1.calculateV() << endl;

    Cube c2;
    c2.setH(10);
    c2.setL(10);
    c2.setW(11);

    bool ret = isSame(c1,c2); //使用全局函数来判断
    if(ret){
        cout << "全局函数判断，相等" << endl;
    }
    else{
        cout << "NO!unlikeness!" << endl;
    }

    bool ret1 = c1.isSameByClass(c2); //使用成员函数判断
    if (ret1)
    {
        cout << "成员函数判断： c1和c2相等" << endl;
    }else{
        cout << "成员函数判断，不相等"<<endl;
    }
    
}