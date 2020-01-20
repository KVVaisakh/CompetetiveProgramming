#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int t=97;
    cin>>s;
    long long i;
    for(i=0;i<s.size();i++)
    {
        if(int(s[i])<=t)
        {
            s[i]=char(t);
            if(s[i]==int('z'))goto last;
            t++;
        }
    }
    last:
    if(i==s.size()) cout<<"-1";
    else            cout<<s;
    return 0;
}
