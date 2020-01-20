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
    ll t,n,last,ttime;
    cin>>t;
    while(t--)
    {
    	cin>>n;   
    	ttime=0; 	
    	string s[n];	
    	for(int i=0;i<n;i++)    	
    	{
    		ll time=0;
    		cin>>s[i];
    		last=0;
    		for(int j=0;j<s[i].length();j++)
    		{
    			if(s[i][j]=='d' || s[i][j]=='f')
    			{
    				if(last==0)		
    				{
    					time+=2;
    					last=1;
    				}
    				else if(last==1)
    				{
    					time+=4;
    				}
    				else if(last==2)
    				{
    					time+=2;
    					last=1;
    				}
    			}
    			else
    			{
    				if(last==0)		
    				{
    					time+=2;
    					last=2;
    					//cout<<s[i][j]<<"b";
    				}
    				else if(last==1)
    				{
    					time+=2;
    					last=2;
    				}
    				else if(last==2)
    				{
    					time+=4;
    					//cout<<s[i][j]<<"a";
    				}
    			}
    		}
    		for(int j=0;j<i;j++)	if(s[i]==s[j])	{	time=time/2;	break; 	}
    		ttime+=time;
    	}
    	cout<<ttime<<"\n";
    }    
    return 0;
}