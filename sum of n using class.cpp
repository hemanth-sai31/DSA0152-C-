#include <iostream>
using namespace std;
class SUL
{
	public:
		int i,n,m=0;
		void sum(int n){
			for(i=1;i<=n;i++)
			{
				m= m+i;
			}
			cout<<m;
		}
};
int main(){
	int p ;
	cout<<"Number = ";
	cin>>p;
	SUL k;
	k.sum(p);
}