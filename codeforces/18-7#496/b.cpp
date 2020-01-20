#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
#define ld long double

#define mod 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s,t;
    ll i;
    cin>>s>>t;
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    for(i=0;i<max(s.size(),t.size());i++)
    {
        if(s[i]!=t[i])
        {
            break;
        }
    }
    cout<<s.size()+t.size()-2*i;
    return 0;
}
