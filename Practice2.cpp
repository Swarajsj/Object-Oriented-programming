#include <iostream>
using namespace std;
class Student
{
private:
    int roll;

protected:
    char section[10];

public:
    void get_roll()
    {
        cout << "Enter Roll no. :\n";
        cin >> roll;
    }
    void show_roll()
    {
        cout << "Roll no.:" << roll;
    }
};
class result : public Student
{
private:
    float fees;

public:
    void get_data()
    {
        get_roll();
        cout << "\nEnter Fees :\n";
        cin >> fees;
        cout << "\n Enter Section :\n";
        cin >> section;
    }
    void show_data()
    {
        show_roll();
        cout << "\n Fees : " << fees;
        cout << "\n Section : " << section;
    }
};
int main()
{
    result r;
    r.get_data();
    r.show_data();
}