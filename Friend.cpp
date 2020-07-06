#include <iostream>
using namespace std;
class B;
class A
{
    int a;

public:
    void f1()
    {
        cout << "enter the value of a";
        cin >> a;
    }
    friend int add(A objectA, B objectB);
};
class B
{
private:
    int b;

public:
    void f2()
    {
        cout << "enter the value of b";
        cin >> b;
    }
    friend int add(A objectA, B objectB);
};
int add(A objectA, B objectB)
{
    cout << "Sum is :" << objectA.a + objectB.b << endl;
}
int main()
{
    A objectA;
    B objectB;
    objectA.f1();
    objectB.f2();
    add(objectA, objectB);
    return 0;
}