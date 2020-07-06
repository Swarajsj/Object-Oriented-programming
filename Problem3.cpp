#include <iostream>
using namespace std;
class Calculator;
class Data
{
private:
    int a;
    int b;

public:
    void getvalues()
    {
        cout << "Enter the value for A :" << endl;
        cin >> a;
        cout << "Enter the value for B :" << endl;
        cin >> b;
    }
    friend class Calculator;
};
class Calculator
{
    int ch;

public:
    void calci(Data &d);
};
void Calculator ::calci(Data &d)
{
    cout << "Enter ur choice \n 1. for addition \n 2. for multiplication \n 3. for division \n ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Sum is :" << d.a + d.b;
        break;
    case 2:
        cout << "Multiplication is :" << d.a * d.b;
        break;
    case 3:
        cout << "Division is :" << d.a / d.b;
        break;
    default:
        cout << "Invalid";
    }
}
int main()
{
    Data d;
    Calculator c;
    d.getvalues();
    c.calci(d);
}