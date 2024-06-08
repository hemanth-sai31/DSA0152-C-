#include<iostream>
using namespace std;
int main()
{
	int n,f=0;
	cout<<"No.of Units Consumed = ";
	cin>>n;
	if((n>0)&&(n<=200))
	{
		f += n*0;
		cout<<"No need to pay money ";
	}
	else if ((n>200)&&(n<=400))
	{
		f += n*5;
		cout<<"Amount = "<<f;
	}
	else if ((n>400)&&(n<=600))
	{
		f += n*7;
		cout<<"Amount = "<<f;
	}
	else if ((n>600)&&(n<=800))
	{
		f += n*9;
		cout<<"Amount = "<<f;
	}
	else if(n>800)
	{
		f += n*11;
		cout<<"Amount = "<<f;
	}
	else{
		return 0;
	}
}