#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	int temp;
	while(b!=0){
		temp = b;
		b = a%b;
		a = temp;
	}
	return a;
}
int main()
{
	int n1,n2,g;
	cout<<"Num 1 = ";
	cin>>n1;
	cout<<endl<<"Num 2 = ";
	cin>>n2;
	g = gcd(n1,n2);
	cout<<endl<<"GCD of two numbers is = "<<g;
}