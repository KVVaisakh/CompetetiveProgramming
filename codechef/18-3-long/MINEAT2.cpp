    #include <bits/stdc++.h>
    using namespace std;

     int main()
     {
     	ios_base::sync_with_stdio(false);
     	cin.tie(NULL);
     	cout.tie(NULL);

    	 int t;
     	cin>>t;
     	while(t--)
     	{
     		long double n,h,maxm=0,ind3=-1,maxm2=0,ind=-1,ind2=-1,maxm3=0;
     		cin>>n>>h;
     		long double temp;
     		vector<long double>a;
     		vector<pair<long double,long long> >b;
     		for(long i=0;i<n;i++)
     		{
     			cin>>temp;
     			a.push_back(temp);
     		}
     		sort(a.begin(),a.end());
     		for(long i=n-1,j=0;j<h-n;i--,j++)
     		{
     		    if(i>=0)
                {
                    if(maxm)
                    {
                    if((a[i]/2)>(maxm*b[ind].second/(b[ind].second+1)))
                    {
                        again2:
                        b.push_back(make_pair(a[i]/2,2));
      					maxm3=maxm2;
      					ind3=ind2;
      					maxm2=maxm;
      					ind2=ind;
      					maxm=a[i]/2;
      					ind=b.size()-1;
                    }
                    else
                    {
                        again:
                        b[ind].first=b[ind].second*b[ind].first/(++b[ind].second);
                        if(maxm2>b[ind].first)
                        {
                            maxm2=maxm3;
                            ind2=ind3;
                            maxm=maxm2;
                            ind=ind2;
                        }
                        else	maxm=b[ind].first;
                    }
                    }
                    else goto again2;
                }
     			else goto again;
     		/*	cout<<a[i]<<endl;
     			for(long z=0;z<b.size();z++)   cout<<b[z].first<<" "<<b[z].second<<"\t";
     			cout<<endl;
     			cout<<maxm<<" "<<ind<<" "<<maxm2<<" "<<ind2<<" "<<maxm3<<" "<<ind3<<endl<<endl;*/
     		}
     		if(maxm)	cout<<ceil(maxm);
     		else		cout<<a[n-1];
     		cout<<endl;
     	}
     	return 0;
     }
