#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,t;
    cin>>n;
    vector< long long > a;
    vector< vector <long long > > max;
    vector< long long > temp;
    for(long long i=0;i<n;i++)
    {
         cin>>t;
         a.push_back(t);
    }
    long long x=0;
    long long maxx=0,ind=0;
    for(long long i=0;i<n;i++)
    {
         temp.push_back(i);
         for(long long j=i+1;j<n;j++)
         {
              t=a[i];

              if((t+1)==a[j])
              {
                   temp.push_back(j);
                   t=a[j];
                   x++;
              }
         }
         if(maxx<x)
         {
              maxx=x;
              ind=i;
         }
         max.push_back(temp);
         temp.clear();
    }
    cout<<x<<endl;
    for(long long i=0;i<x;i++)     cout<<max[ind][i]<<" ";
    return 0;
}
