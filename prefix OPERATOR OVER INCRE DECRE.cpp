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
	void operator ++()
	{
		cout<<"\n prefix increment";
		cout<<++x<<endl;		
	}
	friend void operator--(number N);
	
	
};
void operator--(number N)
{
	cout<<"\n prefix decrement";
	cout<<--N.x<<endl;
}
int main()
{
	number N1(10),N(20);
	++N1;//N1.operator++();
	
		--N;//operator--(N2);
	
}
