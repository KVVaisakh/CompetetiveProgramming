    #include <bits/stdc++.h>
    using namespace std;

     int main()
     {
     	ios_base::sync_with_stdio(false);
     	cin.tie(NULL);
     	cout.tie(NULL);
        long n,q;
        long long temp1,temp2,sum=0;
        cin>>n>>q;
        vector< long long >a;
        for(long i=0;i<n;i++)
        {
            cin>>temp1;
            a.push_back(temp1);
        }
        for(long i=0;i<q;i++)
        {
            cin>>temp1>>temp2;
            for(long j=temp1-1;j<=temp2;j++)    sum=sum+a[j];

        }
     	return 0;
     }
