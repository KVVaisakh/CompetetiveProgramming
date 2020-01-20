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
    int t,n,even;
    ll total;
    cin>>t;
    while(t--)
    {
    	priority_queue <int> middle;
    	cin>>n;
    	total=0;
    	int c[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>c[i];
    		if(c[i]%2==0)	even=1;
    		else			even=0;
    		for(int j=0;j<c[i];j++)
    		{
    			int temp;
    			cin>>temp;
    			if(j<c[i]/2)	total+=temp;
    			else if(!even && j==c[i]/2)	middle.push(temp);
    			//a[i][j]=temp;
    		}
    	}
    	while(!middle.empty())
    	{
    		total+=middle.top();
    		middle.pop();
    		if(!middle.empty())	middle.pop();
    	}
    	cout<<total<<endl;
    }
    return 0;
}