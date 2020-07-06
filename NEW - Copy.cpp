#include <iostream>
using namespace std;

int main () 
{
   int *p  = NULL;              // Pointer initialized with null
   p  = new int;                // Request memory for the variable
 
   *p = 200;                   // Store value at allocated address
  
   cout << "Value stored in p : " << *p ;
     cout<<"\t memory address "<<p;
   
delete p;                            // free up the memory.

cout << "\n\nValue of p : " << *p  ;

cout<<"\t memory address "<<p;
   return 0;
}
