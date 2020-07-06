#include <iostream>
#include <string>
using namespace std;
int main()
{
    string base = "This is a test string ";
    string str2 = "\n Example";
    string str3 = "Sample Phrase";
    string str4 = "Useful";

    string str = base;
    str.replace(9, 5, str2);
    cout << str << "\n";
    str.replace(19, 6, str3);
    cout << str << "\n";
    str.replace(8, 10, "Just a");
    cout << str << "\n";
    str.replace(8, 6, "A shorty");
    cout << str << "\n";
}
