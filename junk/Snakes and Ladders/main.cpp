#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long n,m,l[100][2],s[100][2],flag=0,np=0;
        vector < int > level(101,0);
        vector < vector <int> >a(100);
        vector < bool > visited(101,0);
        for(long i=1;i<100;i++) for(long j=i+1;j<i+7;j++) if(j<=100)  a[i].push_back(j);
        cin>>n;
        for(long i=0;i<n;i++)
        {
            cin>>l[i][0]>>l[i][1];
            for(int j=1;j<7;j++)
                if((l[i][0]-j)>0)
                {
                    a[l[i][0]-j].erase(a[l[i][0]-j].begin()+j-1);
                    a[l[i][0]-j].push_back(l[i][1]);
                }
                else break;

        }
        cin>>m;
        for(long i=0;i<m;i++)
        {
            cin>>s[i][0]>>s[i][1];
            if(s[i][0]==99 || s[i][0]==98 ||s[i][0]==97 ||s[i][0]==96 ||s[i][0]==95 ||s[i][0]==94)
                np++;
            for(int j=1;j<7;j++)
                if((s[i][0]-j)>0)
                {
                    a[s[i][0]-j].erase(a[s[i][0]-j].begin()+j-1);
                    a[s[i][0]-j].push_back(s[i][1]);
                }
                else break;
        }
        queue <int> q;
        q.push(1);
        while(!q.empty())
        {
            if(np==6)   break;
            int f=q.front();
            if(f==100)
            {
                cout<<level[100]<<endl;
                flag=1;
                break;
            }
            q.pop();
            visited[f]=1;
            for(long i=0;i<a[f].size();i++)
            {
                if(!visited[a[f][i]])
                {
                    q.push(a[f][i]);
                    visited[a[f][i]]=1;
                    level[a[f][i]]=level[f]+1;
                }
            }
        }
        if(!flag)   cout<<"-1"<<endl;
    }
    return 0;
}
