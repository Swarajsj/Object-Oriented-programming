#include <iostream>
using namespace std;
class circle
{
private:
    int radius;
    float a;
    float b;

public:
    void area();
    void circumference();
} c;

void circle ::area()
{
    cout << "Enter radius \n";
    cin >> radius;
    a = radius * radius * 3.14;
    cout << "\nArea" << a;
}
void circle ::circumference()
{
    cout << "\n Enter radius";
    cin >> radius;
    b = 2 * 3.14 * radius;
    cout << "\n Circumference" << b;
}
int main()
{

    c.area();
    c.circumference();
}
