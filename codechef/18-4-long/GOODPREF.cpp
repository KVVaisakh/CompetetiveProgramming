#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    long long n,c,ind,minc,noruns,subtotal,maxc;
    string s;
    cin>>t;
    while(t--)
    {
        vector< long int> negallc(1000,0);
        vector< long int> posallc(1000,0);
        cin>>s>>n;
        c=0;
        subtotal=0;
        noruns=0;
        minc=0;
        maxc=0;
        ind=0;
        long long i,j;
        for(i=0;s[i]!='\0';i++)
        {
            if(s[i]=='a')   c++;
            else            c--;
            minc=min(minc,c);
            maxc=max(maxc,c);
            if(c<=0)        negallc[-c]++;
            else
            {
                 ind++;
                 posallc[c]++;
            }
        }
        if(c<0)
        {
             noruns=ceil(-maxc/c);
             for(j=maxc-1;j>=0;j--)               posallc[j]+=posallc[j+1];
             for(j=1;j<=noruns && j<n;j++)        subtotal+=posallc[-(j*c)+1];
             cout<<subtotal+ind;
        }
        else if(c==0)   cout<<n*ind;
        else
        {
            noruns=ceil(-minc/c);
            for(j=1;j<=-minc;j++)              negallc[j]+=negallc[j-1];
            for(j=1;j<=noruns && j<n;j++)      subtotal+=negallc[j*c-1];
            cout<<subtotal+(n-j)*i+j*ind;
        }
        cout<<endl;
    }
    return 0;
}
