#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        vector<char>a;
        vector<char>b;
        vector<char>c;
        char temp;
        long long m,n,i=0,j=0,k=0,diff=1;
        cin>>m>>n;
        for(i=0;i<m;i++)
        {
            cin>>temp;
            a.push_back(temp);
        }
        for(i=0;i<n;i++)
        {
            cin>>temp;
            b.push_back(temp);
        }
        i=0;
        if(a[1]==b[0])
        {
            c.push_back(a[0]);
            i++;
        }
        else
        {
            c.push_back(b[0]);
            j++;
        }
        for(;k<m+n-1;k++)
        {
            cout<<k<<i<<j<<c[k]<<a[i]<<b[j]<<endl;
            if(i<m && c[k]==a[i])
            {
                c.push_back(a[i]);
                cout<<"1";
                i++;
            }
            else if(j<n && c[k]==b[j])
            {
                c.push_back(b[j]);
                cout<<"2";
                j++;
            }
            else if(j+1<n)
            {
                if(a[i]==b[j+1])
                {
                    c.push_back(b[j]);
                    cout<<"3";
                    j++;
                }
            }
            else if(i<m)
            {
                cout<<"4";
                c.push_back(a[i]);
                i++;
            }
            else if(j<n)
            {
                c.push_back(b[j]);
                cout<<"5";
                j++;
            }
     //       if(c[k]!=c[k-1])diff++;
        }
     //   cout<<diff<<endl;
    }
    return 0;
}
