#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
#define mod 1000000007

using namespace std;

ll MaxSubArraySum(ll a[], ll size)
{
    ll max=LONG_LONG_MIN,tmax=0;
    for (int i = 0; i < size; i++)
    {
        tmax=tmax+a[i];
        if (max<tmax)    max=tmax;
        if (tmax<0)      tmax=0;
    }
    return max;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,w;
    cin>>n>>w;
    ll a[n],sum=0,maxs=0,mins=0,subsum=0;
    for(ll i=0;i<n;i++)
    {
         cin>>a[i];
         sum+=a[i];
         maxs=max(maxs,sum);
         mins=min(mins,sum);
    }
    subsum=MaxSubArraySum(a,n);
    if(w<subsum || w<-mins)  cout<<"0";
    else                 cout<<w-maxs+mins+1;
    return 0;
}
