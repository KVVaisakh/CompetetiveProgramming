#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)    cin>>a[i];
    if(n<2)     cout<<"-1";
    else
    {
        if(n==2 && a[0]==a[1])  cout<<"-1";
        else
        {
            ll sum=0;
            for(i=0;i<n;i++)    sum+=a[i];
            for(i=0;i<n;i++)
            {
                if(a[i]!=(sum-a[i]))
                {
                    cout<<"1\n";
                    cout<<i+1;
                    break;
                }
            }

        }
    }
    return 0;
}
