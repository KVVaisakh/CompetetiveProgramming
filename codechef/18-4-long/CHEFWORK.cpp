#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,z[3]={0,0,0};
    long sum=0,tsum=0;
    cin>>n;
    int t[n],c[n];
    vector < pair <int,int> >x;
    for(int i=0;i<n;i++)      cin>>c[i];
    for(int i=0;i<n;i++)      cin>>t[i];
    for(int i=0;i<n;i++)      x.push_back(make_pair(c[i],t[i]));
    sort(x.begin(),x.end());
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<3;j++)
         {
              if(!z[j])
              if(x[i].second==j+1)
              {
                   z[j]=1;
                   if(j<2)    sum=sum+x[i].first;
                   else       tsum=x[i].first;
              }
         }
         if(z[0] && z[1] && z[2])  break;
    }
    if(z[1] && z[0] && z[2])    cout<<min(tsum,sum);
    else if(z[0] && z[1])        cout<<sum;
    else                           cout<<tsum;
    return 0;
}
