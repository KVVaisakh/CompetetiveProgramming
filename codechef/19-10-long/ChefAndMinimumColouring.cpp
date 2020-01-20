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
    ll t,m,n,out;    
    ll max_val=pow(10,9)+1;
    cin>>t;
    while(t--)
    {
    	cin>>n>>m;
    	vector< vector<ll> > a( m,vector < ll > (0,0) );
    	vector < ll > selected;
    	for(ll i=0;i<n;i++)
    	{
    		ll temp;
    		cin>>temp;
    		a[i%m].pb(temp);
    	}
    	for(ll i=0;i<m;i++)	sort(a[i].begin(),a[i].end());
    	sort(a.begin(),a.end());

    	// for(int i=0;i<m;i++)
    	// {
    	// 	for(int j=0;j<a[i].size();j++)
    	// 		cout<<a[i][j]<<" ";
    	// 	cout<<endl;
    	// }


    	ll index[m]={0},dif,maxm,minm=a[m-1][0],count=1,ind;
    	for(ll i=0;i<m-1;i++)								//setting the initial values
    	{
    		for(ll j=1;j<a[i].size();j++)
    		{   			
    			if(a[i][j]<=a[m-1][0])	
    			{
    				index[i]=j;
    				count++;
    			}
    			else	
    			{
    				break;
    			}
    		}   		
    		selected.pb(a[i][index[i]]);		
    		minm=min(minm,a[i][index[i]]);
    	}    	
    	selected.pb(a[m-1][0]);
    	map <ll,ll> mapm;
    	//cout<<"Selected :\n";

    	//for(int i=0;i<selected.size();i++)	cout<<selected[i]<<" ";
    	//cout<<endl;
    	for(int i=0;i<selected.size();i++)	mapm[selected[i]]++;

    	dif=a[m-1][0]-minm;
    	while(count<=n)
	    {
	    	minm=max_val;
	    	ind=-1;
	    	for(ll i=0;i<m;i++)	
	    	{
	    		if(a[i].size()-1>index[i])	
	    		{
	    			if(minm>a[i][index[i]+1])
	    			{
	    				minm=a[i][index[i]+1];
	    				ind=i;
	    			}
	    		}
	    	}
	    	if(ind!=-1)
	    	{
	    		if(mapm[selected[ind]]==1)		mapm.erase(selected[ind]);
	    		else						mapm[selected[ind]]--;
	    		mapm[minm]++;
	    		selected[ind]=minm;
	    		index[ind]+=1;
	    	}
	    	else break;
	    	//cout<<"ind:"<<ind<<endl;
	    	//cout<<"Selected :";
	    	//for(int i=0;i<selected.size();i++)	cout<<selected[i]<<" ";
    		//cout<<endl;
    		map<ll,ll>::iterator mapmin=mapm.begin();
	    	dif=min(dif,minm-mapmin->first);
	    	//cout<<"dif "<<dif<<endl;
	    	count++;		    	    	
	    }
	    cout<<dif<<endl;
    }
    return 0;
}