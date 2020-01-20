#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    vector < int > te;
    for(int i=1;i<=100000;i++)   te.push_back(i);
    while(t--)
    {
        int n,q;
        cin>>n;
        int temp,temp2;
        vector < int > segments[2];
        set < int > s[n];
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            cin>>temp2;
            s[i].insert(te.begin()+temp-1,te.begin()+temp2);
        }
        cin>>q;
        for(int i=0;i<q;i++)
        {
            set < int > no;
            vector < int > common;
            int m,c=0;
            cin>>m;
            for(int j=0;j<m;j++)
            {
                cin>>temp;
                no.insert(temp);
            }
            for(int j=0;j<n;j++)
            {
                common.clear();
                set_intersection(s[j].begin(),s[j].end(),no.begin(),no.end(),back_inserter(common));
                if(common.size()%2)   c++;
            }
            cout<<c<<endl;
        }
    }
    return 0;
}
