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
    ll b[n],a[n],td=0,d;
    for(ll i=0;i<n;i++)       cin>>b[i];
    if(n<=2)   cout<<"0";
    else
    {
         for(ll i=0;i<n-1;i++)
         {
              a[i]=b[i+1]-b[i];
              td+=a[i];
         }
         d=td/(n-1);
         for(ll i=0;i<n-1;i++)
         {
              if(b[i]-b[i+1]>d && b[i+1]-b[i+2]<d)
              {
                   b[i+1]++;
              }
         }
    }
    return 0;
}
