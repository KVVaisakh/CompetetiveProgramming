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
    ll n;
    cin>>n;
    ll a[n],c=0,k=0;
    vector<ll>tempk;
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(ll i=0;i<n-1;)
    {
        c=a[i];
        k=1;
        i++;
        while(a[i]==c)
        {
            i++;
            k++;
        }
        tempk.pb(k);
    }
    sort(tempk.begin(),tempk.end());
    if(tempk.size())    cout<<tempk[tempk.size()-1];
    else cout<<1;
    return 0;
}
