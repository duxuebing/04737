// 四、程序分析题
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a = 234;
    cout.setf(ios::dec,ios::basefield);  //cout.setf() 通过设置格式标志来控制输出形式。dec 用十进制格式显示数值
    cout<<a<<endl;
    cout<<setfill('*')<<setw(8)<<a<<"ok"<<endl; //setw() 用来控制输出间隔。 setfill() 设置std::setw 将填充成什么样的字符。

    double b=1.234567;
    cout<<b<<endl;
    cout<<setw(8)<<setprecision(3)<<b<<endl;  //setprecision() 操作符用来控制显示符点数值的有效数的数量。

    char c = 'a';
    cout<<"cout.put(c):"<<endl;
    cout.put(c+2);  //put() 函数将字符插入输出流对象，通过输出流对象将字符输出到指定位置。

    char ch = '5';
    cout<<"\n"<<endl;
    cout.put(ch);
}

// 这里的第二和第三中输出不理解

