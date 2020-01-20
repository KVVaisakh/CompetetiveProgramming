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
    char a[n];
    for(int i=0;i<n;i++)      cin>>a[i];
    for(int i=0;i<n-2;i++)
    if(a[i]=='x')
    if(a[i+1]=='x')
    if(a[i+2]=='x')
    {
         for(int j=i+2;j<n-1;j++)    a[j]=a[j+1];
         i--;
         n--;
         c++;
    }
    cout<<c;
    return 0;
}
