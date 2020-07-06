#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "Base class constructor called \n";
    }
    ~base()
    {
        cout << "Base class destructor called \n";
    }
};
class base1
{
public:
    base1()
    {
        cout << "Base1 class constructor called \n";
    }
    ~base1()
    {
        cout << "Base1 class destructor called \n";
    }
};
class derived : base, base1
{
public:
    derived()
    {
        cout << "Derived class constructor called \n";
    }
    ~derived()
    {
        cout << "Derived class destructor called \n";
    }
};
int main()
{
    derived d;

    return 0;
}