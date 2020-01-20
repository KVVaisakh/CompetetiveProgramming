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
    ll t,n,temp,p=1,d;
    vector<ll> a;
    vector<ll> b;
    cin>>t;
    while(t--)
    {
      a.clear();
      b.clear();
      cin>>n;
      p=1;
      for(ll i=0;i<n;i++)
      {
        cin>>temp;
        a.pb(temp);
      }
      for(ll i=0;i<n;i++)
      {
        cin>>temp;
        b.pb(temp);
        if(b[i]<a[i]) p=0;
      }
      if(p==0)  goto last;
      for(ll i=0;i<n-2;i++)
      {
        if(a[i]!=b[i])
        {
          if(a[i]<b[i])
          {
            d=b[i]-a[i];
            a[i]+=d;
            a[i+1]+=(d*2);
            a[i+2]+=(d*3);
          }
          else if(a[i]>b[i])
          {
            p=0;
            goto last;
          }
        }
      }
      if(a[n-2]!=b[n-2])  p=0;
      if(a[n-1]!=b[n-1])  p=0;
      last:
      if(p==1)  cout<<"TAK"<<endl;
      else      cout<<"NIE"<<endl;
    }
    return 0;
}
