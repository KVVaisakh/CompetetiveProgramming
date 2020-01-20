#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a[4],flag=0;
        for(int j=0;j<4;j++)    cin>>a[j];
        for(int j=1;j<4;j++)
        {
            if(a[0]==a[j])
            {
                switch(j)
                {
                    case 1: if(a[2]==a[3])  cout<<"YES\n";
                            else cout<<"NO\n";
                            break;
                    case 2: if(a[1]==a[3])  cout<<"YES\n";
                            else cout<<"NO\n";
                            break;
                    case 3: if(a[1]==a[2])  cout<<"YES\n";
                            else cout<<"NO\n";
                            break;
                    default:cout<<"error";
                }
                flag=1;
                break;
            }
        }
        if(!flag)   cout<<"NO\n";
    }
    return 0;
}
