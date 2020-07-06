#include <iostream>
using namespace std;
void add(int &ref);
int main()
{
    int num = 2;
    int &ref = num;
    cout << "The value of num before calling the fuction is :" << num;

    add(num);
    cout << "\nThe value of num after calling the fuction is :" << num;
}
void add(int &ref)
{
    ref = ref + 10;
    cout << "\nThe value of num  called the fuction is :" << ref;
}
