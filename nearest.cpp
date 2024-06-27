#include<iostream>
#include<cmath>
using namespace std;
int main(){
	 int a , b;
	 double c;
	 cout<<"Enter a float value = ";
	 cin>> c;
	 b = floor(c);
	 a = ceil(c);
	 if (c - b >= 0.5)
	 {
	 	cout<<a;
	 }
	 else
	 {
	 	cout<<b;
	 }
}