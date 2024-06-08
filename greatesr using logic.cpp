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
	if((a>b)&&(a>c)){
	cout<<"Maximum number is = "<<a<<endl;
}
else if((b>a)&&(b>c)){
	cout<<"Maximum number is = "<<b<<endl;
}
else{
	cout<<"Maximum number is = "<<c<<endl;
}
}