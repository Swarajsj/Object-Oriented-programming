#include <iostream>
using namespace std;
class student
{
private:
    int roll;
    int marks;

public:
    student()
    {
        roll = 0, marks = 0;
    }
    student(int r, int m = 0)
    {
        roll = r;
        marks = m;
    }
    student(student &ob)
    {
        roll = ob.roll;
        marks = ob.marks;
    }
    void show()
    {
        cout << "\n Roll no. is :" << roll;
        cout << "\t Marks are :" << marks;
    }
};
int main()
{
    student s1;
    s1.show();
    student s2(3);
    s2.show();
    student s3(5, 98);
    s3.show();
    cout << "\n Copy Constructor :";
    student s4(s3);
    s4.show();
}