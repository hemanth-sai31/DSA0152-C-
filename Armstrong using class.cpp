#include <iostream>
using namespace std;
class SUL
{
	public:
		int r,n,m=0,a;
		void sum(int n){
			a = n;
			while(n!=0){
				r = n % 10;
				m = m + (r*r*r);
				n = n / 10;
			}
			if(a == m){
				cout<<"Armstrong";
			}
			else{
				cout<<"Not Armstrong";
			}
		}
};
int main(){
	int p ;
	cout<<"Number = ";
	cin>>p;
	SUL k;
	k.sum(p);
}