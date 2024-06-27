#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"Enter number 1 : ";
	cin>>a;
	cout<<"Enter number 2 : ";
	cin>>b;
	cout<<"Addition = "<<a+b<<endl;
	cout<<"Subtraction = "<<a-b<<endl;
	cout<<"Multiplication = "<<a*b<<endl;
	if ( a>b){
		cout<<"Division = "<<a/b<<endl;
	}
	else{
		cout<<"Division not possible";
	}
}