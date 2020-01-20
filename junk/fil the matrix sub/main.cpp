#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,q,flag;
    cin>>t;
    for(long k=0;k<t;k++)
    {
        flag=1;
        cin>>n>>q;
        long long b[q][3],z=0,y=0,f;
        vector<int>a;
        vector<int>c;
        a.assign(1000000,0);
        c.assign(1000000,0);
        for(long long i=0;i<q;i++)
        {
            y=0;
            f=0;
            for(long j=0;j<3;j++)
            {
                cin>>b[i][j];
                if(b[i][2]>1) goto last;
                if(j!=2)
                {
                    for(long long e=0;e<z;e++)
                    {
                        if(b[i][j]-1==c[e])   y++;
                        if(y==1 && j==0)    f=1;
                    }
                }
            }
            if(y==1 && f)    y=3;
            if(b[i][0]==b[i][1])
            {
                if(b[i][2])
                {
                    flag=0;
                    goto last;
                }
                else
                {
                    c[z]=b[i][0]-1;
                    goto seclast;
                }
            }
            if(y==0)
            {
                a[b[i][0]-1]=0;
                a[b[i][1]-1]=b[i][2];
                c[z]=b[i][0]-1;
                z++;
                c[z]=b[i][1]-1;
            }
            else if(y==3)
            {
                a[b[i][1]-1]=a[b[i][0]-1]-b[i][2];
                c[z]=b[i][1]-1;
            }
            else if(y==1)
            {
                a[b[i][0]-1]=a[b[i][1]-1]+b[i][2];
                c[z]=b[i][1]-1;
            }
            else if(y==2)
            {
                if(a[b[i][0]-1]!=a[b[i][1]-1]+b[i][2])  flag=0;
            }
            seclast:
            z++;
        }
        last:
        if(flag) cout<<"yes\n";
        else     cout<<"no\n";
    }
    return 0;
}
