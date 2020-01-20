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
    ll n,m,k2;
    ld k1;
    cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++)     cin>>a[i];
    sort(a,a+n);
    k2=a[n-1]+m;
    k1=ceil(float(m)/float(n));
    k1+=a[0];
    cout<<k1<<" "<<k2;
    return 0;
}
