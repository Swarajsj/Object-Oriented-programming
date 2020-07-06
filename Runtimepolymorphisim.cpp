#include <iostream>
using namespace std;
class base
{
    int a;

public:
    virtual void display()
    {
        a = 100;
        cout << " base class a = " << a << endl;
    }
};
class derived : public base
{
    int b;

public:
    void display() //function overriding
    {
        b = 500;
        cout << " derived class b = " << b;
    }

    void f1()
    {
        b = 500;
        cout << " derived class b = " << b;
    }
};
int main()
{
    base *bp, obj;
    bp = &obj;
    bp->display();

    derived d;
    bp = &d; //run time binding
    bp->display();
}