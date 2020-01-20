#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long double power(long double x,long long y)
{
    long double ans=1;
    x=fmod(x,MOD);
    while (y > 0)
    {
        if(y&1)     ans=fmod((ans*x),MOD);
        y=y>>1;
        x=fmod((x*x),MOD);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long double x=pow(5.0,0.5);
    long long n;
    long double x1=(1+x)/2,x2=(1-x)/2;
    while(cin>>n)
    {
         cout<<fmod(((power(x1,n)-power(x2,n))/x),MOD)<<endl;
    }

    return 0;
}
