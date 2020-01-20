#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    long long n;
    long long c;
    long double x;
    cin>>t;
    while(t--)
    {
         c=0;
         cin>>n;
         map < long double,long long >a;
         map < long double,long long > :: iterator it1;
         map < long double,long long > :: iterator it2;
         for(long long i=0;i<n;i++)
         {
              cin>>x;
              if(!a[x])       a.insert(make_pair(x,1));
              else            a[x]++;
         }
         for(it1=a.begin();it1!=a.end();it1++)
         {
              for(it2=it1;it2!=a.end();it2++)
              {
                   if(it1==it2)
                   {
                        if(it1->second>=2)        c=c+(it1->second*(it1->second-1))/2;
                   }
                   else
                   {
                        if(a[(it1->first+it2->first)/2]) c=c+it1->second*it2->second;
                   }
              }
         }
         cout<<c<<endl;
    }
    return 0;
}
