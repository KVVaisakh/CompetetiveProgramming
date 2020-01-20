#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    long double x;
    x=(log2(n));
    if(x==int(x))   x++;
    else            x=ceil(x);
    cout<<x;
    return 0;
}
