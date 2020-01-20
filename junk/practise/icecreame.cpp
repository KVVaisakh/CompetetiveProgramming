#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        double r1,r2,h1,h2;
        cin>>r1>>h1>>r2>>h2;
        cout<<fixed<<setprecision(15)<<acos(-1)*r1*r1*(h1+2*r1)/3<<" "<<acos(-1)*r2*r2*h2;
        cout<<endl;
    }
    return 0;
}
