#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,pre,flag,test,j;
const ll m = 1e9 + 7;
vector <int> help;
ll ans;


int compute()
{
	ll product=1;
	help.push_back(1);
	for(int i=1;i<=100000;i+=2)
	{
		product=(product*i)%m;
		help.push_back(product);
	}
}

main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>test;
	compute();
	while(test--)
	{
		cin>>n;
		vector <int> skill(n);
		vector <ll> counted;
		for(int i=0;i<n;i++)
			cin>>skill[i];

		sort(skill.begin(),skill.end());

		pre=skill[0];
		counted.push_back(1);
		j=0;
		for(int i=1;i<n;i++)
		{
			if(pre==skill[i])
				counted[j]+=1;
			else
			{
				j++;
				counted.push_back(1);
			}
			pre=skill[i];
		}
		ans=1;
		flag=0;
		for(int i=0;i<counted.size();i++)
		{
			if(flag==0)
			{
				if(counted[i]%2==0)
				{
					ans=(ans*help[(counted[i])/2])%m;
					flag=0;
				}
				else
				{
					if(counted[i]>1)
					{
						ans=(ans*counted[i])%m;
						ans=(ans*help[(counted[i]-1)/2])%m;
					}
					flag=1;
				}
			}
			else
			{
				ans=(ans*counted[i])%m;
				counted[i]=counted[i]-1;
				if(counted[i]%2==0)
				{
					ans=(ans*help[(counted[i])/2])%m;
					flag=0;
				}
				else
				{
					if(counted[i]>1)
					{
						ans=(ans*counted[i])%m;
						ans=(ans*help[(counted[i]-1)/2])%m;
					}
					flag=1;
				}
			}
		}
		cout<<ans<<endl;
	}

}
