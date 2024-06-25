#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the Number: ";
    cin>>m;
    cout<<"Enter bit number you wish to set: ";
    cin>>n;
    cout<<"Bit set Successfully" << endl;
    cout<<"Answer: " << (m | (1 << (n - 1))) << endl;
    return 0;
}