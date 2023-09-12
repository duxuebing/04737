// 四、程序分析题
#include<iostream>
using namespace std;

int global = 1;
class Demo{     //定义Demo类
    private:    //私有类型
        int i;
    
    public:     //公有类型
        Demo(){     //声明无参构造函数 （可以在函数内部直接给成员变量赋值）（构造函数与类名相同）
            i = global++;
            cout <<i<<"constructor"<<endl;
        }

        ~Demo(){        //析构函数，析构函数的作用是在对象释放前完成一些清理工作（析构函数与类名相同，前面加 “～” 符）
            cout <<i<<"destructor"<<endl;
        }

        int getValue(){     //声明返回i值的成员函数
            return i;
        }
};

// 构造函数和析构函数的共同点：1）都与类名相同（析构函数前面加“～”。 2）每个类中都有一个构造函数和析构函数，如果没有则默认一个。

int main(){
    Demo *pd = new Demo[2];  //使用 new 为 C++ 类对象分配内存时，将在分配内存后调用对象的构造函数。
    cout <<"pd[0]="<<pd[0].getValue()<<",pd[1]="<<pd[1].getValue()<<endl;
    delete[] pd;  //delete[] 运算符删除由 new 运算符分配的数组
    return 0;
}

/*
1constructor
2constructor
pd[0]=1,pd[1]=2
2destructor
1destructor
*/
