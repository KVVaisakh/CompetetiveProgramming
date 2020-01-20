#include <bits/stdc++.h>
#define pb push_back
#define pf push_front
#define ll long long
#define ld long double

#define mod 1000000007

using namespace std;
static int b[200];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector <ll> a;

    a.pb(6);
a.pb(10);
a.pb(14);
a.pb(22);
a.pb(26);
a.pb(34);
a.pb(38);
a.pb(46);
a.pb(58);
a.pb(62);
a.pb(74);
a.pb(82);
a.pb(86);
a.pb(94);
a.pb(106);
a.pb(118);
a.pb(122);
a.pb(134);
a.pb(142);
a.pb(146);
a.pb(158);
a.pb(166);
a.pb(178);
a.pb(194);
a.pb(15);
a.pb(21);
a.pb(33);
a.pb(39);
a.pb(51);
a.pb(57);
a.pb(69);
a.pb(87);
a.pb(93);
a.pb(111);
a.pb(123);
a.pb(129);
a.pb(141);
a.pb(159);
a.pb(177);
a.pb(183);
a.pb(201);
a.pb(35);
a.pb(55);
a.pb(65);
a.pb(85);
a.pb(95);
a.pb(115);
a.pb(145);
a.pb(155);
a.pb(185);
a.pb(77);
a.pb(91);
a.pb(119);
a.pb(133);
a.pb(161);
a.pb(143);
a.pb(187);
    for(ll i=0;i<57;i++)
    {
      for(ll j=i;j<57;j++)
      {
        if(a[i]+a[j]<=200)
        {
          b[a[i]+a[j]]=1;
        }

      }
    }
    int t,temp;
    cin>>t;
    while(t--)
    {
      cin>>temp;
      if(b[temp]) cout<<"YES";
      else        cout<<"NO";
      cout<<endl;
    }
    return 0;
}
