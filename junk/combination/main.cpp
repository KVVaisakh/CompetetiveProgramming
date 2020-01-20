#include <iostream>

using namespace std;

int main()
{
    int ans[100];
    for(int i=0;i<100;i++)  ans[i]=0;
    int i,j,n,m;
    cin>>m>>n;
    if (n > m) cout<<"0";
    if( (n == 0) || (m == n) ) cout<<"1";
    ans[0] = 1;
    for (i = 1; i <= m-n+1; i ++)
    {
        for (j = 1; j <= n; j ++)
        {
            ans[j] = ans[j] + ans[j - 1];
            cout<<ans[j]<<"\t";
        }
        cout<<endl;
    }
    cout<<ans[n];
}
