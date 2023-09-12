//五、程序设计题
/*
    参考Point（点）类和主函数的信息，逐步完成派生类Circle（圆）的设计，要求：
    （1）增加数据成员r（半径）；
    （2）设计Circle类中构造、析构、输出、设置数据成员和获取数据成员的函数；
    （3）设计计算圆面积的函数。
*/
#include<iostream>
using namespace std;
const double P1 = 3.1415926;
class Point{
    protected:
        double x,y; //数据成员x、y(坐标点)
    public:
        Point(double xx=0,double yy=0):x(xx),y(yy){}
        ~Point(){
            cout<<"执行Point析构函数"<<endl;
        }
        void Input(){
            cout<<"Input x:";cin>>x;
            cout<<"Input y:";cin>>y;
        }
        void Show();
        void SetPoint(double,double);
        double GetX(){
            return x;
        }
        double GetY(){
            return y;
        }
};
void Point::Show(){
    cout<<"(x,y)=("<<x<<y<<","<<y<<")"<<endl;
}
void Point::SetPoint(double xx,double yy){
    x=xx;
    y=yy;
}

class Circle:public Point{
    protected:
        double r;

    public:
        Circle(double xx=0,double yy=0,double rr=0):Point(xx,yy),r(rr){}
        ~Circle(){
            cout<<"执行Circle析构函数"<<endl;
        }
        void Input(){
            Point::Input();
            cout<<"Input r:";cin>>r;
        };
        void Show();
        void SetCirele(double xx,double yy,double rr);
        double GetR(){
            return r;
        }
        double Area(){
            return P1*r*r;
        }
};

void Circle::Show(){
    Point::Show();
    cout<<"r="<<r<<endl;
}
void Circle::SetCirele(double xx,double yy,double rr){
    SetPoint(xx,yy);
    r = rr;
}

int main(){
    Point p1;
    cout<<"请输入点的信息:"<<endl;
    p1.Input();
    p1.Show();
    Circle c1;
    cout<<"请输入圆的信息："<<endl;
    c1.Input();
    c1.Show();
    cout<<"c1的面积是："<<c1.Area()<<endl;
    return 0;
}
