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
    ll n,m,k,sum=0;
    cin>>n>>m>>k;
    n--;
    m--;
    for(ll i=0;i<k;i++)
    {
    	sum+=2*(n+m);
    	n=n-4;
    	m=m-4;
    }
    cout<<sum;
    return 0;
}