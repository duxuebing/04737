//三、38.友元函数访问对象，输出结果：2023/4/1 2023/10/1
#include<iostream>
using namespace std;

class Date{
    public:
        Date(int y, int m, int d){
            year = y;
            month = m;
            day = d;
        }
        friend void Print(Date &); //***

    private:
        int year,month,day;
};

void Print(Date &d){
    cout<<d.year<<"/"<<d.month<<"/"<<d.day<<endl;
}

int main(){
    Date d1(2023,4,1),d2(2023,10,1); //***
    Print(d1);
    Print(d2);
    return 0;
}