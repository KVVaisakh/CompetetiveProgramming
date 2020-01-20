#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n;
    cin>>n;
    long a[n],c=1;
    for(long i=0;i<n;i++)   cin>>a[i];
    sort(a,a+n);
    for(long i=n-1;i>-1;i--)
    {
        if(a[i]==a[i-1])        c++;
        else if(c%2==1)
        {
            cout<<"Conan";
            goto last;
        }
        else    c=1;
    }
    cout<<"Agasa";
    last:
    return 0;
}
