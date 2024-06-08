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
	cout<<"C = ";
	cin>>c;
	cout<<"D = ";
	cin>>d;
	p = a*b*c*d;
	cout>>"Product = ">>p;
	s = pow(p,1/4);
	cout>>"Geometric Progression = ">>s;
}