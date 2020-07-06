#include <iostream>
using namespace std;
class counter
{
    int id;

public:
    counter(int i)
    {
        id = i;
        cout << "\n Constructor of object with id :" << id;
    }
    ~counter()
    {
        cout << "\n destructor of object with id :" << id;
    }
    void show()
    {
        cout << id;
    }
};
int main()
{
    counter c1(1);
    counter c2(2);
    counter c3(3);
    cout << "\n End of main";
    c1.show();
}