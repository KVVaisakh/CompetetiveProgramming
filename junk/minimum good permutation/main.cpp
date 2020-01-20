#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>t;
    if(t>10)  exit(0);
    for(int j=0;j<t;j++)
    {
        cin>>n;
        if(n<2 || n>100000)     exit(0);
        int p[n];
        for(int i=0;i<n;i=i+2)
        {
            p[i]=i+2;
            p[i+1]=i+1;
        }
        if(n%2==1)
        {
            p[n-1]=p[n-2];
            p[n-2]=n;
        }
        for(int i=0;i<n;i++)   cout<<p[i]<<"\t";
    }
    return 0;
}
