#include <bits/stdc++.h>

using namespace std;
vector < long long > v;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        long long x,n,temp,reqsum;
        cin>>x>>n;
        reqsum=((n*(n+1)/2)-x);
        if(reqsum%2)    cout<<"impossible";
        else
        {
            v.clear();
            reqsum=reqsum/2;
            temp=n;
            for(;n!=0;n--)
            {
                if(reqsum==0)   break;
                else if (reqsum<n)            v.push_back(0);
                else if (n==x)                v.push_back(0);
                else if (reqsum==n+x)         v.push_back(0);
                else
                {
                    v.push_back(1);
                    reqsum-=n;
                }
            }
            if(reqsum)      cout<<"impossible";
            else
            {
                for(long long i=temp-1;i>=0;i--)
                {
                    if((temp-i)==x)    cout<<"2";
                    else if((temp-i)<=n)    cout<<"0";
                    else              cout<<v[i];
                }
            }
        }
        cout<<endl;
    }

    return 0;
}
