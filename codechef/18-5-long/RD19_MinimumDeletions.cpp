#include <bits/stdc++.h>
using namespace std;

long gcd(long a,long b)
{
     if(a==0)  return b;
     else      gcd(b%a,a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
         long n,ans;
         cin>>n;
         long a[n];
         for(long i=0;i<n;i++)     cin>>a[i];
         sort(a,a+n);
         ans=a[0];
         for(long i=1;i<n;i++)     ans=gcd(a[i],ans);
         if(ans==1)      cout<<"0\n";
         else            cout<<"-1\n";
    }
    return 0;
}
