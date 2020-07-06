#include <iostream>
using namespace std;
template <class T>
T min1(T a, T b)
{
    return (a < b ? a : b);
}
int main()
{
    int x, y;
    float p, q;
    cout << "enter integer value";
    cin >> x >> y;
    cout << "enter float value";
    cin >> p >> q;
    cout << "\nmin of integer" << min1<int>(x, y);
    cout << "\nmin of floating value" << min1<float>(p, q);
    return 0;
}
