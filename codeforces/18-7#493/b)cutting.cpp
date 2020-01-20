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
    ll n,b,i,o=0,e=0,c=0;
    cin>>n>>b;
    ll a[n];
    vector< ll > v;
    for(i=0;i<n;i++)    cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        if(a[i]%2==0)   e++;
        else if(a[i]%2) o++;
        if(e==o)
        {
            v.pb(abs(a[i]-a[i+1]));
            c++;
        }
    }

    sort(v.begin(),v.end());

    ll sum=0;
    i=0;
    for(;i<n && i<c;i++)
    {
        sum+=v[i];
        if(sum>b)   break;
    }
    cout<<i;
    return 0;
}
