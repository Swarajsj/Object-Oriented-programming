#include <iostream>
using namespace std;
class A
{
    int x, y;

public:
    A(int r, int s)
    {
        x = r;
        y = s;
        cout << "\n Calling base class constructor :" << x << " " << y;
    }
    ~A()
    {
        cout << "Calling bass class destructor";
    }
};
class B : public A
{
    int l, m;

public:
    B(int p, int q, int r, int s) : A(r, s)
    {
        l = p;
        m = q;
        cout << "\n Calling derived class B constructor :" << l << " " << m;
    }
    ~B()
    {
        cout << "\n Calling derived class B destructor :";
    }
};
class C : public B
{
    int n, m;

public:
    C(int u, int v, int p, int q, int r, int s) : B(p, q, r, s)
    {
        n = u;
        m = v;
        cout << "\n Calling derived class C constructor with value :" << n << " " << m;
    }
    ~C()
    {
        cout << "\n Calling derived class C destructor :";
    }
};
int main()
{
    C obj1(1, 2, 3, 4, 5, 6);
    return 0;
}