#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m,t=0;
    cin>>m>>n;
    start:
    if(m==0 || n==0)
    {
        cout<<m<<" "<<n;
        return 0;
    }
    else if(m>=2*n)
    {
        t=m/(2*n);
        m-=(t*2*n);
        goto start;
    }
    else if(n>=2*m)
    {
        n-=2*m;
        goto start;
    }
    cout<<m<<" "<<n;
    return 0;
}
