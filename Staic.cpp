#include <iostream>
using namespace std;
class Box
{
public:
    static int count;
    void f1()
    {
        count++;
        cout << "\n Static variable is :" << Box::count;
    }
    void f2()
    {
        c++;
        cout << "\n Nonstatic variable is :" << c << endl;
    }

    int c = 1;
};
int Box::count = 1;
int main()
{
    Box b1, b2, b3, b4;
    b1.f1();
    b1.f2();
    b2.f1();
    b2.f2();
    b3.f1();
    b3.f2();
    b4.f1();
    b4.f2();
    return 0;
}