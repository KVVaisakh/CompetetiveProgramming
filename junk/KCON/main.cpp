#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n,k,sum=0,twosum=0,temp=0;
        long long bestsum=0,flag=0,subsum=0,rsum=0,lsum=0,lbestsum=0,rbestsum=0,totalsum=0;
        cin>>n>>k;
        vector<long long> a;
        for(long long j=0;j<n;j++)
        {
            cin>>temp;
            if(temp>0)  flag=1;
            a.push_back(temp);
            sum+=a[j];
        }
        for(long long j=0;j<n;j++)
        {
            subsum=max(subsum+a[j],a[j]);
            bestsum=max(bestsum,subsum);
        }
            for(long long j=0;j<n;j++)
            {
                lsum=lsum+a[j];
                lbestsum=max(lbestsum,lsum);
            }
            for(long long j=n-1;j>=0;j--)
            {
                rsum=rsum+a[j];
                rbestsum=max(rbestsum,rsum);
            }
            if(k==1)    totalsum=bestsum;
            else
            {
                totalsum=lbestsum+rbestsum+(k-2)*sum;
                twosum=lbestsum+rbestsum;
                totalsum=max(twosum,totalsum);
            }
            if(!flag)
            {
                long long maximum=a[0];
                for(long long j=0;j<n-1;j++)
                maximum=max(maximum,a[j+1]);
                cout<<maximum<<endl;
            }
            else if(bestsum>totalsum)
                cout<<bestsum<<endl;
            else
                cout<<totalsum<<endl;
    }
    return 0;
}
