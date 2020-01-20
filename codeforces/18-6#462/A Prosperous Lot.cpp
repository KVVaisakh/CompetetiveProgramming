#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long k;
    cin>>k;
    if(k>36)   cout<<"-1";
    else
    do
    {
        if(k==0)    cout<<"1";
        if(k%2==0)
        {
            cout<<"8";
            k=k-2;
        }
        else
        {
            cout<<"6";
            k--;
        }
    }while(k);
    return 0;
}
