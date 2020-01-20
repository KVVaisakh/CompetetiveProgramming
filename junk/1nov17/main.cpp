#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string a;
        int counta=0,countb=0,l;
        cin>>a;
        l=a.length();
        for(int j=0;a[j];j++)
        {
            if(a[j]=='.')
            {
                if(a[j-1]=='A'||a[j-1]=='.')
                {
                    if(j+1!=l)
                    {
                        if(a[j+1]=='A'||a[j+1]=='.')
                        counta++;
                    }
                    else
                        counta++;

                }
                if(a[j-1]=='B'||a[j-1]=='.')
                {
                    if(j+1!=l)
                    {
                        if(a[j+1]=='B'||a[j+1]=='.'||a[j+1]=='/0')
                        countb++;
                    }
                    else
                        countb++;
                }
            }
        }
        cout<<counta<<countb<<endl;

    }
    return 0;
}
