#include<iostream>
using namespace std;
class student
{
	string name;
	int roll;

	public:
	void getdata()
	{
		cin>>name>>roll;
	}
	void display()
	{ 
		cout<<"\nname is  "<<name<<"\t roll no is "<<roll<<endl;
	}
};
int main()
{ int i;
	student *ptr;
	ptr= new student;
	cout<<"\n enter the details of student "<<i+1<<endl;
	  ptr->getdata();
	 ptr->display();
	
}
