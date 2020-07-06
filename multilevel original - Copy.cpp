#include<iostream>
using namespace std;
class student{
	protected:
		string name;
		int rollno;
		int regno;
		public:
			void detail()
			{
				
				cout<<"Enter the Name of The Student";
				cin>>name;
				cout<<"Enter The Roll No:";
				cin>>rollno;
				cout<<"Enter The Registration No:";
				cin>>regno;
			}
			void show()
			{
				cout<<"the name is:"<<name;
				cout<<"the roll no is :"<<rollno;
				cout<<"registration no is:"<<regno;
			}
};
class test:public student
{
	protected:
		float a,b;
		public:
			void marks()
			{
				cout<<"Enter The marks of A";
				cin>>a;
				cout<<"Enter The Marks of B";
				cin>>b;
			}
};
class result:public test{
	protected:
		float total;
		public:
			void res()
			{
				cout<<"Marks Of A is "<<a;
				cout<<"Marks of B is "<<b;
				total=a+b;
				cout<<"Total number is "<<total;
			}
};
int main()
{
	result r;
	r.detail();
	r.show();
	r.marks();
	r.res();
	
}
