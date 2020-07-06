#include <iostream>
using namespace std;
class Box
{
private:
    double length;
    double breath;
    double height;

public:
    void f1(double l = 2.0, double b = 2.0, double h = 2.0)
    {
        length = l;
        breath = b;
        height = h;
    }
    double volume()
    {
        return length * breath * height;
    }
};

int main()
{
    Box box1, box2;
    box1.f1(3.3, 1.2, 1.5);
    Box Box2;
    box2.f1(8.5, 6.0, 2.0);
    Box *ptrBox;
    ptrBox = &box1;
    cout << "Volume of Box1 :" << ptrBox->volume() << endl;
    ptrBox = &box2;
    cout << "Volume of Box2 :" << ptrBox->volume() << endl;
    return 0;
}