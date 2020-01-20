#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,d,damage,nd=1,c,x=1;
    vector < int > v;
    vector < long long > ed;
    cin>>t;
    while(t--)
    {
         string s;
         cin>>d>>s;
         long long i=0;
         c=0;
         v.clear();
         ed.clear();
         damage=0;
         nd=1;
         while(s[i]!='\0')
         {
              if(s[i]=='C') v.push_back(1);
              else       v.push_back(0);
              i++;
         }
         v.push_back(-1);
         i=0;
         while(v[i]>=0)
         {
              if(v[i])
              {
                   nd*=2;
                   ed.push_back(0);
              }
              else
              {
                   damage=damage+nd;
                   ed.push_back(nd);
              }
              i++;
         }
         int flag=1;
         while(damage>d)
         {
               flag=0;
               for(long long j=i-2;j>=0;j--)
               {
                   if(v[j] && !v[j+1])
                   {
                        damage=damage-ed[j+1]/2;
                        ed[j]=ed[j+1]/2;
                        ed[j+1]=0;
                        v[j+1]=1;
                        v[j]=0;
                        c++;
                        j++;
                        flag=1;
                        if(damage<=d)   break;
                   }
               }
               if(!flag)      break;
         }
         cout<<"Case #"<<x<<": ";
         if(flag)   cout<<c<<endl;
         else       cout<<"IMPOSSIBLE\n";
         x++;
    }
    return 0;
}
