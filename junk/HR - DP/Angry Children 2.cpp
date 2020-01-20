#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,k,temp,sum=0,tsum=0,ti=0;
    vector < long long > no;
    cin>>n>>k;
    for(long i=0;i<n;i++)
    {
        cin>>temp;
        no.push_back(temp);
    }
    sort(no.begin(),no.end());
    vector < vector <long long> >mat(n,vector <long long>(0));
    for(long long i=1;i<n;i++)
        mat[i-1][i]=no[i]-no[i-1];
    for(long i=0;i<n-k;i++)
    {
        tsum=accumulate(no.begin()+i,no.begin()+i+k,0);
        sum=min(sum,tsum);
        if(sum==tsum)   ti=i;
    }

    return 0;
}
