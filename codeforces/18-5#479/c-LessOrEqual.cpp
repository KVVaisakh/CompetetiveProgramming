#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,k,temp;
    vector< long long > a;
    cin>>n>>k;
    for(long long i=0;i<n;i++)
    {
         cin>>temp;
         a.push_back(temp);
    }
    sort(a.begin(),a.end());
    a.push_back(-1);
    if(k==0)
    {
          if(a[0]>1)   cout<<a[0]-1;
          else       cout<<"-1";
     }
    else if(a[k-1]==a[k] || a[k-1]>1000000000)     cout<<"-1";
    else                 cout<<a[k-1];
    return 0;
}
