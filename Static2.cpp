#include <iostream>
using namespace std;
class Demo
{
private:
    static int X, Y;

public:
    static void Print()
    {
        cout << "\n Values of X:" << X;
        cout << "\t \t Values of Y:" << Y;
    }
};
int Demo ::X = 10;
int Demo ::Y = 20;
int main()
{
    Demo d;
    cout << "Printing through object name :" << endl;
    d.Print();
    cout << "\n Printing through class name :" << endl;
    Demo ::Print();
    return 0;
}
