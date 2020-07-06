#include <iostream>
using namespace std;
class demo
{
    int x;

public:
    void show(int x)
    {
        this->x = x;
        cout << "\n"
             << x;

        cout << "\nAddress of current object " << this << endl;
    }
};
int main()
{
    demo d1, d2, *ptr;
    ptr = &d1;
    cout << "\n Address of d1 object" << ptr;
    d1.show(10);
    d2.show(80);
}