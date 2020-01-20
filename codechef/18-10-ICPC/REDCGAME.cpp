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
    ll t,n,k,temp,sum;
    vector<ll> a;
    vector<ll> r;
    cin>>t;
    while(t--)
    {
    	sum=0;
    	a.clear();
    	r.clear();
    	cin>>n>>k;
    	for(ll i=0;i<n;i++)
    	{
    		cin>>temp;
    		if(temp>k)		a.pb(temp);
    		else			r.pb(temp);
    	}
    	if(a.size()>1)	sort(a.begin(),a.end());
        if(a.size()!=0)
    	for(ll i=0;i<a.size()-1;i++)
    	{
    		a[i+1]=a[i+1]-(a[i]-k);
    		a[i]=k;
    	}
    	//for(ll i=0;i<n;i++)	cout<<a[i]<<" ";
    	sum=accumulate(r.begin(),r.end(),0);
    	if(a.size()>1)    	sum=sum+(a.size()-2)*k+a[a.size()-1]+a[a.size()-2];
    	else if(a.size()==1)	sum=sum+a[0];
    	cout<<sum<<endl;
    }
    return 0;
}
