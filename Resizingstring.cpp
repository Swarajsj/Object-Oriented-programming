#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "Helloo";
    string str("I like to code in C");
    cout << str << "\n";

    unsigned sz = str.size();
    str.resize(sz + 2, '+');
    cout << str << "\n";

    str.resize(22);
    cout << str << "\n";
    str.swap(s);
    cout << str;

    return 0;
}