#include <bits/stdc++.h>

using namespace std;

long long total=0,arr[1000000]={0};
long long divide(long long n)
{
    if(n<12)
    {
        arr[n]=n;
        return n;
    }
    if(n==12)
    {
        total+=13;
        return 0;
    }
    long long n2,n3,n4;
    n2=n/2;
    n3=n/3;
    n4=n/4;
    if(n2<1000000)
    {
        if((n2+n3+n4)>n)
        {
            if(arr[n2]==0)    arr[n2]=divide(n2);
            if(arr[n3]==0)    arr[n3]=divide(n3);
            if(arr[n4]==0)    arr[n4]=divide(n4);
            total=total+arr[n2]+arr[n3]+arr[n4];
            return 0;
        }
    }
    else
    {
        if((n2+n3+n4)>n)
        {
            total+=divide(n2);
            total+=divide(n3);
            total+=divide(n4);
            return 0;
        }
    }
    return n;
}

int main()
{
    long long n;
    while(cin>>n)
    {
        total=0;
        divide(n);
        if(total>n)
        cout<<total;
        else cout<<n;
        cout<<"\n";
    }
    return 0;
}
