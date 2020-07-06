#include <iostream>
using namespace std;
class Demo
{
public:
    int a;
    float b;
    void display(int);
    void display(float);
    void display(int, float);
} d1;

void Demo::display(int var)
{
    cout << "Integer number :" << var << endl;
}
void Demo::display(float var)
{
    cout << "Float number :" << var << endl;
}
void Demo::display(int var1, float var2)
{
    cout << "Integer number :" << var1;
    cout << "\nAnd float number :" << var2;
}

int main()
{
    int a = 5;
    float b = 5.5;
    d1.display(a);
    d1.display(b);
    d1.display(a, b);
}