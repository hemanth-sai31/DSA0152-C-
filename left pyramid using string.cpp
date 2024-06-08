#include <iostream>
using namespace std;
class LPT
{
	public:
		string s;
		int i,j,n,k;
		void p(string s)
		{
		n = s.length();
		for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
		cout<<s[j]<<" ";
		}
		cout<<endl;
		}
	}
};
int main()
{
	string u;
	cout<<"String = ";
	cin>>u;
	LPT r;
	r.p(u);
}