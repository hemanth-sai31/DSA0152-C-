#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int f=1,n,i;
	cout<<"N = ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f *= i;
	}
	cout<<"Factorial = "<<f;
}