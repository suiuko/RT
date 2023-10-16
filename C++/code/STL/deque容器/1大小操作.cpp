#include<iostream>
#include<deque>

using namespace std;

//deque 容器大小操作
void printDeuqe(const deque<int>&d){
    for(deque<int>::const_iterator it =d.begin(); it!=d.end();it++){
        cout << * it << " ";
    }
    cout << endl;
}


void test01(){
    deque<int>d1;
    for(int i=0;i<10;i++){
        d1.push_back(i);
    }
    printDeuqe(d1);

    if(d1.empty()){
        cout << "d1为空" << endl;
    }
    else{
        cout << "d1不为空"<< endl;
        cout << "大小" << d1.size() << endl;
        //deque 容器没有容量概念
    }

    //重新指定大小
    // d1.resize(15);
    d1.resize(16,1);
    printDeuqe(d1);


}
int main(){
    test01();

}