#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,q,i=100,c=0;
    cin>>n;
    while(n)
    {
        if(n>=i)
        {
            q=n/i;
            n=n-q*i;
            c=c+q;
        }
        if(i==100 && n<i)   i=20;
        else if(i==20 && n<i)   i=10;
        else if(i==10 && n<i)   i=5;
        else i=1;
    }
    cout<<c;
    return 0;
}
