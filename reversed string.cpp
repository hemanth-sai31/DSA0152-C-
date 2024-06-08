#include <iostream>
#include <string>
using namespace std;
string reverse(string s) {
  int n,i; 
  n = s.length();
  string rs;
  for (i=n-1;i>=0;i--)
  {
    rs += s[i];
  }
  return rs;
}
int main() {
  string p;
  cout<<"String = ";
  cin>>p;
  cout << "The reversed string is: " << reverse(p)<< endl;

  return 0;
}