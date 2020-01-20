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
    ll t,l;
    cin>>t;
    cout<<std::fixed;
    while(t--)
    {
    	cin>>l;
    	vector < string >s(l,"");
    	vector < string >a;
    	vector < string >b;
    	for(ll i=0;i<l;i++)
    	{
    		cin>>s[i];
    		ll v=0,bob1=0;
    		for(ll j=0;j<s[i].size()-2;j++)
    		{
    			v=0;
    			for(int k=0;k<3;k++)	if( s[i][j+k]=='a' ||s[i][j+k]=='e' ||s[i][j+k]=='i' ||s[i][j+k]=='o' ||s[i][j+k]=='u' )	v++;
    			if(v<=1)
    			{
    				b.pb(s[i]);
    				bob1=1;
    				break;
    			}
    		}
    		if(!bob1)	a.pb(s[i]);
    	}
    	map <char, ll> alice;
    	map <char, ll>aliceInd;
    	map <char, ll> bob;
    	map <char, ll>bobInd;
    	for(ll i=0;i<a.size();i++)
    	{
    		//cout<<a[i]<<" ";
    		int flag[27]={0};
    		for(ll j=0;j<a[i].size();j++)	
    		{
    			alice[a[i][j]]++;
    			if(flag[a[i][j]-'a']==0)	aliceInd[a[i][j]]++;
    			flag[a[i][j]-'a']=5;
    		}
    	}
    	//cout<<endl;
    	for(ll i=0;i<b.size();i++)
    	{
    		//cout<<b[i]<<" ";    		
    		int flag[27]={0};
    		for(ll j=0;j<b[i].size();j++)	
    		{
    			bob[b[i][j]]++;
    			if(flag[b[i][j]-'a']==0)	bobInd[b[i][j]]++;
    			flag[b[i][j]-'a']=5;
    		}
    	}
    	//cout<<endl;
    	map<char, ll>::iterator aliceItr; 
    	map<char, ll>::iterator bobItr; 
    	map<char, ll>::iterator aliceIndItr; 
    	map<char, ll>::iterator bobIndItr; 
    	ld aliceScore=1,bobScore=1;
    	for(aliceItr=alice.begin(),aliceIndItr=aliceInd.begin();aliceItr!=alice.end();aliceItr++,aliceIndItr++)
    	{
    		aliceScore*=(aliceIndItr->second/pow(aliceItr->second,a.size()));
    		//cout<<aliceIndItr->second<<" "<<aliceItr->second<<" "<<a.size()<<endl;
    	}
    	for(bobItr=bob.begin(),bobIndItr=bobInd.begin();bobItr!=bob.end();bobItr++,bobIndItr++)
    	{
    		bobScore*=(bobIndItr->second/pow(bobItr->second,b.size()));
    	}
    	//cout<<aliceScore<<" "<<bobScore<<endl;
    	if (aliceScore/bobScore>10000000)
    	{
    		cout<<"Infinity\n";
    	}
    	else if (bobScore==0)
    	{
    		cout<<"Infinity\n";
    	}
    	else
    	cout<<std::setprecision(9)<<aliceScore/bobScore<<endl;
    }
    return 0;
}