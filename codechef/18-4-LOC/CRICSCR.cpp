#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,r,w,tempr=0,flag=0;
    cin>>n;
    while(n--)
    {
         cin>>r>>w;
         if(tempr>r) flag=1;
         tempr=r;
         if(w>10)    flag=1;
         if(w==10)  if(n)     flag=1;
         if(flag)   break;
    }
    if(flag)   cout<<"NO";
    else       cout<<"YES";
    return 0;
}
