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
    map <ll,ll>a;
    ll t,n,temp;
    cin>>t;
    while(t--)
    {
      a.clear();
      cin>>n;
      for(ll i=0;i<n;i++)
      {
        cin>>temp;
        a[temp]++;
      }
      ll ans=1,last=0;
      map<ll,ll>::iterator it=a.end();

      do
      {
        it--;
        if(it->second>=2)
        {
          if(last==0)
          {
            if(it->second%2==1) last=1;
            for(ll i=it->second-1;i>=2;i=i-2)  ans=(ans*i%1000000007)%1000000007;
          }
          else
          {
            if(it->second%2==1) last=0;
            for(ll i=it->second;i>=2;i=i-2)  ans=(ans*i%1000000007)%1000000007;
          }
        }
        else
        {
          if(last==0) last=1;
          else        last=0;
        }
      }while(it!=a.begin());

      cout<<ans<<endl;
    }
    cin>>t;
    return 0;
}
