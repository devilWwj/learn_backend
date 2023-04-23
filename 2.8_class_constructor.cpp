#include<iostream>
using namespace std;
#define pi 3.1415
class Circle{
    public:
        Circle(int r); // 形参
        double Area();
    private:
        int radius;
};

Circle::Circle(int r) {
    radius = r;
}

double Circle::Area() {
    return pi * radius * radius;
}

int main(int argc, char const *argv[])
{
    Circle cir1(10);
    cout<<"cir1's area:"<<cir1.Area()<<endl;
    Circle cir2(1);
    cout<<"cir2's area:"<<cir2.Area()<<endl;

    return 0;
}
