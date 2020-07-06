#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1(10);
    //vector<int>v1; //Zero size vector
    cout << "size is\t" << v1.size() << "\n";
    for (int i = 0; i <= 9; i++)
    {

        v1[i] = i;
    }
    for (int i = 10; i <= 19; i++)
    {
        v1.push_back(i);
    }
    cout << "size is\t" << v1.size() << "\n";
    for (int i = 0; i <= 19; i++)
    {
        cout << v1[i] << "\t";
    }
    v1.pop_back();
    v1.pop_back();
    // use iterator to access the values
    vector<int>::iterator v = v1.begin();
    while (v != v1.end())
    {
        cout << "value of v = " << *v << endl;
        v++;
    }
}
