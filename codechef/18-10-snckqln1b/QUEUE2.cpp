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
    ll t,n,m,k,l,temp,i,j,r,mini;
    vector<ll> a;
    cin>>t;
    while(t--)
    {
    	a.clear();
    	cin>>n>>m>>k>>l;
    	for(i=0;i<n;i++)
    	{
    		cin>>temp;
    		a.pb(temp);
    	}
    	sort(a.begin(),a.end());    	
    	i=0;
    	r=0;
    	mini=LLONG_MAX/l;
    	while(i<a.size())
    	{
    		if(i)	m=m-a[i]/l+a[i-1]/l;
    		else	m=m-a[0]/l;
			if((mini*l-r)>=(m*l-a[i]%l))
			{
				mini=m;
				r=a[i]%l;
			}    
			m++;
			i++;		
    	}
    	if(i<k)
    	{
    		if(i)	m=m-k/l+a[i-1]/l;
    		else	m=m-k/l;
    		if((mini*l-r)>=(m*l-k%l))
    		{
    			mini=m;
    			r=k%l;
    		}
    	}
    	cout<<mini*l+l-r<<endl;
    }
    return 0;
}
