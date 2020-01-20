#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    while(cin>>n)
    {
         long long a=0,b=1,c=1;
         for(long long i=0;i<n;i++)
         {
              a=b%1000000007;
              b=c%1000000007;
              c=(a+b)%1000000007;
         }
         cout<<a<<endl;
    }
    return 0;
}
