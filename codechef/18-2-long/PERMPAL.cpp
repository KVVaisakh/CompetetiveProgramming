#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    map < char , vector < int > > p;
    map < char , vector < int > > :: iterator it;
    deque < int > a;
    while(t--)
    {
        p.clear();
        a.clear();
        string s;
        cin>>s;
        int n,c=0,flag=0,cc=0;
        char centre='0';
        n=s.size();
        for(int i=0;i<n;i++)
        {
            if(p[s[i]].empty())     p[s[i]].push_back(1);
            else                    p[s[i]][0]++;
            p[s[i]].push_back(i);
        }
        for(it=p.begin();it!=p.end();++it)
        {
            if(it->second[0]%2)
            {
                c++;
                centre=it->first;
                cc=it->second[1];
            }
            if(c>1)
            {
                cout<<"-1";
                goto last;
            }
        }
        if(centre!='0')     a.push_front(cc);
        for(it=p.begin();it!=p.end();++it)
        {
            if(it->first!=centre)
            for(int k=1;k<it->second.size();k++)
                if(k%2) a.push_front(it->second[k]);
                else    a.push_back (it->second[k]);
            else
                for(int k=2;k<it->second.size();k++)
                if(k%2) a.push_front(it->second[k]);
                else    a.push_back (it->second[k]);
        }
        for(int i=0;i<n;i++)  cout<<a[i]+1<<" ";
        last:
        cout<<endl;
    }
    return 0;
}
