#include <iostream>
using namespace std;
int main()
{
    void swap(int a, int b);
    int x = 10, y = 20;
    cout << "Before swapping X :" << x << "\t Y :" << y;
    swap(x, y);
    cout << "\nAfter swapping X :" << x << "\t Y :" << y;
}

void swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
    cout << "\nIn swapping function A :" << a << "\t B :" << b;
}