#include <iostream>
using namespace std;
int main ()
{
  int i,n;
  int *p;
  cout << "enter the size of array ";
  cin >> n;
  p= new  int[n];
  
    for (i=0; i<n; i++)
    {
      cout << "Enter number: ";
      cin >> p[i];
    }
    cout << "You have entered: ";
    for (i=0; i<n; i++)
      cout << p[i] << "\n";
      
      delete p;
     cout << "You have entered: ";
    for (i=0; i<n; i++)
      cout << p[i] << "\n";
       
   
  }
  

