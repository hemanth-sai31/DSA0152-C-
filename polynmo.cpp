#include <iostream>
using namespace std; 
class first {
public:
    int a ;
    string b;
	virtual void input(){
    cout<<"Enter a number 1 = ";
    cin>>a;
    cin.ignore();
    cout<<"Enter the string 1 = ";
    getline(cin,b);
}
};
class second : public first {
public:
	int a ; string b;
	void input() override {
    cout<<"Enter a number 2 = ";
    cin>>a;
    cin.ignore();
    cout<<"Enter the string 2 = ";
    getline(cin,b);
}
};
int main(void)
{
	first d;
	d.input();
    second p;
    p.input();
    int m = d.a +p.a;
    string n = d.b + p.b;
    cout << m<<endl;
	cout<< n;	    
}