#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

void maxSubArraySum(ll a[], ll n,ll limit)
{
    ld maximum=LDBL_MIN,sum=0;
    ll k;
    for(ll i=1;i<=n;i++)
    {
        sum=0;
        for(ll j=i+limit-1;j<=n;j++)
        {
            if(j==(i+limit-1))
            {
                for(k=i;k<=j;k++)
                {
                    sum+=a[k];
                }
                sum=sum/(j-i+1);
                maximum=max(maximum,sum);
            }
            else
            {
                sum=(sum*(j-i)+a[k])/(j-i+1);
                k++;
                maximum=max(maximum,sum);
            }
        }
    }
    cout<<setprecision(10)<<fixed<<maximum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll a[n+1];
    a[0]=0;
    for(ll i=1;i<=n;i++)     cin>>a[i];
    maxSubArraySum(a,n,k);
    return 0;
}
