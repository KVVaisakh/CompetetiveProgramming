#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int r,c,output=1;
    cin>>r>>c;
    vector < string > a;
    string temp;
    for(int i=0;i<r;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]=='W')
            {
                if(i)    if(a[i-1][j]=='S')
                {
                    output=0;
                    break;
                }
                if(j)   if(a[i][j-1]=='S')
                {
                    output=0;
                    break;
                }
                if((i+1)<r)    if(a[i+1][j]=='S')
                {
                    output=0;
                    break;
                }
                if((j+1)<c)   if(a[i][j+1]=='S')
                {
                    output=0;
                    break;
                }
                if(output)
                {
                    if((i+1)<r)    if(a[i+1][j]=='.') a[i+1][j]='D';
                    if(i)          if(a[i-1][j]=='.') a[i-1][j]='D';
                    if((j+1)<c)    if(a[i][j+1]=='.') a[i][j+1]='D';
                    if(j)          if(a[i][j-1]=='.') a[i][j-1]='D';
                }
            }
        }
        if(!output) break;
    }
    if(output)
    {
        cout<<"Yes";
        for(int i=0;i<r;i++)
        {
            cout<<endl;
            for(int j=0;j<c;j++)
                cout<<a[i][j];
        }
    }
    else    cout<<"No";
    return 0;
}
