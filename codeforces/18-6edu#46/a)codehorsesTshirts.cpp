#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    int n,x[10]={0},y[10]={0},ans=0;
    cin>>n;
    string a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]=="M")   x[0]++;
        else if(a[i]=="L") x[1]++;
        else if(a[i]=="XL") x[2]++;
        else if(a[i]=="XXL") x[3]++;
        else if(a[i]=="XXXL") x[4]++;
        else if(a[i]=="S") x[5]++;
        else if(a[i]=="XS") x[6]++;
        else if(a[i]=="XXS") x[7]++;
        else if(a[i]=="XXXS") x[8]++;
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(b[i]=="M")   y[0]++;
        else if(b[i]=="L") y[1]++;
        else if(b[i]=="XL")y[2]++;
        else if(b[i]=="XXL") y[3]++;
        else if(b[i]=="XXXL") y[4]++;
        else if(b[i]=="S") y[5]++;
        else if(b[i]=="XS") y[6]++;
        else if(b[i]=="XXS")y[7]++;
        else if(b[i]=="XXXS") y[8]++;
    }
    for(int i=0;i<9;i++)
    {
        ans=ans+abs(x[i]-y[i]);
    }
    cout<<ans/2;

    return 0;
}
