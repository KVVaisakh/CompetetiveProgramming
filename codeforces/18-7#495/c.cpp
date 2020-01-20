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
    ll n,c=0,x;
    cin>>n;
    vector<pair<ll,ll> >a;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        a.pb(make_pair(x,0));
    }
    vector<ll>b;
    set <ll>z;
    ll y=0,y1=0,p=0;
    for(ll i=n-1;i>-1;i--)
    {
        z.insert(a[i].first);
        y=z.size();
        if(y!=y1)   p++;
        y1=y;
        b.pb(p);
    }
    z.clear();
    for(ll i=0;i<n;i++)
    {
        z.insert(a[i].first);
        y=z.size();
        if(y==y1)   a[i].second=1;
        y1=y;
    }
    reverse(b.begin(),b.end());
    for(ll i=1;i<n;i++)
    {
        if(a[i-1].second==0)
        c+=b[i];
    }
    cout<<c;
    return 0;
}
