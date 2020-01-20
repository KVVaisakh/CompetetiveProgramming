#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i;
    cin>>t;
    char n[t][100001];
    for(i=0;i<t;i++)   cin>>n[i];
    for(int a=0;a<t;a++)
    {
        i=0;
        int flag=0;
        vector <int> y;
        for(int j=0;n[a][j]!='\0';j++)
        {
            int l=int(n[a][j])-48;
            if(l>=6)
            for(int k=0;n[a][k];k++)
            {
                int m=int(n[a][k])-48;

                if(j!=k)
                    if((l==6  &&  m>4)  ||  (l==9  &&  m==0)  ||  (l==7)  ||  (l==8))
                    {
                        y.push_back(10*l+m);
                        flag=1;
                    }
            }
        }
        if(flag)
        {
            vector <int> z;
            set<int> s( y.begin(), y.end() );
            z.assign( s.begin(), s.end() );
            for(int j=0;z[j]>64 && z[j]<91;j++)  cout<<char(z[j]);
        }
        cout<<endl;
    }
    return 0;
}
