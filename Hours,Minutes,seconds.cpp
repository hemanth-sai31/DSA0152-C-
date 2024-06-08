#include<iostream>
using namespace std;
int main()
{
	int n,h,s,m,rd;
	cout<<"Enter in seconds = ";
	cin>>n;
	h = n/3600;
	rd = n%3600;
	m = rd/60;
	s = n/60;
	cout<<" Hours = "<<h<<endl;
	cout<<" Minutes = "<<m<<endl;
	cout<<" Seconds = "<<s<<endl;
}