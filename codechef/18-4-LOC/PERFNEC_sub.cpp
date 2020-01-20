#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a,s,g,q,r,d,x,y,t;
    cin>>s>>g>>q>>r>>d>>a;
    while(a--)
    {
         cin>>x>>y;
         if(x==0 && y==0)   cout<<"0"<<endl;
         else if(x==0 && y)      cout<<"-1"<<endl;
         else if(x==1)
         {
              if(y==-2)  cout<<s<<endl;
              else if(y==-1)  cout<<g<<endl;
              else if(y==0)   cout<<q<<endl;
              else if(y==1)   cout<<r<<endl;
              else if(y==2)   cout<<d<<endl;
              else  cout<<"-1\n";
         }
         else if(x==2)
         {
              if(y==4)   cout<<2*d;
              else if(y==-4)  cout<<2*s;
              else if(y==3)   cout<<r+d;
              else if(y==-3)  cout<<s+g;
              else if(y==2)   cout<<min(q+d,r+r);
              else if(y==-2)  cout<<min(s+q,g+g);
              else if(y==1)   cout<<min(g+d,q+r);
              else if(y==-1)  cout<<min(s+r,g+q);
              else if(y==0)
              {
                   t=min(d+s,g+r);
                   t=min(t,q+q);
                   cout<<t;
              }
              else       cout<<"-1";
              cout<<endl;
         }
    }
    return 0;
}
