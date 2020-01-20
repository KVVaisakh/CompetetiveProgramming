#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,k;
    cin>>n>>k;
    for(long long i=0;i<k;i++)
    {
         if(n%10==0)     n=n/10;
         else n--;
    }
    cout<<n;
    return 0;
}
