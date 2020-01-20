#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector < vector<int> > allpath;
    int noofplanets,noofspecialtunnels,noofqueries,k=0;
    cin>>noofplanets>>noofspecialtunnels>>noofqueries;
    int tunnels[noofplanets-1][2],specialtunnels[noofspecialtunnels][4],queries[4];
    for(int i=0;i<noofplanets-1;i++)        for(int j=0;j<2;j++)    cin>>tunnels[i][j];
    for(int i=0;i<noofspecialtunnels;i++)   for(int j=0;j<4;j++)    cin>>specialtunnels[i][j];
    for(int i=0;i<noofqueries;i++)
    {
        k=0;
        for(int j=0;j<4;j++)    cin>>queries[j];
        vector<int>path;
        path.push_back(queries[0]);
        path.push_back(queries[1]);
        path.push_back(0);
        allpath.push_back(path);
        do
        {
            for(int l=0;allpath[k][l];l=l+2)
            {
                for(int m=0;m<noofplanets-1;m++)
                {
                    if(allpath[k][l]==tunnels[m][0])
                    {
                        if(tunnels[m][1]==queries[2] && allpath[k][l+1]==queries[3])
                        {
                            cout<<k<<endl;
                            goto next;
                        }
                        int found=0;
                        for(int n=0;n<k;n++)
                        for(int o=0;allpath[n][o];o=o+2)
                        if(allpath[n][o]==tunnels[m][1] && allpath[n][o+1]==allpath[k][l+1])
                        {
                            found=1;
                            break;
                        }
                        if(!found)
                        {
                            path.push_back(tunnels[m][1]);
                            path.push_back(allpath[k][l+1]);
                        }
                    }
                }
                for(int m=0;m<noofspecialtunnels;m++)
                {
                    if(allpath[k][l]==specialtunnels[m][0]  &&  allpath[k][l]==specialtunnels[m][1] )
                    {
                        if(specialtunnels[m][2]==queries[2] && specialtunnels[m][3]==queries[3])
                        {
                            cout<<k<<endl;
                            goto next;
                        }
                        int found=0;
                        for(int n=0;n<k;n++)
                        for(int o=0;allpath[n][o];o=o+2)
                        if(allpath[n][o]==specialtunnels[m][2] && allpath[n][o+1]==specialtunnels[m][3])
                        {
                            found=1;
                            break;
                        }
                        if(!found)
                        {
                            path.push_back(specialtunnels[m][2]);
                            path.push_back(specialtunnels[m][3]);
                        }
                    }
                }
            }
            path.push_back(0);
            allpath.push_back(path);
            k++;
        }while(allpath[k][0]);
        if(!allpath[k][0])    cout<<"impossible\n";
        next:;
    }
    return 0;
}
