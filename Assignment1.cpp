#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int u = 0, l = 0, s = 0, n = 0;
    char name[50];
    gets(name);
    int i, j;
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            u++;
        }
        else if (name[i] >= 97 && name[i] <= 122)
        {
            l++;
        }
        else if (name[i] == 32)
        {
            s++;
        }
        else if (name[i] == 46)
        {
            n++;
        }
    }
    cout << "No.of Capital Letter" << u << endl;
    cout << "No.of Lower Letter" << l << endl;
    cout << "No.of spaces" << s << endl;
    cout << "No.of new Line" << n << endl;
    ofstream f;
    f.open("abcd.txt");
    f << u;
    f << l;
    f << s;
    f << n;
    cout << "Data Saved";
    f.close();
}