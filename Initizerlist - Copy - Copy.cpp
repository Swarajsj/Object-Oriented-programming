#include <iostream>
using namespace std;
class rectangle
{
    int length, breath;

public:
    rectangle(int a, int b) : length(a), breath(b) {}
    void show()
    {
        cout << "Length and Breath :" << length << "\t" << breath;
    }
};
int main()
{
    rectangle r(10, 20);
    r.show();
}