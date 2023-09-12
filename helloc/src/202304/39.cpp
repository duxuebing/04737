//三、39.为类Position重载运算符“+”，从而实现Position对象的加法操作。

class Position{
    int x,y;

    public:
        Position(int px, int py){
            x = px;
            y = py;
        }
        Position operator+(const Position &p){
            return Position(x+p.x,y+p.y);
        }
};