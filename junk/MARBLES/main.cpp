#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        long long i,j,m,n;
        cin>>m>>n;
        m--;
        n--;
        long long ans[1000000];
        for(i=0;i<1000000;i++)  ans[i]=0;

        ans[0] = 1;
        for (i = 1; i <= m-n+1; i ++)   for (j = 1; j <= n; j ++)   ans[j] = ans[j] + ans[j - 1];
        cout<<ans[n]<<"\n";
    }
    return 0;
}
