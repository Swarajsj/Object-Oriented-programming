#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "Base class constructor invoked \n";
    }
    virtual ~base()
    {
        cout << "Base class destructor invoked \n";
    }
};
class child : public base
{
public:
    child()
    {
        cout << "Derived class constructor invoked \n";
    }
    virtual ~child()
    {
        cout << "Derived class destructor invoked \n";
    }
};
int main()
{
    base *ptr = new child;
    delete ptr;
}
