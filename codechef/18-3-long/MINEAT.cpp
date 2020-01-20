    #include <bits/stdc++.h>
    using namespace std;

     int main()
     {
     	ios_base::sync_with_stdio(false);
     	cin.tie(NULL);
     	cout.tie(NULL);
        int t;
        long double n,h,temp,top1,top2;
     	cin>>t;
     	while(t--)
     	{
     	    priority_queue< pair <long double,long long> >a;
     		cin>>n>>h;
     		for(long i=0;i<n;i++)
     		{
     			cin>>temp;
     			a.push(make_pair(temp,1));
     		}
     		for(long i=0;i<h-n;i++)
     		{
     		    top1=a.top().first;
     		    top2=a.top().second;
     			a.push(make_pair(top2*top1/(top2+1),top2+1));
     			a.pop();
     		}
     		cout<<ceil(a.top().first)<<endl;
     	}
     	return 0;
     }
