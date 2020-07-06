#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "\nEnter the number:";
    cin >> a;
    try
    {
        if (a % 2 == 0)
        {
            cout << "\nSquare of the number is: " << a * a;
        }
        else
        {
            throw "Odd number";
        }
    }
    catch (const char *message)
    {
        cout << "\n Caught the exception with message: " << message;
    }
    return 0;
}
