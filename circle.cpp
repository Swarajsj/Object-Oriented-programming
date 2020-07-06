#include <iostream>
using namespace std;
class circle
{
    int radius;

public:
    float a;
    float b;
    void area()
    {
        cout << "Enter the radius of the circle";
        cin >> radius;
        a = radius * radius * 3.14;
        cout << "\n Area is " << a;
    }
    void circumference()
    {
        cout << " \n Enter the radius of the circle";
        cin >> radius;
        b = 2 * 3.14 * radius;
        cout << "\n Circumfernce is " << b;
    }
} c;

int main()
{
    c.area();
    c.circumference();
}
