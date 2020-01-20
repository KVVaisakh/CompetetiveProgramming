#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    long long n,flag,k;
    while(t--)
    {
         cin>>n>>k;
         flag=0;
         long long j=0,l=0,asum=0,bsum=0,max,min,temp;
         vector< long long >a;
         vector< long long >b;
         for(long long i=0;i<n;i++)
         {
              if(i%2==0)  { cin>>temp; a.push_back(temp);    asum+=temp; }
              else        { cin>>temp; b.push_back(temp);    bsum+=temp; }
         }
         if(bsum>asum)
         {
              flag=1;
              goto skip;
         }
         for(long long i=0;i<k;i++)
         {
              max=*max_element(a.begin(),a.end());
              min=*min_element(b.begin(),b.end());
              asum=asum-max+min;
              bsum=bsum-min+max;
              if(bsum>asum)
              {
                   flag=1;
                   break;
              }
         }
         skip:
         if(flag)   cout<<"YES\n";
         else       cout<<"NO\n";
    }
    return 0;
}
