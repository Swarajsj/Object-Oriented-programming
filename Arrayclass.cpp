#include <iostream>
using namespace std;
class faculty
{
public:
    char name[20];
    int id;
    char subject[20];
    void f1()
    {
        cout << "Enter the Name \t id \t subject taught \n ";
        cin >> name;
        cin >> id;
        cin >> subject;
    }
    void f2()
    {
        cout << "\n Name :" << name;
        cout << "\t Id :" << id;
        cout << "\t Subject taught :" << subject;
    }
};

int main()
{
    faculty f[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        f[i].f1();
    }

    for (i = 0; i < 3; i++)
    {
        f[i].f2();
    }
}