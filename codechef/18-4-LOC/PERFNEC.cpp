#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long s,g,q,r,d,q,x,y,c[5]={0},flag=0,t1,t2,t3;
    vector < pair(long long,int) > m;
    cin>>s>>g>>q>>r>>d>>q;
    m.push_back(make_pair(min(d+s,g+r),0);
    m[0].first=min(m[0].first,q+q);
    m.push_back(min(g+d,q+r),1);
    m.push_back(min(s+r,g+q),2);
    m.push_back(min(q+d,r+r),3);
    m.push_back(min(s+q,g+g),4);
    sort(m.begin(),m.end());
    while(q--)
    {
         long long cost=0;
         cin>>x>>y;
         while(x>=0)
         {
              if(y>2)
              {
                   c[4]+=y/2;
                   y=y%2;
                   x=x-c[4];
                   if(x<0)
                   {
                        cout<<"-1\n";
                        flag=1;
                        break;
                   }
              }
              else if(y<-2)
              {
                   c[0]+=y/2;
                   y=-y;
                   y=-(y%2);
                   x=x-c[0];
                   if(x<0)
                   {
                        cout<<"-1\n";
                        flag=1;
                        break;
                   }
              }
              else if(y==1)
              {
                   c[3]++;
                   x--;
              }
              else if(y==0)
              {
                   c[2]=x;
                   x=0;
              }
              else if(y==-1)
              {
                   c[1]++;
                   x--;
              }
         }
         if(!flag)
         if(!y)
         {
              if(m[0].second==0)
              {
                   t1=min(c[0],c[4]);
                   t2=min(c[1],c[3]);
                   t3=c[2]/2;
                   cost+=(t1+t2+t3)*m[0].first;
                   c[0]-=t1;
                   c[4]-=t1;
                   c[1]-=t2
                   c[3]-=t2;
                   c[2]-=t1;
              }
              if(m[0].second==1)
              {

              }
         }
    }
    return 0;
}
