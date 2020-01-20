#include <iostream>

using namespace std;

int main()
{
    long t,n,index[10];
    for(int i=0;i<10;i++)   index[i]=1;
    cin>>t;
    if(t<11)
    if(t>0)
    for(int j=0;j<t;j++)
    {
        cin>>n;
        long a[n],b;
        for(int i=0;i<n;i++)    cin>>a[i];
        b=a[0];
        for(int i=1;i<n;i++)
        {
               if(a[i]<b)
               {
                   b=a[i];
                   index[j]=i+1;
               }
        }
    }
    for(int i=0;i<t;i++)    cout<<index[i]<<endl;
    return 0;
}
