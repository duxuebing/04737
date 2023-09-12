//三、40.D1定义一个派生类D2，在D2中重写函数pvf(),创建一个D2类的对象调用函数f()、vf()、pfv()
#include<iostream>
using namespace std;

class B1{
    public:
        virtual void vf(){
            cout<<"B1::vf()"<<endl;
        }
        void f(){
            cout<<"D1::f()"<<endl;
        }
        virtual void pvf() = 0;
};

class D1:public B1{
    public:
        virtual void vf(){
            cout<<"D1::vf()"<<endl;
        }
        void f(){
            cout<<"D1::f()"<<endl;
        }
};

class D2:public D1{  //***
    public:
        virtual void pvf(){
            cout<<"D2::pvf()"<<endl;
        }
};

int main(){
    D2 d2;
    d2.f();
    d2.vf(); //***
    d2.pvf();
    return 0;
}