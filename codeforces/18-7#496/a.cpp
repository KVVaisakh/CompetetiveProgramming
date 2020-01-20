#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    ll a[n],b[n],c=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1 && i!=0)
        {
            b[c]=a[i-1];
            c++;
        }
    }
    b[c]=a[n-1];
    c++;
    cout<<c<<endl;
    for(ll i=0;i<c;i++)     cout<<b[i]<<" ";
    return 0;
}
