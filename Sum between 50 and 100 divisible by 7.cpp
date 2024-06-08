#include<iostream>
using namespace std;
int main()
{
	int s = 0,i,m,n;
	cout<<"Range 1st number = ";
	cin>>m;
	cout<<"Range 2nd number = ";
	cin>>n;
	for(i=m;i<=n;i++)
	{
		if(i%7==0)
		{
			s += i;
		}
	}
	cout<<endl<<"Sum of numbers betweeen 50 and 100 that are divisible 7 is "<<s<<endl;
	return 0;
}