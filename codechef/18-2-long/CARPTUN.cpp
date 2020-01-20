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
        long long n,temp1;
        long double c,d,s,t;
        cin>>n;
        vector < long long >a;
        for(long long i=0;i<n;i++)
        {
            cin>>temp1;
            a.push_back(temp1);
        }
        cin>>c>>d>>s;
        vector< vector < long double > > car;
        vector< long double > temp;
        for(long long i=0;i<2;i++)
        {
            temp.clear();
            if(!i)
            {
                t=a[0];
                temp.push_back(t);
                for( long long j=1;j<n;j++)
                {
                    t=t+a[j];
                    temp.push_back(t);
                }
            }
            else
            {
                t=(i+1)*a[0];
                temp.push_back(t);
                for( long long j=1;j<n;j++)
                {
                    if(car[i-1][j]>(temp[j-1]))   t=t+car[i-1][j]-temp[j-1]+a[j];
                    else    t=t+a[j];
                    temp.push_back(t);
                }
            }
            car.push_back(temp);
        }
/*        for(long long i=0;i<2;i++)
        {
            for( long long j=0;j<n;j++)
                cout<<car[i][j]<<"\t";
            cout<<endl;
        }*/

        cout<<fixed<<setprecision(9)<<(c-1)*(car[1][n-1]-car[0][n-1])<<endl;
    }
    return 0;
}
