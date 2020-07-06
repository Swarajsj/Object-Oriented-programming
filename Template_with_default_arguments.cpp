#include <iostream>
using namespace std;

template <class T = int, class T1 = float, class T2 = char>
class abc
{
    T id;
    T1 fees;
    T2 grade;

public:
    abc(T x, T1 y, T2 z)
    {
        id = x;
        fees = y;
        grade = z;
    }
    void display()
    {
        cout << "\n ID=" << id << " FEES=" << fees << " GRADE=" << grade;
    }
};
int main()
{
    abc<> obj(10.4, 230.90, 'j');
    cout << "\nData is:";
    obj.display();
}
