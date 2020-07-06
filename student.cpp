#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age;
    int roll;

public:
    void getdata()
    {
        cout << "Enter name age and roll of a student ";
        cin >> name >> age >> roll;
    }
    void showdata();
} s1;

void student ::showdata()
{
    cout << "\n Name : " << name << "\n Age :" << age << "\n Roll :" << roll;
}

int main()
{

    s1.getdata();
    s1.showdata();
}