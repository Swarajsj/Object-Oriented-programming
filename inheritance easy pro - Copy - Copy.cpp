#include<iostream>
using namespace std;
class person
{
	string name;
	int age;
	public:
	void talk()
	{
		cout<<"person can talk\n";
	}
	void walk()
	{
		cout<<"person can walk\n";
	}
};
class teacher:public person
{
	public:
		void teach()
		{
			cout<<"teacher can deliver lecture\n";
		}
};
int main()
{
	teacher o;
	o.talk();
	o.walk();		
	o.teach();
	
}

