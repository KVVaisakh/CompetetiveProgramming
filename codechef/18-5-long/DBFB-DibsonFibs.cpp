#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    long long m,n,result,a,b,temp;
    while(t--)
    {
         a=b=0;
         cin>>m>>n;
         for(long long i=0;i<m;i++)
         {
              cin>>temp;
              a=(a+temp)%1000000007;
         }
         for(long long i=0;i<m;i++)
         {
              cin>>temp;
              b=(b+temp)%1000000007;
         }
         a=(a%1000000007*m%1000000007)%1000000007;
         b=(b%1000000007*m%1000000007)%1000000007;
         result=(a%1000000007+b%1000000007)%1000000007;
         for(long long i=3;i<n;i++)
         {
              a=b%1000000007;
              b=result%1000000007;
              result=(a+b)%1000000007;
         }
         if(n==1)        cout<<a;
         else if(n==2)   cout<<b;
         else            cout<<result%1000000007;
         cout<<endl;
    }
    return 0;
}
