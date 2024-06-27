#include<iostream>
using namespace std;
int main()
{
	int n,i,p,e,m;
	cout<<"Enter size = ";
	cin>>n;
	int arr[n];
	cout<<"enter the elemnts "<<endl;
	for (i =0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Elements are ";
		for (i =0;i<n;i++)
	{
		cout<<" "<<arr[i];
	}
	cout<<endl;
	cout<<"Enter position = ";
	cin>>p;
	cout<<"Enter number = ";
	cin>>e;
	for (i=n;i>p;i--){
		arr[i]=arr[i-1];
	}
	arr[p]=e;
	n++;
	cout<<"Elements are ";
		for (i =0;i<n;i++)
	{
		cout<<" "<<arr[i];
	}
}