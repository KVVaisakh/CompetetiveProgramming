#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n,sum=0,flag=0,k,maxi;
        cin>>n;
        long long a[n][n];
        for(long long j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
                cin>>a[j][k];
            sort(a[j],a[j]+n);
        }
        k=n-1;
        for(long long j=n-1;j>=0;j--)
        {
            sum+=a[j][k];
            maxi=k;
            k=n-1;
            start:
                if(k==-1)
                {
                    flag=1;
                    break;
                }
                if( j && (a[j][maxi]<=a[j-1][k]))
                {
                    k--;
                    goto start;
                }
        }
        if(flag)    cout<<"-1\n";
        else        cout<<sum<<endl;
    }
    return 0;
}
