// 四、程序分析题
#include<iostream>
using namespace std;

class Person{   //定义Person类
    public:
        void study(){       //声明表示学生的成员函数 study()
            cout<<"Person::study"<<endl;
        }
        virtual void rest(){    //声明休息虚函数 rest()
            cout<<"Person::rest"<<endl;
        }
};

class Student:public Person{     //定义学生类Student，公有继承Person类
    public:
        virtual void study(){   //声明学生虚函数 study()
            cout<<"Student::study"<<endl;
        }
        void rest(){    //声明表示休息的成员函数 rest()
            cout<<"Student::rest"<<endl;
        }
};

int main(){
    Student s;
    Person *pp = &s;  //指针运算符：& 取地址运算符，返回操作数的内存地址。* 间接寻址运算符(它是&运算符的补充)，返回操作数指定地址的变量的值。
    Student *ps = &s;
    pp->study();      //采用指针方式访问 study()
    pp->rest();
    ps->study();
    ps->rest();
    return 0;
}

