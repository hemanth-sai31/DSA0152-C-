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
	cout<<"Before Swapping "<<a<<" , "<<b<<endl;
	c = a;
	a = b;
	b = c;
	cout<<"After Swapping "<<a<<" , "<<b<<endl;
}