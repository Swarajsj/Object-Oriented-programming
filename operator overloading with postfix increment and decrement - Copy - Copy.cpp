  
#include<iostream>
using namespace std;
class number
{
	int x;
	public:
		number (int n)
		{
			x=n;
		}
	void operator ++(int)
	{
		cout<<"\n postfix increment";
		cout<<x++<<endl;
		
	}
	friend void operator--(number N,int);
	
	
};
void operator--(number N,int)
{
	cout<<"\n postfix decrement";
	cout<<N.x--;
}
int main()
{
	number N(10);
	N++;//N.operator++();
	N--;//operator--(N);
	
	
	
	
}

