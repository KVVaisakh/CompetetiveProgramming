#include <bits/stdc++.h>
using namespace std;

vector < int > xs;
vector < int > ys;

int area(x,y)
{

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long double n,x,y,tx=0,ty=0,dist=0;
        xs.clear();
        ys.clear();
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            xs.push_back(x);
            ys.push_back(y);
            tx+=x;
            ty+=y;
        }
        tx/=n;
        ty/=n;
        int j=0;
        for(int i=0;i<n;i++)    dist=max(dist,sqrt(pow(xs[i]-tx,2),pow(ys[i]-tx,2)));
        tx=int(tx);
        ty=int(ty);
        int a[2]={{0,0},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1},{0,1},{2,2},{2,1},{2,0},{2,-1},{2,-2},{1,-2},{0,-2},{-1,-2},{-2,-2},{-2,-1},{-2,0},{-2,1},{-2,2},{-1,2},{0,2},{1,2}}
        for(int i=0;i<dist;i++)     if(area(tx+a[i][0],ty+a[i][1]))    cout<<tx+a[i][0]<<" "<<ty+a[i][1]<<endl;
    }
    return 0;
}
