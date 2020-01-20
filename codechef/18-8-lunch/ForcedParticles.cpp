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
    ll t,m,n,tl;
    vector< vector<ll> > a;
    cin>>t;
    while(t--)
    {
        a.clear();
        string tx;
        cin>>m>>n;
        for(ll i=0;i<m;i++)
        {
            vector< ll >temp;
            cin>>tx;
            for(ll j=0;j<n;j++)
            {
                tl=int(tx[j])-48;
                temp.pb(tl);
            }
            a.pb(temp);
        }
        string s;
        cin>>s;
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='L')
            {
                for(ll k=0;k<m;k++)
                {
                    ll c=0;
                    for(ll l=0;l<n;l++)
                    {
                        if(a[k][l]) c++;
                    }
                    for(ll l=0;l<n;l++)
                    {
                        if(l<c) a[k][l]=1;
                        else    a[k][l]=0;
                    }
                }
            }
            else if(s[i]=='R')
            {
                for(ll k=0;k<m;k++)
                {
                    ll c=0;
                    for(ll l=0;l<n;l++)
                    {
                        if(a[k][l]) c++;
                    }
                    for(ll l=0;l<n;l++)
                    {
                        if(n-l>c) a[k][l]=0;
                        else    a[k][l]=1;
                    }
                }
            }
            else if(s[i]=='D')
            {
                for(ll k=0;k<n;k++)
                {
                    ll c=0;
                    for(ll l=0;l<m;l++)
                    {
                        if(a[l][k]) c++;
                    }
                    for(ll l=0;l<m;l++)
                    {
                        if(m-l>c) a[l][k]=0;
                        else    a[l][k]=1;
                    }
                }
            }
            else if(s[i]=='U')
            {
                for(ll k=0;k<n;k++)
                {
                    ll c=0;
                    for(ll l=0;l<m;l++)
                    {
                        if(a[l][k]) c++;
                    }
                    for(ll l=0;l<m;l++)
                    {
                        if(l<c) a[l][k]=1;
                        else    a[l][k]=0;
                    }
                }
            }
        }
        for(ll i=0;i<m;i++)
        {
            for(ll j=0;j<n;j++)
                cout<<a[i][j];
            cout<<"\n";
        }
    }
    return 0;
}
