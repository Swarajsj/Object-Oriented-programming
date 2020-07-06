#include <iostream>
using namespace std;
class Base
{
public:
    void display()
    {
        cout << " In Base class" << endl;
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "In Derived class" << endl;
    }
};
int main()
{
    Base *base_pointer = new Derived;
    base_pointer->display();
    return 0;
}