#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,h=0,i;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<n;i++)  a[0][i]=1;
    for(int i=1;i<m;i++)    for(int j=0;j<n;j++)    a[i][j]=0;
    int l=1,tot=m*n-n;
    for(i=0;tot;i=2*i)
    {
        if(m>2*i)
            tot=tot-i;
        else
        {
            i=i/2;
            tot=tot-i;

        }
    }
    cout<<i<<endl;
    return 0;
}
