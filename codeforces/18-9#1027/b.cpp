#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,s,sum=0,rsum=0;
    cin>>n>>s;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll x=n/2;
    if(a[x]<s)
    {
        while(a[x]<=s && x<n)
        {
            sum+=a[x];
            x++;
            rsum+=s;
        }
        cout<<rsum-sum;
    }
    else if(a[x]>s)
    {
        while(a[x]>=s && x>=0)
        {
            sum+=a[x];
            x--;
            rsum+=s;
        }
        cout<<sum-rsum;
    }
    else    cout<<"0";
    return 0;
}
