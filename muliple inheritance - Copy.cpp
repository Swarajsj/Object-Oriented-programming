#include<iostream>
using namespace std;
class M
{
	protected:
		int m;
		public:
			void getm(int a)
			{
				m=a;
			}
};
class N
{
	protected:
	int n;
	public:
	void getn(int b)
	{
		n=b;
	}
};
class p:public M,public N//synatx of multiple inheritance
{
	public:
		void display()
		{
			cout<<"m= "<<m<<"\n n= "<<n<<"\n multiplication "<<m*n;
		}
};
int main()
{
	p ob;
	ob.getm(10);
	ob.getn(20);
	ob.display();
}

