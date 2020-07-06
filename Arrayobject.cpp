#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int id;
    int roll;
    void f1()
    {
        cout << "Enter the Name \t id \t roll no. \n ";
        cin >> name;
        cin >> id;
        cin >> roll;
    }
    void f2()
    {
        cout << "\n Name :" << name;
        cout << "\t Id :" << id;
        cout << "\t Roll NO. :" << roll;
    }
};

int main()
{
    student s[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        s[i].f1();
    }

    for (i = 0; i < 3; i++)
    {
        s[i].f2();
    }
}