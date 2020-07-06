#include <iostream>
using namespace std;
class c1
{
    const char *p;

public:
    c1()
    {
        p = new char[8];
        p = "Dynamic";
    }
    void display()
    {
        cout << p << endl;
    }
};
int main()
{
    c1 *ptr = new c1();
    ptr->display();
}