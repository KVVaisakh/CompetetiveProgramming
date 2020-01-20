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
    ll n,k;
    cin>>n>>k;
    ll a[n],b[k][2],c=0;
    for(ll i=0;i<n;i++)  cin>>a[i];
    for(ll i=0;i<k;i++)
    {
         cin>>b[i][0]>>b[i][1];
    }
    for(ll i=0;i<n;i++)
    {
         c=0;
         for(ll j=0;j<n;j++)
         {
              if(j!=i)
              {
                   if(a[i]>a[j])
                   {
                        for(ll l=0;l<k;l++)
                        {
                             if((b[l][0]==a[i] || b[l][1]==a[i])&&(b[l][0]==a[j] || b[l][1]==a[j])) c--;

                        }
                        c++;
                   }
              }
         }
         cout<<c<<" ";
    }
    return 0;
}
