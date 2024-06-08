#include <iostream>
using namespace std;
class RPT
{
	public:
		int i,j,n;
		void p(int n){
			for(i=1;i<=n;i++){
				for(j=1;j<=i;j++){
					cout<<"* ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	int k;
	cin>>k;
	RPT r;
	r.p(k);
}