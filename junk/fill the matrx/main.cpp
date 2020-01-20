#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t,n,q,flag;
        flag=0;
        cin>>n>>q;
        int b[q][3];
        for(int i=0;i<q;i++)    for(int j=0;j<3;j++)    cin>>b[i][j];
        for(int i=0;i<q;i++)
        {
            int a[q][3],m=0;
            for(int j=0;j<3;j++)    a[i][j]=b[i][j];
            for(int k=0;k<q;k++)
            {
                if(k!=i)
                {
                    for(int l=0;l<2;l++)
                    {
                        if(a[m][1]==b[k][l])
                        {
                            if(!l)
                            {
                                a[m][2]=a[m][2]+b[k][2];
                                a[m][1]=b[k][1];
                                m++;
                                break;
                            }
                            else
                            {
                                a[m][2]=a[m][2]-b[k][2];
                                a[m][1]=b[k][0];
                                m++;
                                break;
                            }
                        }
                        if(a[i][1]==a[i][0])
                        {
                            if(a[i][2]==b[k][2])    cout<<"yes\n";
                            else                    cout<<"no\n";
                            flag=1;
                            break;
                        }
                    }
                }
            }
        }
        if(!flag)   cout<<"yes\n";
    return 0;
}
