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
    int t;
    cin>>t;
    ll n,q,temp,x,ind,start,end,mid,m,l,l1,m1;
    vector<ll> a;
    vector< pair<ll,ll> > b;
    while(t--)
    {
         a.clear();
         b.clear();
         cin>>n>>q;
         a.pb(0);                  //indexing from 1
         b.pb(make_pair(0,0));
         for(ll i=0;i<n;i++)
         {
              cin>>temp;
              a.pb(temp);
              b.pb(make_pair(temp,i+1));
         }
         sort(b.begin(),b.end());
         while(q--)
         {
               m=l=m1=l1=0;
               cin>>x;
               start=1;
               end=n;
               while(start<=end)
               {
                   mid=(start+end)/2;
                   if(b[mid].first==x)
                   {
                        ind=b[mid].second;
                        break;
                   }
                   else
                   {
                        if(b[mid].first>x)        end=mid-1;
                        else                      start=mid+1;
                   }
               }
               l1=mid-1;
               m1=n-mid;
               start=1;
               end=n;
               while(start<=end)
               {
                    mid=(start+end)/2;
                    if(a[mid]==x)  break;
                    else
                    {
                         if(mid<ind)
                         {
                              if(a[mid]>x)        l++;
                              else                l1--;
                              start=mid+1;
                         }
                         else
                         {
                              if(a[mid]<x)        m++;
                              else                m1--;
                              end=mid-1;
                         }
                    }
               }
               if(m1>=m && l1>=l)    cout<<max(l,m)<<endl;
               else                  cout<<"-1"<<endl;
         }
    }
    return 0;
}
