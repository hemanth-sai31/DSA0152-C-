#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int f=1,n,i=1;
	cout<<"N = ";
	cin>>n;
	while(i<=n)
	{
		f *= i;
		i++;
	}
	cout<<"Factorial = "<<f;
}