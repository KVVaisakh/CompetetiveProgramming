#include <bits/stdc++.h>
#define pb push_back
#define ff first
#define ll long long
#define ss second
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(v) (v).begin(),(v).end()
#define maxv(v) max_element(all(v))
#define minv(v) min_element(all(v))
#define bclock auto start=high_resolution_clock::now();
#define eclock auto stop = high_resolution_clock::now();
#define calctime auto duration=duration_cast<milliseconds>(stop-start); cout<<"\nTime "<<duration.count()<<endl;
using namespace std;
using namespace std::chrono;
ll maxl(ll a,ll b) { if(a>b) return a; return b; }
ll minl(ll a,ll b) { if(a<b) return a; return b; }
int main() {
    IOS;
    int n;
    cin>>n;
    map<ll,set<pair<ll,ll>> >m1;
    map<ll,set<pair<ll,ll>> >m2;
    for(int i=0;i<n;i++) 
    {
        ll xi,yi,val;
        cin>>xi>>yi>>val;
        m1[xi].insert({yi,val});
        m2[yi].insert({xi,val});    
    
        ll s=0;
        map<ll,set<pair<ll,ll>> >::iterator x;
        for(x=m1.begin();x!=m1.end();++x) {
            ll f=x->ff;
            for(auto it2=m1[f].begin();it2!=m1[f].end();++it2) {
                auto it=it2;
                ++it;
                if(it==m1[f].begin()) {
                    s+=(it->ss);
                }
                else {
                    auto it3=it2;
                    it3--;
                    if(it==m1[f].end()) {
                        s+=it3->second;
                    }
                    else {
                        s+=maxl(it3->second,it->second);
                    }
                }
            }
        }
        for(x=m2.begin();x!=m2.end();++x) {
            ll f=x->ff;
            for(auto it2=m2[f].begin();it2!=m2[f].end();++it2) {
                auto it=it2;
                ++it;
                if(it==m2[f].begin()) {
                    s+=(it->ss);
                }
                else {
                    auto it3=it2;
                    it3--;
                    if(it==m2[f].end()) {
                        s+=it3->second;
                    }
                    else {
                        s+=maxl(it3->second,it->second);
                    }
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}







