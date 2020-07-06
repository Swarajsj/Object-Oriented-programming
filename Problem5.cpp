#include <iostream>
using namespace std;
class DB;
class DM
{
    int a, b;

public:
    void setvalue()
    {
        cout << "Enter the length of distance in m or cm : ";
        cin >> a >> b;
    }
    friend float setmean(DM s, DB n);
};
class DB
{
    int f, i;

public:
    void set()
    {
        cout << "Enter thr length of distance in ft or inches :";
        cin >> f >> i;
    }
    friend float setmean(DM s, DB n);
};

float setmean(DM s, DB n)
{
    return float(s.a + 0.01 * s.b) + (0.03048 * n.f + 0.0254 * n.i);
}
int main()
{
    DM x;
    DB y;
    x.setvalue();
    y.set();
    cout << "Total Distance in Meters is :" << setmean(x, y) << endl;
}