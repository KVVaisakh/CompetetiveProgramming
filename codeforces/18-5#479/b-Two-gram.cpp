#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,max=0,t=0;
    string s,ans;
    vector< long long >a (10000,0);
    cin>>n>>s;
    for(long long i=0;i<n-1;i++)
    {
         a[s[i]*100+s[i+1]]++;
         t=a[s[i]*100+s[i+1]];
         if(max<t)
         {
              max=t;
              ans[0]=s[i];
              ans[1]=s[i+1];
         }
    }
    cout<<ans[0]<<ans[1];
    return 0;
}
