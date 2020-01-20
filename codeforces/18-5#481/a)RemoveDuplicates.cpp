#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=n-1;i>=0;i--)
    if(a[i])
    for(int j=i-1;j>=0;j--)
    if(a[i]==a[j])
    {
         a[j]=0;
         c++;
    }
    cout<<n-c<<endl;
    for(int i=0;i<n;i++) if(a[i])  cout<<a[i]<<" ";
    return 0;
}
