#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //for maximum intensity
    float Imax;
    float Imin;
    float a1;
    float  a2;
    float d;
    float f;
    float a[10];
    float c;
    
    cout << "enter the value of a1s" << endl;
    cin >> a1;
    for(int i=0;i<10;i++)
    {
    	cin>>a[i];
	}
	for(int j=0;j<10;j++)
	{
		if(j%2==0)
		{
			a[j]=a[j]+0.2;
		}
		else
		{
			a[j]=a[j]+0.4;
		}
	}
	for(int k=0;k<10;k++)
	{
		cout<<a[k];
		cout<<endl;
	}
	cout<<"enter value of a2="<<endl;
    cin >> a2;
    
    cout << "this is the maximum intensity=" << endl;
    for(int g=0;g<10;g++)
    {
	
    Imax = pow((a[g] + a2), 2);
    cout<<Imax<<endl;
    d=d+Imax;
    }
    //for minimum intensity
    cout << "this is the minimum intensity=" << endl;
    for(int z=0;z<10;z++)
    {
	
    Imin = pow((a[z] - a2), 2);
    cout<<Imin<<endl;
    f=f+Imin;
    }
    cout << "their ratios of their intensities=" << endl;
    c = Imax / Imin;
    cout << c;
}
