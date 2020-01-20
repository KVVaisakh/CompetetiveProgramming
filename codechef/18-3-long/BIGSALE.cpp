#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long double n,p,q,d,loss=0,np;
        cin>>n;
        for(long i=0;i<n;i++)
        {
            cin>>p>>q>>d;
            np=p*(100+d)/100*q;
            loss=loss-(np-p*q-np*d/100);
        }
        cout<<fixed<<setprecision(10)<<loss<<endl;
    }
    return 0;
}
