#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,x,k,e=0,o=0,xe,xo;
        cin>>n>>m>>x>>k;
        string s;
        cin>>s;
        if(m*x<n || k<n)   cout<<"no";
        else
        {
            for(long i=0;i<k;i++)
                if(s[i]=='E')   e++;
                else            o++;
            if(m%2)
            {
                if(((m/2)+1)*x>o)   xo=o;
                else                xo=((m/2)+1)*x;
            }
            else
            {
                if((m/2)*x>o)       xo=o;
                else                xo=(m/2)*x;
            }
            if((m/2)*x>e)       xe=e;
            else                xe=(m/2)*x;
            if(n>(xe+xo))       cout<<"no";
            else                cout<<"yes";
        }
        cout<<endl;
    }
    return 0;
}
