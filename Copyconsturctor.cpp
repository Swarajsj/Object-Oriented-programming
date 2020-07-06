#include <iostream>
using namespace std;
class code
{
    int id;

public:
    code() {}   //default con
    code(int a) // parameterized con
    {
        id = a;
    }
    code(code &x) //copy con
    {
        id = x.id;
    }
    void display()
    {
        cout << id << endl;
    }
};
int main()
{
    code A(100);
    code B(A);
    A.display();
    B.display();
}