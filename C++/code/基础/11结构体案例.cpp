#include<iostream>
#include<string>
#include<ctime>
using namespace std;

//学生结构体
struct Student{
    string sName;
    int score;
};


//老师结构体定义
struct Teacher{
    //姓名
    string tName;
    //学生数组
    struct Student sArray[5];
};

//给老师和学生赋值的函数

void allocateSpace(struct Teacher tArray[] , int len){
    string nameSeed = "ABCDE";
    //给老师赋值
    for(int i=0;i < len;i++){
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];

        //给每名老师所带的学生赋值
        for(int j = 0 ;j < 5; j++){
            tArray[i].sArray[j].sName = "Student_";
            tArray[i].sArray[j].sName += nameSeed[j];

            int random = rand()%61+40; //0+40-60+40
            tArray[i].sArray[j].score = random;
        }
        
    }
}

//打印所有信息
void printInfo(struct Teacher tArray[],int len){
    for(int i=0;i<len;i++){
        cout<< "Teacher name:" << tArray[i].tName<<endl;
        for(int j=0;j<5;j++){
            cout<<"\tStudent name:" << tArray[i].sArray[j].sName
            << " Student score:" << tArray[i].sArray[j].score<<endl;
        }
    }
}

int main(){
    //随机数种子
    srand((unsigned int)time(NULL));

    //创建三名老师的数组
    struct Teacher tArray[3];
    
    
    //通过函数给三名老师赋值，并给老师带的学生信息赋值
    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray,len);
    // 打印所有老师所带的学生信息
    printInfo(tArray,len);

}