#include<iostream>
using namespace std;
class demo
{
	int x,y;
	public:
		demo()//we are passing default constructr bcoz in the main function we have to pass argument to 2 object not to 3...		
		{
			x=0;
			y=0;
			
		}
		demo(int a,int b)
		{
			x=a;
			y=b;
			
		}
      void show()
      {
      	cout<<x<<" "<<y<<endl;	  
		  }
		  friend demo operator+(demo a,demo o);
};
  demo operator+(demo a ,demo o)
  {
		  
		  	demo temp;
		  	temp.x=a.x+o.x;
		  	temp.y=a.y+o.y;
		  	return temp;
		  }
int main()
{
	demo d1(10,20),d2(2,3),d3;
	d3=d1+d2;
operator +(d1,d2);//calling friend function
	d3.show();
	
}
