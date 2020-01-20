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
    ll n,d,c=2;
    cin>>n>>d;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=1;i<n;i++)
    {
        if(a[i]-a[i-1]>2*d)  c=c+2;
        if(a[i]-a[i-1]==2*d)  c++;
    }
    cout<<c;
    return 0;
}
