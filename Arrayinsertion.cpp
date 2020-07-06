#include <iostream>
using namespace std;
int main()
{
    int a[50], n, pos, i, value;
    cout << "enter the size of array \n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "\n enter position";
    cin >> pos;
    cout << "\n enter value";
    cin >> value;
    for (i = n - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = value;
    cout << " \n after insertion \n";
    for (i = 0; i <= n; i++)
    {
        cout << a[i];
    }
}
