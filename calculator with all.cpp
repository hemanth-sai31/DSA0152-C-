#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,g;
	cout<<"Enter 1st number ";
	cin>>a;
	cout<<"Enter 2nd number ";
	cin>>b;
	cout<<"Addition = "<<a+b<<endl;
	cout<<"Multiplication = "<<a*b<<endl;
	if (a>b){
	cout<<"Division = "<<a/b<<endl;
	cout<<"Modulus = "<<a%b<<endl;
}
else{
	cout<<"Division is not possible"<<endl;
	cout<<"Modulus is not possible";
}	
}          