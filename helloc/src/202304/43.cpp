// 四、程序分析题
//43.
#include<iostream>
using namespace std;

class TriCoor{
    public:
        TriCoor(int mx=0, int my=0, int mz=0){
            x = mx; y = my; z = mz;
        }
        void show(){
            cout<<x<<","<<y<<","<<z<<"\n";
        }
    
        TriCoor operator -- (){
            x--; y--; z--;
            return *this;
        }

        TriCoor operator = (TriCoor t){
            x = t.x; y = t.y; z = t.z;
            return *this;
        }

        void assign(int mx, int my, int mz){
            x = mx; y = my; z=mz;
        }

    private:
        int x,y,z;
};

int main(){
    TriCoor a(9,8,7),b,c;
    a.show();b.show();c.show();
    for(int i = 0; i < 5; i++)
        --a;
    a.show();
    b.assign(3,3,3);
    b.show();
    c = b = a;
    c.show();
}
    