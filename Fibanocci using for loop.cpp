#include<iostream>
using namespace std;
int main(){
	int i,a = 0,b = 1,c,n,d;
	cout<<"Range= ";
	cin>>n;
	cout <<"Fibanocci is "<<a<<","<<b;
	for(i=2;i<n;i++){
		c=a+b;
		cout<<","<<c;
		a = b;
		b = c;
	}
}