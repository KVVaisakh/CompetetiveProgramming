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
    ll t,n,temp,sum,tsum;
    vector <ll> a;
    cin>>t;
    while(t--)
    {
      a.clear();
      cin>>n;
      for(ll i=0;i<n;i++)
      {
        cin>>temp;
        a.pb(temp);
      }
      sum=1;
      ll i=0;
      ll d=0;
      tsum=0;
      while(sum<n)
      {
        d++;
        for(;i<sum;i++) tsum+=a[i];
        sum+=tsum;
      }
      cout<<d<<endl;
    }
    return 0;
}
