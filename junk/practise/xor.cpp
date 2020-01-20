#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i=0,a[100];
    do
    {
        cin>>a[i];
        i++;
    }while(a[i-1]);
    long long t1=0,t2=0,x;
    for(long long i=15;i>=0;i--)
    {
        t1=0;
        for(int j=0;a[j];j++)
        {
            t1+=a[j]^i;
        }
        t2=max(t1,t2);
        if(t1==t2)      x=i;
    }
    cout<<x;
    return 0;
}
