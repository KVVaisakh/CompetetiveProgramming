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
    ll m,n,i;
    cin>>n>>m;
    ll a[n+2],on[n],off[n],ontot[n]={0},offtot[n]={0};
    a[0]=0;
    a[n+1]=m;
    for(i=1;i<=n;i++)     cin>>a[i];
    if(n%2==0)
    {
        for(i=0;i<n+1;i=i+2)
        {
            on[i/2]=a[i+1]-a[i];
            cout<<on[i/2];
        }
        cout<<endl;
        off[0]=0;
        for(i=2;i<n+1;i=i+2)
        {
            off[i/2]=a[i+1]-a[i];
            cout<<off[i/2];
        }
        cout<<endl;
        ontot[n/2+1]=0;
        for(i=n/2;i>=0;i--)
        {
            ontot[i]=ontot[i+1]+on[i];
            cout<<ontot[i]<<" ";
        }
        cout<<endl;
        for(i=n/2-1;i>=0;i--)
        {
            offtot[i]=offtot[i+1]+off[i];
            cout<<offtot[i];
        }
        cout<<endl;
        ll maxdiff=0;
        for(i=0;i<n/2;i++)
        {
            if(off[i]-1>ontot[i]-offtot[i])
            {
                maxdiff=max(maxdiff,off[i]-1-ontot[i]+offtot[i]);
                cout<<maxdiff<<" "<<off[i]<<" "<<ontot[i]<<" "<<offtot[i];
            }
        }
        cout<<endl<<ontot[0]+maxdiff;
    }
    else
    {

    }
    return 0;
}
