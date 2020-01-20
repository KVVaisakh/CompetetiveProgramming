#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long double h,d,c,n,t,H,m;
    cin>>H>>m>>h>>d>>c>>n;
    if(H<20)
    {
      t=h+(60*(19-H)+60-m)*d;
      if((c*ceil(t/n)*4/5)<(c*ceil(h/n)))
        cout<<setprecision(4)<<fixed<<c*ceil(t/n)*4/5;
      else
        cout<<setprecision(4)<<fixed<<c*ceil(h/n);
    }
    else
      cout<<setprecision(4)<<fixed<<c*ceil(h/n);
    return 0;
}
