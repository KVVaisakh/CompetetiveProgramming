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
    ll t,a[3],x[2];
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2]>>x[0]>>x[1];
        if(a[0]+a[1]+a[2]!=x[0]+x[1])
        {
            cout<<"NO\n";
            goto last;
        }
        else
        {
            sort(a,a+3);
            sort(x,x+2);
            if(a[2]+a[1]<x[1])
            {
                cout<<"NO\n";
                goto last;
            }
            else
            {
                cout<<"YES\n";
            }

        }
        last:;
    }
    return 0;
}
