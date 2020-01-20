#include <bits/stdc++.h>
using namespace std;

vector < long > node[100005];
vector < long > np;
long temp;
int visited[100001];

void dfs(long n)
{
    visited[n]=1;
    temp++;
    for(long i=0;i<node[n].size();i++)      if(visited[node[n][i]]==0)      dfs(node[n][i]);
}


int main()
{
    long n,p,c=0;
    cin>>n>>p;
    long x,y;
    for(long i=0;i<p;i++)
    {
        cin>>x>>y;
        node[x].push_back(y);
        node[y].push_back(x);
    }
    for(long i=0;i<100000;i++)
        visited[i]=0;
    for(long i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            temp=0;
            dfs(i);
            np.push_back(temp);
            c++;
        }
    }
    long long output =(n*(n-1)/2);
    for(long i=0;i<c;i++)
        output-=(np[i]*(np[i]-1)/2);
    cout<<output;
    return 0;
}
