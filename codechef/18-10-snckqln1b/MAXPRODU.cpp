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
    ll t,n,k,p,d,r;
    cin>>t;
    while(t--)
    {
    	p=1;
    	cin>>n>>k;
    	if(2*n<(k*k+k))
    	{
    		cout<<"-1\n";
    		goto end;
    	}
    	d=n/k;
    	r=n%k;
    	if(r==0)
    	{
    		if(k%2==0)
    		{
    			for(ll i=d-k/2;i<=(d+k/2);i++)
    				if(i!=d)
    					p=((p*i)%mod*(i-1))%mod;
    		}
    		else
    		{
    			for(ll i=d-k/2;i<=(d+k/2);i++)
    				p=((p*i)%mod*(i-1))%mod;
    		}
    	}
    	else
    	{
    		if(k%2==0)
    		{
    			if(r<k/2)	for(ll i=d-k/2;i<=(d+k/2);i++)	if(i!=d-k/2+r)	p=((p*i)%mod*(i-1))%mod;
    			if(r==k/2)	for(ll i=d-k/2+1;i<=(d+k/2);i++)	p=((p*i)%mod*(i-1))%mod;
    			if(r>k/2)	for(ll i=d-k/2+1;i<=(d+k/2+1);i++)	if(i!=d+k/2-k+r+1)	p=((p*i)%mod*(i-1))%mod;
    			
    		}
    		else
    		{
    			if(r<k/2)	for(ll i=d-k/2+1;i<=(d+1+k/2);i++)	if(i!=d+1+k/2-r)	p=((p*i)%mod*(i-1))%mod;
    			if(r>k/2)	for(ll i=d-k/2;i<=(d+k/2+1);i++)	if(i!=d-k/2+k-r)	p=((p*i)%mod*(i-1))%mod;
    			
    		}
    	}
    	cout<<p<<endl;
    	end:;
    }
    return 0;
}