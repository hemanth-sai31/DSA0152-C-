#include<iostream>
using namespace std;
int main(){
	char a;
	cout<<"enter a character = ";
	cin>>a;
	if(a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
	{
		cout<<"Vowels";
	}
	else{
		cout<<"Consonants";
	}
}