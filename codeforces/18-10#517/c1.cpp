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
    ll a,b,mn,mx,i=1;
    cin>>a>>b;
    mn=min(a,b);
    mx=max(a,b);
    stack<ll>smn;
    stack<ll>smx;
    queue<ll>stemp;
    while(mn!=0)
    {
    	if(i<=mn)
    	{
    		mn=mn-i;
    		smn.push(i);
    		i++;
    	}
    	else
    	{
    		mn=mn+smn.top();
    		stemp.push(smn.top());
    		smn.pop();
    	}
    }
    while(mx!=0)
    {
    	while(!stemp.empty())
    	{
            if(mx>=stemp.front())
            {
                mx-=stemp.front();
                smx.push(stemp.front());
                stemp.pop();
            } 
            else    break;   		
    	}
    	if(i<=mx)
    	{
    		mx=mx-i;
    		smx.push(i);
    		i++;
    	}
    	else	break;
    }

    if(a==min(a,b))
    {
        if(smn.size()==0)   cout<<"0";
        else
        {
            cout<<smn.size()<<endl;
            while(!smn.empty())
            {
                cout<<smn.top()<<" ";
                smn.pop();
            }
        }    	
    	cout<<endl<<smx.size()<<endl;
    	while(!smx.empty())
    	{
    		cout<<smx.top()<<" ";
    		smx.pop();
    	}
    }
    else
    {
        if(smx.size()==0)   cout<<"0";
        else
        {
            cout<<smx.size()<<endl;
            while(!smx.empty())
            {
                cout<<smx.top()<<" ";
                smx.pop();
            }
        }    	
    	cout<<endl<<smn.size()<<endl;
    	while(!smn.empty())
    	{
    		cout<<smn.top()<<" ";
    		smn.pop();
    	}
    }
    return 0;
}
