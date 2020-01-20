#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n;
    cin>>n;
    long a[n];
    for(long i=0;i<n;i++)   cin>>a[i];
    sort(a,a+n);
    for(long i=n-1;i>-1;i--)
        if(a[i]!=pow(long(sqrt(a[i])),2))
        {
            cout<<a[i];
            break;
        }
    return 0;
}
