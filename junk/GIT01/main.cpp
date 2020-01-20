#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t,k;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int m,n,cost1=0,cost2=0,l=0;
        cin>>m>>n;
        char a[m][n];
        for(int j=0;j<m;j++)
        {
            for(k=0;k<n;k++)
            {
                cin>>a[j][k];
                if(l%2)
                {
                    if(a[j][k]=='R')    cost1+=5;
                    else                cost2+=3;
                }
                else
                {
                    if(a[j][k]=='G')    cost1+=3;
                    else                cost2+=5;
                }
                l++;
            }
            if(k%2==0)l++;
        }
        if(cost1<=cost2)        cout<<cost1<<endl;
        else                    cout<<cost2<<endl;
    }
    return 0;
}
