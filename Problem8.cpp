#include <iostream>
using namespace std;
class Employee
{
    string name;
    int id;
    int phnno;
    float salary;

public:
    void getdata()
    {
        cin >> name >> id >> phnno >> salary;
    }
    void display()
    {
        cout << "Name :" << name << "\n ID :" << id << "\nPhone no. :" << phnno << "\nSalary :" << salary;
    }
};
int main()
{
    int i;
    Employee *em;
    em = new Employee[5];

    for (i = 0; i < 5; i++)
    {
        cout << "Enter the details of Employees:" << i + 1 << endl;
        em[i].getdata();
    }
    for (i = 0; i < 5; i++)
    {
        em[i].display();
    }
}
