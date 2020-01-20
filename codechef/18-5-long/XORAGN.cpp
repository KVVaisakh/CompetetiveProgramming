#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    long long n,temp;
    while(t--)
    {
         cin>>n;
         long long ans=0;
         for(long long i=0;i<n;i++)
         {
              cin>>temp;
              ans=ans^(2*temp);
         }
         cout<<ans<<endl;
    }
    return 0;
}
