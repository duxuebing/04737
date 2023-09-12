// 四、程序分析题
//41.
#include<iostream>
using namespace std;

class Count{
    public:
        static int num;  //公有静态成员变量，供所有对象“共享”
        static int stat(int a){
            return num = a + num;
        }
};

int Count::num = 2;  //必须在类体外（使用类名限定）初始化静态成员变量
int main(){
    for(int i=0;i<3;i++)
        cout<<"第"<<i+1<<"次"<<Count::stat(5)<<endl;
    return 0;
}

