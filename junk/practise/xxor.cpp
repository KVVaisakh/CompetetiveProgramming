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

    i=a[0]^a[1]^a[2];
    cout<<i;
    return 0;
}
