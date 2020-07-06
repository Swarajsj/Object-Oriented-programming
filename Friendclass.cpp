#include <iostream>
using namespace std;
class B;
class A
{
private:
    int a;

public:
    void f1()
    {
        a = 10;
    }
    friend class B;
};
class B
{
private:
    int b;

public:
    void showA(A &x)
    {
        cout << " A :: a =" << x.a;
    }
};
int main()
{
    A a;
    B b;
    a.f1();
    b.showA(a);
    return 0;
}