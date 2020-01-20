#include <bits/stdc++.h>
using namespace std;

struct tpmt
{
    int x,y;
}o,o1,o2;

struct tmt
{
    int a,b,c,d;
}o3;

int main()
{
   int n,m,q,qi[10][4];
   vector <tpmt> ot;
   vector <tmt> mt;
   cin>>n>>m>>q;
   for(int i=0;i<n-1;i++)
   {
        cin>>o2.x>>o2.y;
        ot.push_back(o2);
   }
   o2.x=0;
   o2.y=0;
   ot.push_back(o2);
   for(int i=0;i<m;i++)
   {
       cin>>o3.a>>o3.b>>o3.c>>o3.d;
       mt.push_back(o3);
   }
   o3.a=o3.b=o3.c=o3.d=0;
   mt.push_back(o3);
   for(int i=0;i<m+2;i++)cout<<mt[i].a<<mt[i].b<<mt[i].c<<mt[i].d<<endl;
   for(int i=0;i<q;i++)  for(int j=0;j<4;j++)  cin>>qi[i][j];
   for(int z=0;z<q;z++)
   {
        vector <vector<tpmt> > path;
        vector <tpmt> pmt;
        o.x=qi[z][0];
        o.y=qi[z][1];
        pmt.push_back(o);
        path.push_back(pmt);
        int l=0,i=0,possible=0,m=0;
        for(int k=0;path[k][0].x;k++)
        {
            m=0;
            for(l=0;m<=l;l++)
            {
                int flag1=1,flag2=1;
                for(i=0;flag1 || flag2;i++)
                {
                    if(flag1)
                    if(path[k][l].x==mt[i].a)
                    if(path[k][l].y==mt[i].b)
                    {
                        o1.x=mt[i].c;
                        o1.y=mt[i].d;
                        pmt.push_back(o1);
                        m++;
                        if(o1.x==qi[z][2])
                        if(o1.y==qi[z][3])
                        {
                            cout<<k+1<<" ";
                            possible=1;
                            goto end;
                        }
                    }

                    if(flag2)
                    if(path[k][l].x==ot[i].x)
                    {
                        o1.x=ot[i].x;
                        o1.y=path[k][l].y;
                        pmt.push_back(o1);
                        m++;
                        if(o1.x==qi[z][2])
                        if(o1.y==qi[z][3])
                        {
                            cout<<k+1<<" ";
                            possible=1;
                            goto end;
                        }
                    }
                    if(mt[i+1].a==0) flag1=0;
                    if(ot[i+1].x==0) flag2=0;
                }
            }
            path.push_back(pmt);
        }
        end:
        if(!possible) cout<<"impossible";
        cout<<endl;
   }
   return 0;
}
