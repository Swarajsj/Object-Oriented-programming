#include <iostream>
using namespace std;
class sample
{
    int a;
    int b;

public:
    void setvalue()
    {
        cout << "Enter the value of a and b \n";
        cin >> a >> b;
    }
    friend float mean(sample s);
};
float mean(sample s)
{
    return float(s.a + s.b) / 2.0;
}
int main()
{
    sample s, y;
    s.setvalue();
    cout << "Mean Value :" << mean(s) << endl;
    y.setvalue();
    cout << "Mean Value :" << mean(y) << endl;
}