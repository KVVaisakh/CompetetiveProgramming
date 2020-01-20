#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;
static int a[101];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k,temp,sum=0,z=0;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    {
    	cin>>temp;
    	a[temp]++;
    }
    for(ll i=0;i<101;i++)
    {
    	if(a[i]!=0)
    	{
    		sum+=(a[i]%k);
    		z++;
    	}
    }
    cout<<max(z*k*int(n/z)-n,sum);
    return 0;
}