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
        int n,k,x[200],c=0,flag=0;
        vector < int > watered(201,0);
        cin>>n>>k;
        for(int i=0;i<k;i++)
        {
            cin>>x[i];
            watered[x[i]]=1;
        }
        c++;
        start:
            int j=0;
            vector < int > done (200,0);
            flag=0;
            for(int i=1;i<=n;i++)
            {
                if(watered[i]==0)
                {
                    if( watered[i-1] || watered[i+1] )
                    {
                        done[j]=i;
                        j++;
                        flag=1;
                    }
                }
            }
            if(flag)
            {
                c++;
                for(int i=0;done[i];i++)
                {
                    watered[done[i]]=1;
                }
            }
            for(int i=1;i<=n;i++)   if(watered[i]==0){goto start;}
            cout<<c<<endl;
    }
    return 0;
}
