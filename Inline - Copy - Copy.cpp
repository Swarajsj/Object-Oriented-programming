#include <iostream>
using namespace std;

inline int max(int x, int y)
{
    return (x > y ? x : y);
}
int main()
{
    int m = 10, n = 25;
    int a, b;
    a = max(6, 8);
    cout << "Greatest is :" << a;
    b = max(m, n);
    cout << "Greatest of m :" << m << "\n and n:" << n << "\n is" << b;
    return 0;
}