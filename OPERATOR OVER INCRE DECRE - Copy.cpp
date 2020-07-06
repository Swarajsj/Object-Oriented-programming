  
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
//	friend void operator--(number N);
	
	
};
//void operator--(number N)
//{//	cout<<--N.x<<endl;
//}
int main()
{
	number N1(10);//,N2(20);
	++N1;//N1.operator++();
	
		//--N2;//operator--(N2);
	
	
	
	
}
