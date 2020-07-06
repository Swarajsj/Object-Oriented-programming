#include <iostream>
using namespace std;
int main()
{
    int factorial(int);
    int x, fact;
    cout << "Enter a number :";
    cin >> x;
    fact = factorial(x);
    cout << "\n Factorial of " << x << "::" << fact;
    return 0;
}
int factorial(int a)
{
    int b;
    if (a == 1)
    {
        return (1);
    }
    else
    {
        b = a * factorial(a - 1);
    }
    return (b);
}