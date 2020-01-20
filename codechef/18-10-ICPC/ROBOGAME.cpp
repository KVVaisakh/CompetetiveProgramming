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
    ll t;
    string s;
    cin>>t;
    while(t--)
    {
    	ll nodots=0,last=-10,flag=0;
    	cin>>s;
    	for(ll i=0;i<s.length();i++)
    	{
    		if(s[i]!='.')
    		{
    			if((last+int(s[i])-48)>nodots)
    			{
    				flag=1;
    				break;
    			}
    			nodots=0;
    			last=int(s[i])-48;
    		}
    		else
    			nodots++;
       	}
    	if(flag==1)		cout<<"unsafe\n";
    	else			cout<<"safe\n";
    }
    return 0;
}