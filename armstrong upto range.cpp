#include<iostream>
using namespace std;
int main()
{
	int n,r,f;
	n = 10;
	while(n>0)
	{
		for(n=1;n<=10;n++)
		{
		r = n%10;
		f += r*r*r;
		n = n/10;
		cout<<f<<" ";
	}
		n++;
	}
}