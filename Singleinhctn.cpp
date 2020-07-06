#include <iostream>
using namespace std;
class base
{
public:
    int a, b;
    void getdata()
    {
        cout << "Enter the value of A and B ";
        cin >> a >> b;
    }
};
class derieved : public base
{
public:
    int c;
    void sum()
    {
        c = a + b;
        cout << "Sum of the two umbers are " << c;
    }
};
int main()
{
    derieved d;
    d.getdata();
    d.sum();
    return 0;
}
