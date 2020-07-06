#include <iostream>
using namespace std;
class Number
{
    int x;

public:
    Number(int n) //constructor
    {
        x = n;
    }
    void operator++(int)
    {
        cout << "\n Postfix Increment :";
        cout << x++;
    }
    friend void operator--(Number obj1, int);
};
void operator--(Number obj1, int)
{
    cout << "\n Postfix Decrement :";
    cout << obj1.x--;
}
int main()
{
    Number N1(10);
    N1++; //n1.operator++(0);
    N1--; //operator--(N1,0);
    return 0;
}