#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m,temp,maxm=0,smaxm=-1000000001,,sminm=100000001,tmaxm=0,tminm,flag=0,minm;
    cin>>m>>n;
    vector < long long > a;
    vector < long long > b;
    for(int i=0;i<m;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        b.push_back(temp);
    }
    minm=*min_element(b.begin(),b.end());
    tmaxm=*max_element(a.begin(),a.end());
    tminm=*min_element(a.begin(),a.end());
    maxm=*max_element(b.begin(),b.end());
    if(tmin>=0)     for(int i=0;i<m;i++)    if(smaxm<a[i])  {if(flag || a[i]!=tmaxm)  smaxm=a[i]; else flag=1;}
    else
    {
        if(minm>=0)      for(int i=0;i<m;i++)    if(smaxm<a[i])  {if(flag || a[i]!=tmaxm)  smaxm=a[i]; else flag=1;}
        else if(maxm<=0)  {maxm=1000000001;  for(int i=0;i<m;i++)    if(smaxm>a[i])  {if(flag || a[i]!=tminm)  smaxm=a[i]; else flag=1;}}
        else if(abs(minm)< maxm)  {  smaxm=1; sminm=1; for(int i=0;i<m;i++)    if(maxm*a[i]>minm*a[i])  {if(flag || a[i]!=tmaxm)  smaxm=a[i]; else flag=1;}}
        else    {smaxm=1000000001;  for(int i=0;i<m;i++)    if(smaxm>a[i])  {if(flag || a[i]!=tminm)  smaxm=a[i]; else flag=1;}}
    }
    if(smaxm<=0)
    {
        if(minm<0)
        {
            smax
        }

        maxm=*min_element(b.begin(),b.end());

    }
    else        maxm=*max_element(b.begin(),b.end());
    cout<<smaxm*maxm;
    return 0;
}
