#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long double t,n,w,c;
    cin>>t;
    while(t--)
    {
         c=0;
         cin>>n>>w;
         for(long double i=pow(10,(n-1));i<pow(10,(n));i++)
         {
             if((fmod(i,10)-int(i/pow(10,n-1)))==w)    c++;
         }
         cout<<fmod(c,1000000007)<<endl;
    }
    return 0;
}
