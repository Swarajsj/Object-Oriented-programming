#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, k, r1, r2, c1, c2;
    cout << "Enter rows and col for 1st martix";
    cin >> r1 >> c1;
    cout << "Enter rows and col for 2nd martix\n";
    cin >> r2 >> c2;
    while (c1 != r2)
    {
        cout << "Error! col of 1st martix not equal to row of 2nd\n";
        cout << "Enter rows and col for 1st martix\n";
        cin >> r1 >> c1;
        cout << "Enter rows and col for 2nd martix\n";
        cin >> r2 >> c2;
    }
    cout << "Enter element for 1st martixs \n";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter element for 2nd martixs \n";
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            int sum = 0;
            for (k = 0; k < c1; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
    cout << "Output martixs \n";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            cout << c[i][j];
        }
        return 0;
    }
}
