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
    ll a[100],b[100];
    a[0]=2;
    a[1]= 3;
    a[2]= 5;
    a[3]= 7;
    a[4]= 11;a[5]= 13;a[6]= 17;a[7]= 19;a[8]= 23;a[9]= 29;
    a[10]=31;a[11]=37;a[12]=41;a[13]=43;a[14]=47;a[15]= 53;a[16]= 59;a[17]= 61;a[18]= 67;a[19]= 71;
    a[20]=73;a[21]=79;a[22]=83;a[23]=89;a[24]=97;a[25]= 101;a[26]=103;a[27]=107;a[28]=109;a[29]=113;
    a[30]=127;a[31]=131;a[32]=137;a[33]=139;a[34]= 149;a[35]= 151;a[36]= 157;a[37]= 163;a[38]= 167;a[39]= 173;
    a[40]=179;a[41]= 181;a[42]= 191;a[43]= 193;a[44]= 197;a[45]=199;
    int k=0;
    for(int i=0;i<46;i++)
    {
      for(int j=i+1;j<46;j++)
      {
        if(a[i]*a[j]<=201)
        {cout<<"a.pb("<<a[i]*a[j]<<");"<<endl;
        k++;}
      }
    }
    cout<<k<<endl;
    cin>>a[0];
    return 0;
}
