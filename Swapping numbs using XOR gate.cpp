#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter tyhe number 1 = ";
	cin>>a;
	cout<<"Enter tyhe number 2 = ";
	cin>>b;
	cout << "Before swapping numbers are "<<a<<" , "<<b<<endl;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	cout << "After swapping numbers are "<<a<<" , "<<b<<endl;
}