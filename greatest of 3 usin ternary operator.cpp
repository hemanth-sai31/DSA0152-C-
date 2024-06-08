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
	d = (a>b)?((a>c)?a:b):((b>c)?b:c);
	cout<<"Maximum number is = "<<d<<endl;
}