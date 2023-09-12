// 三、36.根据文件a.txt中保存了空格分隔的8个整数，计算它们的最大值。
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int a[8];
    int i = 0;
    cout<<"从文件中读取8个整数......"<<endl;

    freopen("a.txt","r",stdin); //*** freopen重定向标准输入输出函数, 这里用 r-只读 方式打开 a.txt文件 使用stdin标准输入流方式。stdout 标准输出流，stderr 是标准错误流。

    for(i=0;i<8;i++)
        cin>>a[i]; //*** cin：标准输入流、cout：标准输出流、cerr：非缓冲标准错误、clog：缓冲标准错误流

    int max = a[0];
    int index = 0;

    for(i=0;i<8;i++){
        if(max < a[i]){
            max = a[i];
            index = i;
        }
    }
    cout<<"最大值为："<<max<<"序号为："<<index<<endl;
}