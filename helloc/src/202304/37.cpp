// 三、37.在程序的下划线处填写上正确的语句，使其输出结果为：x=2,y=3
#include<iostream>
using namespace std;

class Sample{
    private:
        int x,y;
    
    public:
        Sample(int a,int b);
        void display(){cout<<"x="<<x<<",y="<<y<<endl;}
};

Sample::Sample(int a, int b){ //***
    x = a;
    y = b;
}

int main(){
    Sample s(2,3);  //***
    Sample *p = &s; //指针运算符：& 取地址运算符，返回操作数的内存地址。* 间接寻址运算符(它是&运算符的补充)，返回操作数指定地址的变量的值。
    p->display();
    return 0;
}