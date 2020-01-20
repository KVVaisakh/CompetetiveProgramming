#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long t;
    cin>>t;
    while(t--)
    {
        string s;
        long c=0;
        char chef[5]={"chef"};
        set < char > temp;
        set < char > substring(chef,chef+4);
        cin>>s;
        for(long i=0;i<s.length();i++)
        {
            set < char > temp(&s[i],&s[i]+4);
            if(temp==substring)
                c++;
        }
        if(c)        cout<<"lovely "<<c;
        else         cout<<"normal";
        cout<<endl;
    }
    return 0;
}
