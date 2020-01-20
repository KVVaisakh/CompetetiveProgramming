#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    string alpha[5]={
    "***************",
	"*.**.**..*.**..",
	"*******..*.****",
	"*.**.**..*.**..",
	"*.*************"
    };
   	char m[5][3*n];
   	memset(m,'0',sizeof(m));
    for(int i=0;i<n;i++)
    {
    	if(s[i]=='A')
    	{
    		for(int j=0;j<5;j++)
    			for(int k=0;k<3;k++)
    				m[j][i*3+k]=alpha[j][k];
    	}
    	else if(s[i]=='B')
    	{
    		for(int j=0;j<5;j++)
    			for(int k=3;k<6;k++)
    				m[j][i*3+k-3]=alpha[j][k];
    	}
    	else if(s[i]=='C')	
    	{
    		for(int j=0;j<5;j++)
    			for(int k=6;k<9;k++)
    				m[j][i*3+k-6]=alpha[j][k];
    	}
    	else if(s[i]=='D')
    	{
    		for(int j=0;j<5;j++)
    			for(int k=9;k<12;k++)
    				m[j][i*3+k-9]=alpha[j][k];
    	}
    	else
    	{
    		for(int j=0;j<5;j++)
    			for(int k=12;k<15;k++)
    				m[j][i*3+k-12]=alpha[j][k];
    	}
    }
    for(int i=0;i<5;i++){
    	for(int j=0;j<n*3;j++)
    		cout<<m[i][j];
    	cout<<endl;}
    return 0;
}