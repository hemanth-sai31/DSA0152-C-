#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,s,p;
	cout<<"A = ";
	cin>>a;
	cout<<"B = ";
	cin>>b;
	cout<<"C = ";
	cin>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"Maximum number is = "<<a<<endl;
		}
	}
	else if(b>c)
	{
		if(b>c)
		{
			cout<<"Maximum number is = "<<b<<endl;
		}
	}
	else if(c>a)
	{
		if(c>b)
		{
			cout<<"Maximum number is = "<<c<<endl;
		}
	}
	else
	{
		a=b+c;
	}
}