#include<iostream>
using namespace std;
int main()
{
	int n,r,f=0,data;
	cout<<"Number = ";
	cin>>n;
	data = n;
	while(n>0)
	{
		r = n%10;
		f += r*r*r;
		n = n/10;
	}
	if(data==f)
	{
		cout<<"Its an Armstrong Number ";
	}
	else
	{
		cout<<"Its Not an Armstrong Number ";
	}
}