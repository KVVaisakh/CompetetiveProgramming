#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long k;
    cin>>k;
    long u,l,r,c=0;
    r=k%10;
    u=(k+10-r)*10;
    l=(k-r)*10;
    for(long long i=l;i<=u;i++)
    {
        long long x=i,sum=0;
        while(x!=0)
        {
            sum=sum+(x%10);
            x=x/10;
        }
        if(sum==10)
        {
            if(c==r)
            {
                cout<<i;
                break;
            }
            c++;
        }
    }
    return 0;
}
