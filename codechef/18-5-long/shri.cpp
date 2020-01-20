#include<bits/stdc++.h>
   #define pb push_back
   #define pf push_front
   #define mp make_pair
   #define MOD 1000000007
   using namespace std;
   typedef long long ll;
   vector<ll>v(100000,0);
   int main()
   {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   v[0]=1;
   v[1]=1;
  for(ll i=2;i<100000;i++)
     v[i]=(v[i-1]+v[i-2])%MOD;
   ll t;
   ll m,n,suma,sumb,temp;
   cin>>t;
   while(t--)
     {
       suma=0,sumb=0;
       cin>>m>>n;
       for(ll i=0;i<m;i++)
         {
          cin>>temp;
          suma=(suma%MOD+temp%MOD)%MOD;
         }
       for(ll i=0;i<m;i++)
         {
          cin>>temp;
          sumb=(sumb%MOD+temp%MOD)%MOD;
         }
         suma=((m%MOD)*(suma%MOD))%MOD;
         sumb=((m%MOD)*(sumb%MOD))%MOD;
       if(n==1)
         {
          cout<<suma;
         }
       else if(n==2)
         {
          cout<<sumb;
         }
       else
         {
          cout<<((v[n-3]*suma)%MOD+((v[n-2]*sumb)%MOD))%MOD;
         }
         cout<<endl;
     }
   return 0;
   }
