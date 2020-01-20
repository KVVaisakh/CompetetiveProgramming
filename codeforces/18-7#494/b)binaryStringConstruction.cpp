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
    ll a,b,x,i=0;
    char z;
    cin>>a>>b>>x;
    ll tempa=a,tempb=b,min;
    char s[a+b+1];
    if(a<b)
    {
        if(a<x) z='b';
        else    z='a';
    }
    else
    {
        if(b<x) z='a';
        else    z='b';
    }
    if(z=='a')
    {
        s[0]='0';
        a--;
    }
    else
    {
        s[0]='1';
        b--;
    }
    while(x>1)
    {
        if(s[i]=='1')   {s[i+1]='0';a--;}
        else            {s[i+1]='1';b--;}
        i++;
        x--;
    }
    ll j,k;
    if(x==1)
    {
        if(s[i]=='0')
        {
            for(j=0;j<a;j++) s[i+j+1]='0';
            for(k=0;k<b;k++) s[i+j+k+1]='1';
        }
        else
        {
            for(k=0;k<b;k++) s[i+k+1]='1';
            for(j=0;j<a;j++) s[i+j+k+1]='0';
        }
    }

    for(ll i=0;i<(tempa+tempb);i++)   cout<<s[i];
    return 0;
}
