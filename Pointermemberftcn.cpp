#include <iostream>
using namespace std;
class test
{
public:
    void show()

    {
        cout << "\n Helllllooooo Worldddd !!!!!!!";
    }
};

int main()
{
    test t;
    void (test::*fp)();
    fp = &test::show;
    (t.*fp)();
}