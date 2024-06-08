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
			for(j=n-i;j>1;j--){
			cout<<" ";
			}
			for(j=0;j<=i;j++){
			cout<<s[j]<<" ";
			}
			cout<<endl;
			}
			for(i=0;i<n;i++){
			for(j=0;j<=i;j++){
			cout<<" ";
			}
			for(k=0;k<n-1-i;k++){
			cout<<s[k]<<" ";
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