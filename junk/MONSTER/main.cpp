#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,temp;
    cin>>n;
    long long q;
    vector <long long > h;
    for(long long i=0;i<n;i++)
    {
        cin>>temp;
        h.push_back(temp);
    }
    cin>>q;
    long long x,y;
    for(long long i=0;i<q;i++)
    {
        cin>>x>>y;
        for(long long j=0;j<n;j++)
        if(((j&x)==j) && h[j])
        {
            h[j]-=y;
            if(h[j]<=0)     n--;

        }
        cout<<n<<endl;
    }
    return 0;
}
