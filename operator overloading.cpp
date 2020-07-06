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
		void operator -()//sytax of operator overloading...............................
		{
			x=-x;
		}
};
int main()
{
	A o(10);
	o.show();
	-o;//o.operator -();
		o.show();
}
