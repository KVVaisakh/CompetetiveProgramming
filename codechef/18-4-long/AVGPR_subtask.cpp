#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    long long n;
    long long c;
    long double x;
    cin>>t;
    while(t--)
    {
         c=0;
         cin>>n;
         vector< long double >a;
         set < long double >b;
         set < long double > :: iterator it;
         for(long long i=0;i<n;i++)
         {
              cin>>x;
              a.push_back(x);
              b.insert(x);
         }
         for(long long i=0;i<n-1;i++)
         {
              for(long long j=i+1;j<n;j++)
              {
                  it=b.find((a[i]+a[j])/2);
                  if(it!=b.end()) c++;
              }
         }
         cout<<c<<endl;
    }
    return 0;
}
