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
    string s;
    cin>>s;
    ll i, j;
    for (i = 0; i < s.size()-1; i++)
    {
        bool swapped=0;
        for (j = 0; j < s.size()-i-1; j++)
        {
            if (s[j] > s[j+1])
            {
                if(s[j]=='2' && s[j+1]=='0');
                else
                {
                    char temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                    swapped=true;
                }
            }
        }
        if (swapped == false)
        break;
    }

    cout<<s;
    return 0;
}
