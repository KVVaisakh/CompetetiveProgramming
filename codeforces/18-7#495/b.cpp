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
    ll n,m;
    cin>>n>>m;
    ll x,y;
    for(ll i=0;i<m;i++)
    {
        cin>>x>>y;
    }
    for(ll i=0;i<n;i++)
    {
        if(i%2) cout<<"1";
        else    cout<<"0";
    }
    return 0;
}
