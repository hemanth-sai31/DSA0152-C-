#include <iostream>
using namespace std;
class LPT
{
	public:
		int i,j,n;
		void p(int n)
		{
			for(i=0;i<n;i++){
		for(j=2*(n-i);j>=0;j--){
			cout<<" ";
		}
		for(j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
};
int main()
{
	int k;
	cout<<"Size = ";
	cin>>k;
	LPT r;
	r.p(k);
}