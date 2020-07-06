#include <iostream>
using namespace std;

void table(int n, int m)
{
    if (m <= 10)
    {
        cout << n << "X" << m << "=" << n * m << endl;
    }
    table(n, m + 1);
}

int main()
{
    int a, b = 1;
    cout << "Enter the number :";
    cin >> a;
    table(a, b);
    return 0;
}