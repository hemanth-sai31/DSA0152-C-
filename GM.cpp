#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,d,s,p;
	cout<<"A = ";
	cin>>a;
	cout<<"B = ";
	cin>>b;
	cout<<"C = ";
	cin>>c;
	cout<<"D = ";
	cin>>d;
	p = a*b*c*d;
	cout<<"Product = "<<p<<endl;
	s = pow(p,1.0/4.0);
	cout<<"GM = "<<s;
}