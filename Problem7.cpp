#include <iostream>
using namespace std;
class me
{
    char name[20];
    int age;
    float cgpa;

public:
    void f1()
    {
        cout << "Enter your Name Age & Cgpa \n ";
        cin >> name >> age >> cgpa;
    }

    void f2()
    {
        cout << "\n Name :" << name << "\n Age :" << age << "\n Cgpa :" << cgpa;
    }
};
int main()
{
    me m;
    me *p;
    p = &m;
    p->f1();5
    p->f2();
}