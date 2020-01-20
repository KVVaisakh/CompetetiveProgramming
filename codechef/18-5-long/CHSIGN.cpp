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
    vector< vector < pair < ll,ll > > >v;
    vector< pair < ll,ll > >temp;
    ll t,n;
    cin>>t;
    while(t--)
    {
         temp.clear();
         v.clear();
         cin>>n;
         ll a[n],c=0,osum=0,esum=0;
         for(ll i=0;i<n;i++)       cin>>a[i];
         for(ll i=0;i<n;i++)
         {
             cout<<"a"<<endl;
             if(!i)
             {
                 cout<<"b";
                 if(a[i]<a[i+1])
                 {
                     if(a[i+2]>=a[i+1] || a[i+2]>=a[i+3])      a[i]=-a[i];
                     else                   temp.pb(make_pair(a[i],i));
                 }
             }
             else if(i==(n-1))
             {
                 cout<<"c";
                 if(a[i]<a[i-1])
                 {
                     if(sizeof(temp))
                     {
                         if(temp.back().second==(i-2))
                         {
                             temp.pb(make_pair(a[i],i));
                             v.pb(temp);
                             c++;
                             temp.clear();
                         }
                         else       a[i]=-a[i];
                     }
                     else    a[i]=-a[i];
                 }
             }
             else
             {
                 cout<<"d";
                 if(a[i]<a[i+1] && a[i]<a[i-1])
                 {
                     if(sizeof(temp))
                     {
                         if(temp.back().second==(i-2)) temp.pb(make_pair(a[i],i));
                         else
                         {
                             v.pb(temp);
                             temp.clear();
                             c++;
                             if((i+3)<n)
                             {
                                 if(a[i+2]>=a[i+1] || a[i+2]>=a[i+3])      a[i]=-a[i];
                                 else                   temp.pb(make_pair(a[i],i));
                             }
                             else       a[i]=-a[i];
                         }
                     }
                     else
                     {
                         if((i+3)<n)
                         {
                             if(a[i+2]>=a[i+1] || a[i+2]>=a[i+3])      a[i]=-a[i];
                             else                   temp.pb(make_pair(a[i],i));
                         }
                         else       a[i]=-a[i];
                     }
                 }
             }
         }
         for(ll i=0;i<c;i++)
         {
             for(ll j=0;j<sizeof(v[i])/sizeof(ll);j++)
             {
                 if(j%2==0)     osum+=v[i][j].first;
                 else           esum+=v[i][j].first;
             }
             if(osum>esum)      for(ll j=0;j<sizeof(v[i])/sizeof(ll);j=j+2)    a[v[i][j].second]=-a[v[i][j].second];
             else               for(ll j=1;j<sizeof(v[i])/sizeof(ll);j=j+2)    a[v[i][j].second]=-a[v[i][j].second];

         }
         for(ll i=0;i<n;i++)  cout<<a[i]<<" ";
         cout<<endl;
    }
    return 0;
}
