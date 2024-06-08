#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"N = ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}