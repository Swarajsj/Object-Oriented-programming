#include<iostream>
using namespace std;
class A
{
	int x;
	public:
		A(int b)
		{
			x=b;
		}
		void show()
		{
			cout<<x<<endl;
		}
	friend void operator -(A o);
};
void operator -(A o) 
{
	cout<<-o.x;
}
int main()
{
	A o(10);
	o.show();
	-o;//o.operator -();
	//	o.show();
}
