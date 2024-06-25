#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	int p,q;
	cout<<"Enter 1st number ";
	cin>>a;
	cout<<"Enter 2nd number ";
	cin>>b;
	p=a;
	q=b;
	c=p%q;
	cout<<"Addition = "<<a+b<<endl;
	cout<<"Multiplication = "<<a*b<<endl;
	if (a>b){
	cout<<"Division = "<<a/b<<endl;
	cout<<"Modulus = "<<c<<endl;
}
else{
	cout<<"Division is not possible"<<endl;
	cout<<"Modulus is not possible";
}	
}          