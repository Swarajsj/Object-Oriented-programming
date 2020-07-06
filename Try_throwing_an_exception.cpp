#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout << "\nEnter values of a and b:";
    cin >> a >> b;
    int x = a - b;
    try
    {
        if (x != 0)
        {
            cout << "Result(a/x)= " << a / x << "\n";
        }
        else
        {
            throw x;
        }
    }
    catch (int y)
    {
        cout << "\n Exception caught:DIVIDE BY ZERO\n"
             << y;
    }
    return 0;
}
