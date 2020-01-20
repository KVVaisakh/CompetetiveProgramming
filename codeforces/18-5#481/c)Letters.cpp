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
    ll a[n],b[m],c[m],j=0;
    for(ll i=0;i<n;i++)  cin>>a[i];
    for(ll i=0;i<m;i++)  cin>>b[i];
    c[0]=a[0];
    for(ll i=1;i<m;i++)  c[i]=c[i-1]+a[i];
    for(ll i=0;i<m;i++)
    {
         for(;j<n;j++)
         {
              if(b[i]<=c[j])
              {
                   if(j==0)        cout<<j+1<<" "<<b[i]<<endl;
                   else            cout<<j+1<<" "<<b[i]-c[j-1]<<endl;
                   break;
              }
         }
    }
    return 0;
}
