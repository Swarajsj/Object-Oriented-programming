#include <iostream>
using namespace std;
class circle
{
    int radius;

public:
    float a;
    float b;
    void area(int r)
    {
        radius = r;
        a = radius * radius * 3.14;
        cout << "\n Area is " << a;
    }
    void circumference(int r)
    {
        radius = r;
        b = 2 * 3.14 * radius;
        cout << "\n Circumfernce is " << b;
    }
} c;

int main()
{
    c.area(5);
    c.circumference(7);
}
