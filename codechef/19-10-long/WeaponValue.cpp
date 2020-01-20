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
    ll n,a[10]={0};
    string s;
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	while(n--)
    	{
    		cin>>s;
    		for(int i=0;i<10;i++)
    		{
    			a[i]+=(int(s[i])-int('0'));
    		}
    	}
    	int c=0;
    	for(int i=0;i<10;i++)
    	{
    		if(a[i]%2==1)	c++;
    		a[i]=0;
    	}
    	cout<<c<<endl;
    }
    return 0;
}