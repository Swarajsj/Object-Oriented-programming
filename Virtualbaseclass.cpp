#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void get_no(int a)
    {
        roll_no = a;
    }
    void put_no()
    {
        cout << "\nroll no. :" << roll_no;
    }
};
class test : virtual public student
{
protected:
    float part1, part2;

public:
    void get_marks(float x, float y)
    {
        part1 = x;
        part2 = y;
    }
    void put_marks()
    {
        cout << "\nmarks obtained"
             << "\npart1" << part1 << "\npart2" << part2;
    }
};
class sports : public virtual student
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score = s;
    }

    void put_score()
    {
        cout << "\nsports wt:" << score;
    }
};
class result : public test, public sports
{
    float total;

public:
    void display();
};
void result::display()
{
    total = part1 + part2 + score;
    put_no();
    put_marks();
    put_score();
    cout << "\ntotal score: " << total;
}
int main()
{
    result student1;
    student1.get_no(100);
    student1.get_marks(50.5, 65.2);
    student1.get_score(10.5);
    student1.display();
    return 0;
}
