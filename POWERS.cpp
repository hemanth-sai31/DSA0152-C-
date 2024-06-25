#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"N = ";
	cin>>n;
	for(i=0;i<n;i++){
		for(j=n-i;j>1;j--){
			cout<<" ";
		}
		for(j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			cout<<" ";
		}
		for(k=0;k<n-1-i;k++){
			cout<<"* ";
		}
		cout<<endl;
	}
}