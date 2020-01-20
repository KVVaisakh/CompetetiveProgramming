#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector < bool > prime(1000000000,1);
    prime[1]=0;
    long long t,mxm,m[10],temp;
    vector < long long > n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>m[i]>>temp;
        n.push_back(temp);
    }
    vector < long long > :: iterator maxm;
    maxm=max_element(n.begin(),n.end());
    mxm=*maxm;
    for(long long j=2;j<=mxm/2;j++)    if(prime[j])     for(long long i=2*j;i<=mxm;i=i+j)   prime[i]=0;
    for(int i=0;i<t;i++)         for(long long j=m[i];j<=n[i];j++)    if(prime[j])    cout<<j<<endl;
    return 0;
}
