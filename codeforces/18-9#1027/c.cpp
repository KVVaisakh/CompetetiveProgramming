#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,one=0,zero=0,ans=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(ll i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i]=='1')
            {
                if(zero==0)     one++;
                else
                {
                    zero--;
                    ans++;
                }
            }
            else
            {
                if(one==0)      zero++;
                else
                {
                    one--;
                    ans++;
                }
            }
        }
    }
    cout<<ans<<one<<zero;
    return 0;
}
