#include<iostream>

using namespace std;
//设置一个学生嘞，属性有姓名和学号
// 可以给姓名和学号赋值，可以显示学生的姓名和学号

//设计学生类
class Student{
    public://公共权限

    //属性
    string m_Name; //姓名
    int m_Id; //学号

    //行为
    //显示姓名和学号
    void showStudent(){
        cout << "name: " << m_Name << "Id: " << m_Id << endl;
    }

    //给姓名赋值
    void setName(string name){
        m_Name = name;
    }
};

int main(){

    //创建一个具体学生，实例化对象
    Student s1;
    //赋值操作
    s1.m_Name = "zhangsan";
    s1.m_Id = 1;

    //显示学生信息
    s1.showStudent();

    Student s2;
    s2.setName("lisi");
    s2.m_Id = 2;
    s2.showStudent();
}