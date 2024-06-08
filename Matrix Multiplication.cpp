#include <iostream>
using namespace std;
int main() 
{
    int m, n, a[100][100], b[100][100], sum[100][100],k, i, j;
    cout<<"Rows = ";
    cin>>m;
    cout<<"Columns = ";
    cin>>n;
    cout<<endl<< "1st matrix  " <<endl;
    for (i=0;i<m;i++)
	{
        for (j=0;j<n;j++) 
		{
            cin>>a[i][j];
        }
    }
    cout<<endl<< "2nd matrix  " <<endl;
    for (i=0;i<m;i++)
	{
        for (j=0;j<n;j++) 
		{
            cin>>b[i][j];
        }
    }
        for(i=0;i<m;i++)
		{
        for(j=0;j<n;j++) 
		{
            sum[i][j] = 0;
        }
    }
    for (i=0;i<m;i++)
	{
        for (j=0;j<n;j++)
    	{
    		for(k=0;k<m;k++)
			{
            sum[i][j]+=a[i][k]*b[k][j];
        	}
        }
    }
    cout<<endl<<"Sum "<<endl;
    for (i=0;i<m;i++) 
	{
        for (j=0;j<n;j++)
		{
            cout << sum[i][j] << " ";
        	cout << endl;
    	}
    }
    return 0;
}
