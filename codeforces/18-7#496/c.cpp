#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
#define ld long double

#define mod 1000000007

using namespace std;

int decToBinary(ll x)
{
    return x && (!(x&(x-1)));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    vector<pair<ll,ll> >a;
    vector<ll> v;
    vector<bool> c(1000000002,0);
    for(ll i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        a.pb(make_pair(temp,0));
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i].second==0)
        for(ll j=0;j<n;j++)
        {
            if(i!=j)
            {
                ll bin=a[i].first+a[j].first;
                if(c[bin])
                {
                    if(a[i].second==0)  v.pb(a[i].first);
                    if(a[j].second==0)  v.pb(a[j].first);
                    a[i].second=1;
                    a[j].second=1;
                    c[a[i].first+a[j].first]=1;
                    break;
                }
                else if(decToBinary(bin))
                {
                    if(a[i].second==0)  v.pb(a[i].first);
                    if(a[j].second==0)  v.pb(a[j].first);
                    a[i].second=1;
                    a[j].second=1;
                    c[bin]=1;
                    break;
                }
            }
        }
    }
    cout<<n-v.size();
    return 0;
}
