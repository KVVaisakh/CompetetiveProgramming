#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t,n,q,flag;
        cin>>n>>q;
        flag=1;
        int c[q][3],b[n][n];
        for(int i=0;i<q;i++)    for(int j=0;j<3;j++)    cin>>c[i][j];
        for(int i=0;i<n;i++)    for(int j=0;j<n;j++)    b[i][j]=0;
        for(int i=0;i<q;i++)    b[c[i][0]-1][c[i][1]-1]=c[i][2];
     /*   for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)    cout<<b[i][j];
            cout<<endl;
        }*/
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(  b[i][j]!=-b[j][i]  ||  b[i][j]!=b[j][i])
                {
                    flag=0;
                    goto end;
                }

        end:
        if(flag)    cout<<"yes\n";
        else        cout<<"no\n";
    return 0;
}
