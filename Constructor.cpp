#include <iostream>
using namespace std;
class demo
{
    int x;

public:
    demo(int a)
    {
        x = a;
    }
    void f1()
    {
        cout << x << endl;
    }
};
int main()
{
    demo d1(100), d2(200), d3(300);
    d1.f1();
    d2.f1();
    d3.f1();
}