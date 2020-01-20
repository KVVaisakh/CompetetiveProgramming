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
    int t;
    cin>>t;
    ll x,y,m,n,k;
    cout<<std::fixed;
    while(t--)
    {
    	cin>>x>>y;
    	cin>>n>>m>>k;
    	vector< vector<ll> > a;
    	vector< vector<ll> > b;
    	vector< vector<ll> > c;
    	vector< ll >temp(2,0);

    	vector< pair<long double,int> > od;
    	vector< vector<long double > >ab;
    	vector< vector<long double > >odc;
    	for(ll i=0;i<n;i++)		
    	{	
    		cin>>temp[0]>>temp[1];	
    		temp[0]-=x;
    		temp[1]-=y;
    		a.pb(temp);	
    		od.pb(make_pair(sqrt(pow(temp[0],2)+pow(temp[1],2)),i));
    	}
    	for(ll i=0;i<m;i++)		
    	{	    		
    		vector< long double > t1;
    		cin>>temp[0]>>temp[1];		
    		temp[0]-=x;
    		temp[1]-=y;
    		b.pb(temp);	
    		od.pb(make_pair(sqrt(pow(temp[0],2)+pow(temp[1],2)),n+i));
    	}
    	for(ll i=0;i<k;i++)		
    	{	
    		cin>>temp[0]>>temp[1];		
    		temp[0]-=x;
    		temp[1]-=y;
    		c.pb(temp);	
    	}
    	// for(ll i=0;i<n;i++)	cout<<a[i][0]<<" "<<a[i][1]<<"\t";
    	// 	cout<<endl;
    	// for(ll i=0;i<m;i++)	cout<<b[i][0]<<" "<<b[i][1]<<"\t";
    	// 	cout<<endl;
    	// for(ll i=0;i<k;i++)	cout<<c[i][0]<<" "<<c[i][1]<<"\t";
    	// 	cout<<endl;
    	sort(od.begin(),od.end());
    	// for(ll i=0;i<od.size();i++)	cout<<od[i].first<<" "<<od[i].second<<"\t";
    	// cout<<endl;
    	for(ll i=0;i<a.size();i++)
    	{
    		vector< long double > t1;
    		for(ll j=0;j<b.size();j++)
    			t1.pb(sqrt(pow(a[i][0]-b[j][0],2)+pow(a[i][1]-b[j][1],2)));
    		ab.pb(t1);
    	}
    	// for(int i=0;i<a.size();i++)
    	// {
    	// 	for(int j=0;j<b.size();j++)
    	// 		cout<<ab[i][j]<<"\t";
    	// 	cout<<endl;
    	// }
    	// cout<<endl;
    	for(ll i=0;i<a.size()+b.size();i++)
    	{
    		vector< long double > t1;
    		for(ll j=0;j<c.size();j++)
    		{
    			if(i<n)	t1.pb(sqrt(pow(a[i][0]-c[j][0],2)+pow(a[i][1]-c[j][1],2)));
    			else	t1.pb(sqrt(pow(b[i-n][0]-c[j][0],2)+pow(b[i-n][1]-c[j][1],2)));
    		}
    		odc.pb(t1);
    	}
    	// for(int i=0;i<a.size()+b.size();i++)
    	// {
    	// 	for(int j=0;j<c.size();j++)
    	// 		cout<<odc[i][j]<<"\t";
    	// 	cout<<endl;
    	// }

    	long double minm=3*pow(10,9)+1;
    	long double dist=0;
    	for(ll i=0;i<a.size()+b.size();i++)
    	{
    		//cout<<od[i].second<<endl;
    		if(minm<od[i].first)	break;
    		if(od[i].second<n)
    		{
    			for(ll j=0;j<b.size();j++)
    			{
    				for(ll k=0;k<c.size();k++)
    				{
    					dist=od[i].first+ab[od[i].second][j]+odc[j+n][k];
    					minm=min(minm,dist);
    					//cout<<od[i].second<<" "<<j<<" "<<k<<" "<<dist<<" "<<od[i].first<<" "<<ab[od[i].second][j]<<" "<<odc[j+n][k]<<endl;
    				}
    			}
    		}
    		else
    		{
    			for(ll j=0;j<a.size();j++)
    			{
    				for(ll k=0;k<c.size();k++)
    				{
    					dist=od[i].first+ab[j][od[i].second-n]+odc[j][k]; 					
    					minm=min(minm,dist);
    					//cout<<od[i].second<<" "<<j<<" "<<k<<" "<<dist<<" "<<od[i].first<<" "<<ab[j][od[i].second-n]<<" "<<odc[j][k]<<endl;
    				}	
    			}
    		}
    	}
    	cout<<std::setprecision(9)<<minm<<endl;
    }
    return 0;
}