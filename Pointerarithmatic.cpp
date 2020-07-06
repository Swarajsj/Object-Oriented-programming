#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20, *p, *q;
    p = &a;
    q = &b;
    cout << endl
         << a << endl;
    cout << endl
         << &a << endl;
    cout << endl
         << p << endl;
    cout << endl
         << *p << endl;
    cout << endl
         << p++ << endl;
    cout << endl
         << b << endl;
}