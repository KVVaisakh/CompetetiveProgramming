#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
#define mod 1000000007

using namespace std;
vector<ll> a;
vector<ll> tree[10000000];

void build(ll node,ll start,ll end)
{
    if(start==end)  tree[node].pb(a[start]);
    else
    {
        ll mid=(start+end)/2;
        build(2*node,start,mid);
        build(2*node+1,mid+1,end);
        ll sl=tree[2*node].size(),sr=tree[2*node+1].size();
        ll l=0,r=0;
        while(l<sl && r<sr && tree[node].size()<51)
        {
            if(tree[2*node][l]>tree[2*node+1][r])
            {
                tree[node].pb(tree[2*node][l]);
                l++;
            }
            else
            {
                tree[node].pb(tree[2*node+1][r]);
                r++;
            }
        }
        for(;l<sl && tree[node].size()<51;l++)    tree[node].pb(tree[2*node][l]);
        for(;r<sr && tree[node].size()<51;r++)    tree[node].pb(tree[2*node+1][r]);
    }
}

void update(ll node,ll start,ll end,ll index,ll value)
{
    if(start==end)
    {
        tree[node].clear();
        tree[node].pb(value);
    }
    else
    {
        ll mid=(start+end)/2;
        if(index<=mid)    update(2*node,start,mid,index,value);
        else              update(2*node+1,mid+1,end,index,value);
        ll sl=tree[2*node].size(),sr=tree[2*node+1].size();
        ll l=0,r=0;
        tree[node].clear();
        while(l<sl && r<sr && tree[node].size()<51)
        {
            if(tree[2*node][l]>tree[2*node+1][r])
            {
                tree[node].pb(tree[2*node][l]);
                l++;
            }
            else
            {
                tree[node].pb(tree[2*node+1][r]);
                r++;
            }
        }
        for(;l<sl && tree[node].size()<51;l++)    tree[node].pb(tree[2*node][l]);
        for(;r<sr && tree[node].size()<51;r++)    tree[node].pb(tree[2*node+1][r]);
    }
}

vector<ll> query(ll node,ll start,ll end,ll left,ll right)
{
    vector<ll> blank;
    if(right<start || left>end)
    {
        blank.pb(0);
        return blank;
    }        
    if(left<=start && right>=end)
        return tree[node];
    ll mid=(start+end)/2;
    vector<ll> v1=query(2*node,start,mid,left,right);
    vector<ll> v2=query(2*node+1,mid+1,end,left,right);
    vector<ll> temp;
    ll sl=v1.size(),sr=v2.size();
    ll l=0,r=0;
    while(l<sl && r<sr && temp.size()<51)
    {
        if(v1[l]>v2[r])
        {
            temp.pb(v1[l]);
            l++;
        }
        else
        {
            temp.pb(v2[r]);
            r++;
        }
    }
    for(;l<sl && temp.size()<51;l++)    temp.pb(v1[l]);
    for(;r<sr && temp.size()<51;r++)    temp.pb(v2[r]);
    return temp;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,q,x,y,z;
    cin>>n>>q;
    a.resize(n+1);
    for(ll i=1;i<=n;i++) cin>>a[i];
    build(1,1,n);
    for(ll i=0;i<q;i++)
    {
        cin>>x>>y>>z;
        if(x==1)
        {
            a[y]=z;
            update(1,1,n,y,z);
        }
        if(x==2)
        {
            int flag=0;
            vector<ll> temp=query(1,1,n,y,z);
            for(ll i=0;i<temp.size()-2;i++)
                if(temp[i]<(temp[i+1]+temp[i+2]))
                {
                    cout<<temp[i]+temp[i+1]+temp[i+2]<<endl;
                    flag=1;
                    break;
                }
            if(!flag)   cout<<"0"<<endl;
        }
    }
    return 0;
}
