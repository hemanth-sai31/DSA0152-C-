#include <iostream>
using namespace std;
int main() 
{	
    int a = 0, b = 1, sum = 0, n, d=3,c;
    cout << "Enter the range: ";
    cin >> n;
    sum=sum+b;
        while (d<=n) 
		{
		   c=a+b;
        if (d%2 == 0) 
	    sum=sum+c;
        a = b;
        b = c;
        d++;
    }      
    cout << "The sum of even terms in Fibonacci sequence up to " << n << " is: " << sum << endl;
    return 0;
}