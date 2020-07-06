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
		  demo operator+(demo o)//return type will be same as class name// o isthe obj name complier will automatically understand
		  {// in demo weare storing the values of temp;... and we have to follow the given syntax.... because the left side of operator canbe acess automatically
		  	demo temp;
		  	temp.x=x+o.x;
		  	temp.y=y+o.y;
		  	return temp;
		  }
		  
};
int main()
{
	demo d1(10,20),d2(2,3),d3;
//	d3=d1+d2;
	d3=d1.operator+(d2);
	d3.show();
	
}
