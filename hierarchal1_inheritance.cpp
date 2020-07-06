#include <iostream>
using namespace std;
class A
{
public:
	int x;
	void getdata()
	{
		cin >> x;
	}
};
class B : public A
{
public:
	void disp()
	{
		cout << "\nin class B , x= " << x;
	}
};
class C : public A
{
public:
	void disp()
	{
		cout << "\nin class C , x= " << x;
	}
};
class D : public A
{
public:
	void disp()
	{
		cout << "\nin class D, x= " << x;
	}
};
int main()
{
	B b;
	C c;
	D d;
	b.getdata();
	b.disp();
	c.getdata();
	c.disp();
	d.getdata();
	d.disp();
}
