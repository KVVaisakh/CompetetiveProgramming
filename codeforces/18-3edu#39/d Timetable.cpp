#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long d,h,s;
    cin>>d>>h>>s;
    vector < int >a;
    for(long i=0;i<d;i++)
    {
        long long t1[2]={0,0};
        long long t2[2]={0,0};
        int temp;
        for(long j=0;j<h;j++)
        {
            cin>>temp;
            if(t1[1]<=s)    t1[temp]++;
            else
            {
                a.push_back(t1[0]);
                t1[0]=t2[0];
                t1[1]=t2[1];
                t2[0]=0;
                t2[1]=0;

            }
            if(t1[1]==s)    t2[temp]++;
        }
        a.push_back()
    }
    sort(a.begin(),a.end());
    for(long i=a.size()-1;i>-1;i--)
    {

    }
    return 0;
}
