#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long t;
    cin>>t;
    while(t--)
    {
        long long n,k,s,c=0,rc=0,flag=0;
        cin>>n>>k>>s;
        if(n>=k)    flag=2;
        for(long i=0;i<s;i++)
        {
            flag=3;
    //        cout<<rc<<"  "<<c<<endl;
            if((s-i)*k<=rc)
            {
                cout<<c<<endl;
                flag=1;
                break;
            }
            else if((i+1)%7!=0)
            {
                c++;
                rc=rc+n-k;
            }
            else if(rc>=k)
                rc-=k;
            else
            {
                cout<<"-1\n";
                flag=1;
                break;
            }
        }

        if(flag==2)   cout<<"-1\n";
        if(flag==3)   cout<<c<<endl;


    }
    return 0;
}
