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
    ll n,flag=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]-=(i+1);
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            cout<<i+1;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        ll q=pow(10,9);
        for(ll i=0;i<n;i++)     q=min(q,a[i]/n);
        for(ll i=0;i<n;i++)
        {
            a[i]-=(q*n);
            if(!a[i])
            {
                cout<<i+1;
                goto last;
            }
        }
        for(ll i=0;i<n;i++)
        {
            cout<<a[i];
            a[i]-=n;
            if(a[i]<0)
            {
                cout<<i+1;
                break;
            }
            if(i==n-1)  {i=-1;cout<<endl;}
        }

    }
    last:
    return 0;
}
