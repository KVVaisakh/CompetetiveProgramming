#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
#define ld long double

#define mod 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll c[n],b[m];
    for(ll i=0;i<n;i++) cin>>c[i];
    for(ll i=0;i<m;i++) cin>>b[i];
    ll j=0,out=0;
    for(ll i=0;i<n;i++)
    {
        if(c[i]<=b[j])  {out++;j++;}
        if(j==m)    break;
    }
    cout<<out;
    return 0;
}
