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
	a = a+b;
	b = a-b;
	a = a-b;
	cout<<"After Swapping "<<a<<" , "<<b<<endl;
}