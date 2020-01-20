#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long double n,m,a[5000],b[5000],minpr=1000;
    long c;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(minpr>(a[i]/b[i]))
        {
            minpr=a[i]/b[i];
            c=i;
        }

    }
    cout<<setprecision(10)<<m*a[c]/b[c];
    return 0;
}
