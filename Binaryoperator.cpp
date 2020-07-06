#include <iostream>
using namespace std;
class demo
{
    int x, y;

public:
    demo()
    {
        x = 0;
        y = 0;
    }
    demo(int a, int b)
    {
        x = a;
        y = b;
    }
    void show()
    {
        cout << x << " " << y;
    }
    demo operator+(demo o)
    {
        demo temp;
        temp.x = x + o.x;
        temp.y = y + o.y;
        return temp;
    }
};
int main()
{
    demo d1(10, 20), d2(1, 2), d3;
    d3 = d1 + d2; // d3 = d1.operator+(d2);
    d3.show();
}