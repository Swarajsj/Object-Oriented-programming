#include <iostream>
using namespace std;
class student
{
public:
    char name[20];
    static int reg;
    char course[20];

    void f1()
    {
        cout << "Enter name of the student=";
        cin >> name;
        cout << "\nEnter your course =";
        cin >> course;
    }
    void f2()

    {
        cout << "Name is :" << name << "\nRegistation No. :" << reg << "\nCourse :" << course;
        reg++;
    }
} s1[10];
int student ::reg;
int main()
{
    int i;
    s1[4].reg = 11902728;
    for (i = 0; i <= 4; i++)
    {
        s1[i].f1();
    }
}