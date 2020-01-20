#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,n,w;
    cin>>t;
    while(t--)
    {
         cin>>n>>w;
         if(w<10 && w>-10)
         {
             if(w>=0)   cout<<fmod((pow(10,(n-2))*(9-w)),1000000007)<<endl;
             else       cout<<fmod((pow(10,(n-2))*(10+w)),1000000007)<<endl;
        }
        else
        cout<<"0"<<endl;
    }
    return 0;
}
