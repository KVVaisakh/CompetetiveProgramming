#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,q=1;
    long long n,temp;
    vector < long long > v;
    vector < long long > x;
    cin>>t;
    while(t--)
    {
         v.clear();
         cin>>n;
         for(long long i=0;i<n;i++)
         {
              cin>>temp;
              v.push_back(temp);
         }
         x=v;
         sort(x.begin(),x.end());
         int done=0;
         while(!done)
         {
              done=1;
              for(long long i=0;i<n-2;i++)
              {
                   if(v[i]>v[i+2])
                   {
                        done=0;
                        temp=v[i];
                        v[i]=v[i+2];
                        v[i+2]=temp;
                   }
              }
         }
         int flag=0;
         cout<<"Case #"<<q<<": ";
         for(long long i=0;i<n;i++)
               if(x[i]!=v[i])
               {
                    cout<<i<<endl;
                    flag=1;
                    break;
               }
          if(!flag) cout<<"OK\n";
          q++;
    }
    return 0;
}
