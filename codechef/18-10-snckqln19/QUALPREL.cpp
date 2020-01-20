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
    ll t,n,k,temp;
    cin>>t;
    while(t--)
    {
      vector<ll> s;
      cin>>n>>k;
      for(ll i=0;i<n;i++)
      {
        cin>>temp;
        s.pb(temp);
      }
      sort(s.begin(),s.end(),greater<int>());
      ll i=k;
      if(k>0)
      while(s[k-1]==s[i] && i<n) i++;
      cout<<i<<endl;
    }
    return 0;
}
