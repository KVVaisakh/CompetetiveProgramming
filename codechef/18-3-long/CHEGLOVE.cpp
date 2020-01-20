#include <stdio.h>

using namespace std;

int main()
{
        int t;
        scanf("%d",&t);
        while(t--)
        {
                long n,f=1,b=1;
                scanf("%ld",&n);
                long long l[n],g[n];
                for(long i=0; i<n; i++)   scanf("%lld",&l[i]);
                for(long i=0; i<n; i++)   scanf("%lld",&g[i]);
                for(long i=0; i<n; i++)
                {
                        if(l[i]>g[i])
                        {
                                f=0;
                                break;
                        }
                }
                for(long i=0; i<n; i++)
                {
                        if(l[n-i-1]>g[i])
                        {
                                b=0;
                                break;
                        }
                }
                if(f&&b) printf("both");
                else if(f) printf("front");
                else if(b) printf("back");
                else printf("none");
                printf("\n");
        }
        return 0;
}
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
        long n,temp,f=1,b=1;
        cin>>n;
        vector< long >l;
        vector< long >g;
        for(long i=0;i<n;i++)
        {
            cin>>temp;
            l.push_back(temp);
        }
        for(long i=0;i<n;i++)
        {
            cin>>temp;
            g.push_back(temp);
        }
        for(long i=0;i<n;i++)
        {
            if(l[i]>g[i])
            {
                f=0;
                break;
            }
        }
        for(long i=0;i<n;i++)
        {
            if(l[n-i-1]>g[i])
            {
                b=0;
                break;
            }
        }
        if(f&&b)    cout<<"both";
        else if(f)  cout<<"front";
        else if(b)  cout<<"back";
        else        cout<<"none";
        cout<<endl;
    }
    return 0;
}
