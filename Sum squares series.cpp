#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,sum=0;
	for(i=1;i<=5;i++)
	{
		n = i*i;
		sum += n;
		cout<<n<<endl;
	}
	cout<<"Sem of the series "<<sum<<endl;
}