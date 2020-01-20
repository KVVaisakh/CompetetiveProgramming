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
    int t,n,val,a[130]={0},c=0;
    for(int i=1;i<130;i++)	
    {
    	val=0;
    	for(int j=i-2;j>=0;j--)
    	{
    		if(a[j]==a[i-1])
    		{
    			val=i-j-1;
    			break;
    		}
    	}
    	a[i]=val;
    }	
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	c=0;
    	for(int i=0;i<n;i++)
    	{
    		if(a[i]==a[n-1])	c++;
    	}
    	cout<<c<<endl;
    }
    return 0;
}