#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int f=1,n,i=1;
	cout<<"N = ";
	cin>>n;
	do
	{
		f *= i;
		i++;
	}
	while(i<=n);
	{
	cout<<"Factorial = "<<f;
}
}