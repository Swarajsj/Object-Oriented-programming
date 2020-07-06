#include <iostream>
using namespace std;
int main()
{
    int a[10][10], t[10][10], i, j, r, c;
    cout << "Enter the nos. of rows and cols\n";
    cin >> r >> c;
    cout << "Enter the element \n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Entered matrix is \n";
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            t[j][i] = a[i][j];
        }
    }
    cout << "Transpos of martix is \n";
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            cout << t[i][j] << "  ";
        }
        cout << "\n";
    }
}
